#include "list.h"
struct individuallist *mInformation;
/*登录需要读取文件，然后依据文件和输入的id进行下一步操作，登录成功后将id传出方便后续操作*/ 
int login(char *str){
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
						strcpy(str,name);
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
