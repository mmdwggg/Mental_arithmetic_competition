#include "list.h" 
void menuGame(){
	int opt_4;
	char name[20];
    printf("**��ӭ���뾺��ģʽ**\n");
while(1){
    printf("\t                                     ***************************\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &        1.���˾���       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &        2.�ŶӾ���       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &        3.�鿴���       &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     ***************************\n\n");
    printf("�������Ӧ������ѡ���ܣ�");
    scanf("%d", &opt_4);
    fflush(stdin);
    switch (opt_4)
    {
    case 1: 
        printf("&&���ѽ�����˾���ģʽ��&&\n");
        system("pause");
        system("cls");
        strcpy(name,accountLoading());
        individualgame(name); 
        return;
    case 2:
        printf("&&���ѽ����ŶӾ���ģʽ��&&\n");
        system("pause");
        system("cls");
        teamgame(); 
        return;
    case 3:
        printf("&&���ѽ����ŶӾ���ģʽ��&&\n");
        system("pause");
        system("cls");
        result(); 
        return;
    default:
        printf("�����ѡ����������룺");
        system("pause");
        system("cls");
        break;
    }
}
}
