#include "list.h" 
void menu_2Mode()
{
    int opt_2;
    printf("**���ѽ���ϵͳ**\n");
    while (1)
    {
    printf("\t                                     ***************************\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &         1.��ϰϵͳ       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &         2.����ϵͳ       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &         0.�˳�ϵͳ       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     **************************\n\n");
    printf("�������Ӧ������ѡ��ģʽ��");
        scanf("%d", &opt_2);
        fflush(stdin);
        if(opt_2==0) 
        {
            exit(0);
            break;
        }
        switch (opt_2)
        {
        case 1:
  		    system("cls");
            menuExercise();
            break;
        case 2:
        	system("cls");
            menuGame();
            break;
        default:
            printf("�����ѡ����������룺"); 
            system("pause");
            system("cls");
            break;
        }
	}
}
