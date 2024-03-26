#include "list.h"
struct individuallist *mInformation;
/*读取文件对比id和密码删除账号*/ 
int logout(){
	char name[20];
	char password[20];
	char password2[20];
	mInformation=individualcreat(); 
    individuallistread(mInformation); 
	while (1)
	{
		printf("请输入用户名：");
		scanf("%s", name);
		if (judge(name))
		{
			int b=individualcheck(mInformation,name);
			if (b==1)
			{
				printf("该用户名不存在，请重新输入！\n");
				continue;
			}
			while (1)
			{
				printf("请输入密码：");
				scanf("%s", password);
				if (judge(password) == 1)
				{	strcpy(password2,individualcheck2(mInformation,name));
					if (strcmp(password, password2) == 0)
					{
						individualOut(mInformation,name);
						individuallistwrite(mInformation);
						return 1;
					}
					else
					{
						printf("密码不正确，请重新输入密码！\n");
						continue;
					}
					break;
				}
				else
				{
					printf("密码不合法，请重新输入！\n");
					continue;
				}
			}
		}
		else
		{
			printf("用户名不合法，请重新输入！\n");
			continue;
		}
	}
}
