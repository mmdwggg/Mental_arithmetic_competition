#include "list.h" 
void menuGame(){
	int opt_4;
	char name[20];
    printf("**欢迎进入竞赛模式**\n");
while(1){
    printf("\t                                     ***************************\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &        1.个人竞赛       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &        2.团队竞赛       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &        3.查看结果       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     ***************************\n\n");
    printf("请输入对应数字以选择功能：");
    scanf("%d", &opt_4);
    fflush(stdin);
    switch (opt_4)
    {
    case 1: 
        printf("&&您已进入个人竞赛模式！&&\n");
        system("pause");
        system("cls");
        strcpy(name,accountLoading());
        individualgame(name); 
        return;
    case 2:
        printf("&&您已进入团队竞赛模式！&&\n");
        system("pause");
        system("cls");
        teamgame(); 
        return;
    case 3:
        printf("&&您已进入团队竞赛模式！&&\n");
        system("pause");
        system("cls");
        result(); 
        return;
    default:
        printf("无相关选项，请重新输入：");
        system("pause");
        system("cls");
        break;
    }
}
}
