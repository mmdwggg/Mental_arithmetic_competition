#include "list.h"
struct teamlist *tInformation;
/*�Ŷӱ���*/ 
void teamgame(){
	/*���ļ��ж�ȡ������Ϣ*/ 
	tInformation=teamcreat(); 
    teamread(tInformation);
    printf("���������ǶӵĶ���\n");
    char name[20];
    scanf("%s",name);
    struct teamlist *udata;
    udata=teamcheck(tInformation,name);
    if(udata==NULL)
    return;
    if(udata->data.qualify=='f'){
		printf("����Ŷ��Ѿ����й����ԣ�ÿ���Ŷ�ֻ��һ�β�������Ŷ\n");
		system("pause");
        system("cls");
        return;
	}
	udata->data.qualify='f';
	printf("ÿ����ֻ��һ�β�������Ŷ,��ú���ϧ\n");
	printf("������;�˳�������δ���ʱ����0��\n");
	teamwrite(tInformation);
	system("pause");
    system("cls");
    	printf("���1λ��Ա��ʼ����\n");
    	udata->data.p1=test3();
    	printf("�ö�Ա������ϣ�\n");
    	printf("�ö�Ա����Ϊ%d��\n",udata->data.p1);
    	system("pause");
        system("cls");
    	printf("���2λ��Ա��ʼ����\n");
    	udata->data.p2=test3();
    	printf("�ö�Ա������ϣ�\n");
    	printf("�ö�Ա����Ϊ%d��\n",udata->data.p2);
    	system("pause");
        system("cls");
    	printf("���3λ��Ա��ʼ����\n");
    	udata->data.p3=test3();
    	printf("�ö�Ա������ϣ�\n");
    	printf("�ö�Ա����Ϊ%d��\n",udata->data.p3);
    	system("pause");
        system("cls");
        udata->data.score=(udata->data.p1+udata->data.p2+udata->data.p3);
        printf("���ǵ��ܷ����ǣ�%d\n", udata->data.score);
        teamwrite(tInformation);
		system("pause");
    	system("cls");
}
