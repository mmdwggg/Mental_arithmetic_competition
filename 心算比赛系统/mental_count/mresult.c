#include "list.h"��
struct individuallist *mInformation; 
/*���˱������*/ 
void mresult(){
	/*���ļ��ж�ȡ�û���Ϣ*/ 
	mInformation=individualcreat(); 
    individuallistread(mInformation);
	int opt_6,k;
	char name[20];
	struct individuallist *udata,*move;
    printf("**��ӭ�鿴���˾������**\n");
while(1){
    printf("\t                                     ***************************\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      1.���Ҹ��˷���     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      2.�鿴��������     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      3.�鿴��̭����     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     ***************************\n\n");
    printf("�������Ӧ������ѡ���ܣ�");
    scanf("%d", &opt_6);
    fflush(stdin);
    switch (opt_6)
    {
    case 1: 
	while (1)
	{
		/*���Ҹ��û����ҽ�����һ������*/ 
		printf("�������û�����");
		scanf("%s", name);
		if (judge(name))
		{
			int b=individualcheck(mInformation,name);
			if (b==1)
			{
				printf("���û��������ڣ����������룡\n");
				continue;
			}
			udata=individualcheck3(mInformation,name);
			if(udata->data.score==-1)
			printf("���û�δ�μӿ���\n");
			else{
				printf("���û��ĳɼ�Ϊ:%d\n",udata->data.score);
			}
			break;
		}
		else
		{
			printf("�û������Ϸ������������룡\n");
			continue;
		}
}
        printf("�Ƿ�����鿴(1/0)\n");
        scanf("%d",&k);
        system("cls");
        if(k==0)
        return;
        break;
    /*2��3��Ϊ���������ӡ����*/ 
    case 2:
    	system("cls");
    	move=mInformation->next;
    	printf("����Ϊ��������:\n");
    	while(move!=NULL){
			if(strcmp(move->data.promotion,"��")==0){
				printf("%s\n",move->data.account);
			} 
			move=move->next;
		}
		system("pause");
        printf("�Ƿ�����鿴(1/0)\n");
        scanf("%d",&k);
        system("cls");
        if(k==0)
        return;
        break;
    case 3:
    	system("cls");
    	move=mInformation->next;
    	printf("����Ϊ��̭����:\n");
    	while(move!=NULL){
			if(strcmp(move->data.eliminate,"��")==0){
				printf("%s\n",move->data.account);
			} 
			move=move->next;
		}
		system("pause");
        printf("�Ƿ�����鿴(1/0)\n");
        scanf("%d",&k);
        system("cls");
        if(k==0)
        return;
        break;
    default:
        printf("�����ѡ����������룺");
        system("pause");
        system("cls");
        break;
    }
}
}
