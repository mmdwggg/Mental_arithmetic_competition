#include "list.h" 
struct individuallist *mInformation;
/*ע��ʱ��Ȼ��Ҫ��ȡ�ļ����ж��˺��Ƿ��ظ�*/ 
int regist()
{
	char name[20];
	char password[20];
	char password2[20];
	mInformation=individualcreat(); 
    individuallistread(mInformation); 
	while (1)
	{
		printf("�������û�����(����8����18���ַ���ֻ�������ֻ���ĸ���)");
		scanf("%s", name);
		if (judge(name))
		{
			int b=individualcheck(mInformation,name);
			if (b==0)
			{
				printf("�û����Ѵ��ڣ����������룡\n");
				continue;
			}
			while (1)
			{
				printf("���������룺(����8����18���ַ���ֻ�������ֻ���ĸ���)");
				scanf("%s", password);
				if (judge(password) == 1)
				{
					printf("���ٴ��������룺");
					scanf("%s", password2);
					if (strcmp(password, password2) == 0)
					{
						printf("ע��ɹ������μ������û��������룡\n");
						printf("�����û���Ϊ��%s\n", name);
						printf("��������Ϊ��%s\n", password);
						appendAaccount(name, password);
						system("pause");
  					    system("cls");
						return 1;
					}
					else
					{
						printf("�������벻һ�£��������������룡\n");
						continue;
					}
					break;
				}
				else
				{
					printf("���벻�Ϸ������������룡\n");
					continue;
				}
			}
		}
		else
		{
			printf("�û������Ϸ������������룡\n");
			continue;
		}
	}
} 
