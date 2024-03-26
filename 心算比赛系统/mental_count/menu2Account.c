#include "list.h" 
char accountLoading() {
	int n;
	char name[20];
	while (1)
	{
	printf("欢迎使用，请先登录\n");
	printf("\t                                     ***************************\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &         1.登录          &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &         2.注册          &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &         3.注销          &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     &                         &\n");
	printf("\t                                     **************************\n\n");
		printf("请先登录或注册：");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			if(login(name)); 
			printf("登录成功！");
			system("pause");
  		    system("cls");
			return name;
		case 2:
			if(regist());
			printf("注册成功！");
			system("pause");
  		    system("cls"); 
			continue;
		case 3:
			if(logout());
			printf("再见！");
			system("pause");
  		    system("cls"); 
  		    while(1){
  		    	menu_2Mode();
			  }
			return;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	}
}
