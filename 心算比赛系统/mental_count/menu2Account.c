#include "list.h" 
char accountLoading() {
	int n;
	char name[20];
	while (1)
	{
	printf("��ӭʹ�ã����ȵ�¼\n");
	printf("\t                                     ***************************\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &         1.��¼          &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &         2.ע��          &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &         3.ע��          &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     **************************\n\n");
		printf("���ȵ�¼��ע�᣺");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			if(login(name)); 
			printf("��¼�ɹ���");
			system("pause");
  		    system("cls");
			return name;
		case 2:
			if(regist());
			printf("ע��ɹ���");
			system("pause");
  		    system("cls"); 
			continue;
		case 3:
			if(logout());
			printf("�ټ���");
			system("pause");
  		    system("cls"); 
  		    while(1){
  		    	menu_2Mode();
			  }
			return;
		default:
			printf("����������������룡\n");
			break;
		}
	}
}
