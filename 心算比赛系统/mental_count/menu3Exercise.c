#include "list.h" 


void menuExercise()
{
    int opt_3;
    printf("**��ӭ���������ϰģʽ**\n");
    while(1){
    printf("\t                                     ***************************\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      1.����������     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      2.�����������     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      3. ����ѵ��        &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     ***************************\n\n");
    printf("�������Ӧ������ѡ���ܣ�");
    scanf("%d", &opt_3);
    fflush(stdin);
    switch (opt_3)
    {
    case 1:
        printf("&&���ѽ����������ϰģʽ��&&\n");
        simpleTest();
        return;
    case 2:
        printf("&&���ѽ�����������ϰģʽ��&&\n");
        mixingTest();
        return;
    case 3:
        printf("&&���ѽ������������ϰģʽ��&&\n");
        advancedTest();
        return;
    default:
        printf("�����ѡ����������룺");
        system("pause");
        system("cls");
        break;
    }
}
}
