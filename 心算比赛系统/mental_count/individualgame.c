#include "list.h"
struct individuallist *mInformation;
/*���˱���*/
void individualgame(char *name){ 
	/*���ļ��ж�ȡ*/ 
	mInformation=individualcreat(); 
    individuallistread(mInformation);
    /*�ҵ����û���Ϣ*/ 
	struct individuallist *udata;
	udata=individualcheck3(mInformation,name);
	if(strcmp(udata->data.qualify,"��")==0){
		printf("���Ѿ����й����ԣ�ÿ����ֻ��һ�β�������Ŷ\n");
		system("pause");
        system("cls");
        return;
	}
	strcpy(udata->data.qualify,"��");
	strcpy(udata->data.eliminate,"��");
	udata->data.score=0; 
	/*�ڲ���֮��ʱ����*/ 
	printf("ÿ����ֻ��һ�β�������Ŷ,��ú���ϧ\n");
	printf("������;�˳�������δ���ʱ����0��\n");
	individuallistwrite(mInformation);
	system("pause");
    system("cls");
    int i, a,score = 0;
    char q;	
        for (i = 0; i < 2; i++)
        {
            q=randomCharacter();
            if (test(2, q))
                score += 5;
        }
        for (i = 0; i < 4; i++)
        {
            q=randomCharacter();
            if (test(3, q))
                score += 5;
        }
        for (i = 0; i < 6; i++)
        {
            q=randomCharacter();
            if (test(4, q))
                score += 5;
        }
        for (i = 0; i < 8; i++)
        {
            q=randomCharacter();
            srand((unsigned)time(NULL));
            a = rand() % 3 + 2;
            srand((unsigned)time(NULL));
            if (test(a, q))
                score += 5;
        }
        printf("��ķ����ǣ�%d\n", score);
        udata->data.score=score;
        if (score < 60)
            printf("�Բ������ѱ���̭\n");
        if (score >= 90){
        	strcpy(udata->data.promotion,"��");
			strcpy(udata->data.eliminate,"��"); 
            printf("��ϲ��ɹ�����\n");
        }
        if(score < 90&&score>=60){
        	printf("��ȴ���������\n");
        	strcpy(udata->data.eliminate,"��");
		}
		individuallistwrite(mInformation);
		system("pause");
    	system("cls");
}
