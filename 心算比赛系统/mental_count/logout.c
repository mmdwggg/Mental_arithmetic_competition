#include "list.h"
struct individuallist *mInformation;
/*��ȡ�ļ��Ա�id������ɾ���˺�*/ 
int logout(){
	char name[20];
	char password[20];
	char password2[20];
	mInformation=individualcreat(); 
    individuallistread(mInformation); 
	while (1)
	{
		printf("�������û�����");
		scanf("%s", name);
		if (judge(name))
		{
			int b=individualcheck(mInformation,name);
			if (b==1)
			{
				printf("���û��������ڣ����������룡\n");
				continue;
			}
			while (1)
			{
				printf("���������룺");
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
						printf("���벻��ȷ���������������룡\n");
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
