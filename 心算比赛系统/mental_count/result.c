#include "list.h"
void result(){
	int opt_5;
    printf("**��ӭ�鿴�������**\n");
    printf("\t                                     ***************************\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      1.���˾������     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      2.�ŶӾ������     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     ***************************\n\n");
    printf("�������Ӧ������ѡ���ܣ�");
    scanf("%d", &opt_5);
    fflush(stdin);
    switch (opt_5)
    {
    case 1: 
        printf("&&�鿴���˾��������&&\n");
        system("pause");
        system("cls"); 
        mresult();
        return;
    case 2:
        printf("&&�鿴�ŶӾ��������&&\n");
        system("pause");
        system("cls"); 
        tresult();
        return;
    default:
        printf("�����ѡ����������룺");
        system("pause");
        system("cls");
        break;
    }
}
