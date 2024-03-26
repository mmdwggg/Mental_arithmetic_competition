#include "list.h" 
void menu_2Mode()
{
    int opt_2;
    printf("**您已进入系统**\n");
    while (1)
    {
    printf("\t                                     ***************************\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &         1.练习系统       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &         2.竞赛系统       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &         0.退出系统       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     **************************\n\n");
    printf("请输入对应数字以选择模式：");
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
            printf("无相关选项，请重新输入："); 
            system("pause");
            system("cls");
            break;
        }
	}
}
