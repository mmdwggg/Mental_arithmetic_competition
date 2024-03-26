#include "list.h"
struct teamlist *tInformation;
/*团队比赛*/ 
void teamgame(){
	/*从文件中读取队伍信息*/ 
	tInformation=teamcreat(); 
    teamread(tInformation);
    printf("请输入你们队的队名\n");
    char name[20];
    scanf("%s",name);
    struct teamlist *udata;
    udata=teamcheck(tInformation,name);
    if(udata==NULL)
    return;
    if(udata->data.qualify=='f'){
		printf("你的团队已经进行过考试，每个团队只有一次参赛机会哦\n");
		system("pause");
        system("cls");
        return;
	}
	udata->data.qualify='f';
	printf("每个人只有一次参赛机会哦,请好好珍惜\n");
	printf("请勿中途退出，考试未完成时将记0分\n");
	teamwrite(tInformation);
	system("pause");
    system("cls");
    	printf("请第1位队员开始测试\n");
    	udata->data.p1=test3();
    	printf("该队员测试完毕！\n");
    	printf("该队员分数为%d！\n",udata->data.p1);
    	system("pause");
        system("cls");
    	printf("请第2位队员开始测试\n");
    	udata->data.p2=test3();
    	printf("该队员测试完毕！\n");
    	printf("该队员分数为%d！\n",udata->data.p2);
    	system("pause");
        system("cls");
    	printf("请第3位队员开始测试\n");
    	udata->data.p3=test3();
    	printf("该队员测试完毕！\n");
    	printf("该队员分数为%d！\n",udata->data.p3);
    	system("pause");
        system("cls");
        udata->data.score=(udata->data.p1+udata->data.p2+udata->data.p3);
        printf("你们的总分数是：%d\n", udata->data.score);
        teamwrite(tInformation);
		system("pause");
    	system("cls");
}
