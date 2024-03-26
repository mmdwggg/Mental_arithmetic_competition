#include "list.h" 
struct individuallist *mInformation;
/*注册时依然需要读取文件，判断账号是否重复*/ 
int regist()
{
	char name[20];
	char password[20];
	char password2[20];
	mInformation=individualcreat(); 
    individuallistread(mInformation); 
	while (1)
	{
		printf("请输入用户名：(长度8——18个字符，只能以数字或字母组成)");
		scanf("%s", name);
		if (judge(name))
		{
			int b=individualcheck(mInformation,name);
			if (b==0)
			{
				printf("用户名已存在，请重新输入！\n");
				continue;
			}
			while (1)
			{
				printf("请输入密码：(长度8——18个字符，只能以数字或字母组成)");
				scanf("%s", password);
				if (judge(password) == 1)
				{
					printf("请再次输入密码：");
					scanf("%s", password2);
					if (strcmp(password, password2) == 0)
					{
						printf("注册成功，请牢记您的用户名和密码！\n");
						printf("您的用户名为：%s\n", name);
						printf("您的密码为：%s\n", password);
						appendAaccount(name, password);
						system("pause");
  					    system("cls");
						return 1;
					}
					else
					{
						printf("两次密码不一致，请重新设置密码！\n");
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
