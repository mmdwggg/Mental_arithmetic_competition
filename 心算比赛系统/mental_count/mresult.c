#include "list.h"、
struct individuallist *mInformation; 
/*个人比赛结果*/ 
void mresult(){
	/*从文件中读取用户信息*/ 
	mInformation=individualcreat(); 
    individuallistread(mInformation);
	int opt_6,k;
	char name[20];
	struct individuallist *udata,*move;
    printf("**欢迎查看个人竞赛结果**\n");
while(1){
    printf("\t                                     ***************************\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      1.查找个人分数     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      2.查看晋级名单     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     &      3.查看淘汰名单     &\n");
    printf("\t                                     &                         &\n");
    printf("\t                                     ***************************\n\n");
    printf("请输入对应数字以选择功能：");
    scanf("%d", &opt_6);
    fflush(stdin);
    switch (opt_6)
    {
    case 1: 
	while (1)
	{
		/*查找该用户并且进行下一步操作*/ 
		printf("请输入用户名：");
		scanf("%s", name);
		if (judge(name))
		{
			int b=individualcheck(mInformation,name);
			if (b==1)
			{
				printf("该用户名不存在，请重新输入！\n");
				continue;
			}
			udata=individualcheck3(mInformation,name);
			if(udata->data.score==-1)
			printf("该用户未参加考试\n");
			else{
				printf("该用户的成绩为:%d\n",udata->data.score);
			}
			break;
		}
		else
		{
			printf("用户名不合法，请重新输入！\n");
			continue;
		}
}
        printf("是否继续查看(1/0)\n");
        scanf("%d",&k);
        system("cls");
        if(k==0)
        return;
        break;
    /*2和3均为遍历链表打印名单*/ 
    case 2:
    	system("cls");
    	move=mInformation->next;
    	printf("以下为晋级名单:\n");
    	while(move!=NULL){
			if(strcmp(move->data.promotion,"是")==0){
				printf("%s\n",move->data.account);
			} 
			move=move->next;
		}
		system("pause");
        printf("是否继续查看(1/0)\n");
        scanf("%d",&k);
        system("cls");
        if(k==0)
        return;
        break;
    case 3:
    	system("cls");
    	move=mInformation->next;
    	printf("以下为淘汰名单:\n");
    	while(move!=NULL){
			if(strcmp(move->data.eliminate,"是")==0){
				printf("%s\n",move->data.account);
			} 
			move=move->next;
		}
		system("pause");
        printf("是否继续查看(1/0)\n");
        scanf("%d",&k);
        system("cls");
        if(k==0)
        return;
        break;
    default:
        printf("无相关选项，请重新输入：");
        system("pause");
        system("cls");
        break;
    }
}
}
