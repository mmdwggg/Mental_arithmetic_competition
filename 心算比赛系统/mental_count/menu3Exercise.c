#include "list.h" 


void menuExercise()
{
    int opt_3;
    printf("**欢迎进入个人练习模式**\n");
    while(1){
    printf("\t                                     ***************************\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      1.简单四则运算     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      2.混合四则运算     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      3. 进阶训练        &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     ***************************\n\n");
    printf("请输入对应数字以选择功能：");
    scanf("%d", &opt_3);
    fflush(stdin);
    switch (opt_3)
    {
    case 1:
        printf("&&您已进入简单运算练习模式！&&\n");
        simpleTest();
        return;
    case 2:
        printf("&&您已进入混合运算练习模式！&&\n");
        mixingTest();
        return;
    case 3:
        printf("&&您已进入进阶运算练习模式！&&\n");
        advancedTest();
        return;
    default:
        printf("无相关选项，请重新输入：");
        system("pause");
        system("cls");
        break;
    }
}
}
