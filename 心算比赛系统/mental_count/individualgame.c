#include "list.h"
struct individuallist *mInformation;
/*个人比赛*/
void individualgame(char *name){ 
	/*从文件中读取*/ 
	mInformation=individualcreat(); 
    individuallistread(mInformation);
    /*找到该用户信息*/ 
	struct individuallist *udata;
	udata=individualcheck3(mInformation,name);
	if(strcmp(udata->data.qualify,"否")==0){
		printf("你已经进行过考试，每个人只有一次参赛机会哦\n");
		system("pause");
        system("cls");
        return;
	}
	strcpy(udata->data.qualify,"否");
	strcpy(udata->data.eliminate,"是");
	udata->data.score=0; 
	/*在操作之后及时保存*/ 
	printf("每个人只有一次参赛机会哦,请好好珍惜\n");
	printf("请勿中途退出，考试未完成时将记0分\n");
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
        printf("你的分数是：%d\n", score);
        udata->data.score=score;
        if (score < 60)
            printf("对不起，你已被淘汰\n");
        if (score >= 90){
        	strcpy(udata->data.promotion,"是");
			strcpy(udata->data.eliminate,"否"); 
            printf("恭喜你成功晋级\n");
        }
        if(score < 90&&score>=60){
        	printf("请等待后续考核\n");
        	strcpy(udata->data.eliminate,"否");
		}
		individuallistwrite(mInformation);
		system("pause");
    	system("cls");
}
