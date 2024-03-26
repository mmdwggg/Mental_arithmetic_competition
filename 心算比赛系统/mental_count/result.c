#include "list.h"
void result(){
	int opt_5;
    printf("**欢迎查看竞赛结果**\n");
    printf("\t                                     ***************************\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      1.个人竞赛结果     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      2.团队竞赛结果     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     ***************************\n\n");
    printf("请输入对应数字以选择功能：");
    scanf("%d", &opt_5);
    fflush(stdin);
    switch (opt_5)
    {
    case 1: 
        printf("&&查看个人竞赛结果！&&\n");
        system("pause");
        system("cls"); 
        mresult();
        return;
    case 2:
        printf("&&查看团队竞赛结果！&&\n");
        system("pause");
        system("cls"); 
        tresult();
        return;
    default:
        printf("无相关选项，请重新输入：");
        system("pause");
        system("cls");
        break;
    }
}
