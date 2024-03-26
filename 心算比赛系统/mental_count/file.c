#include"list.h"
/*文件操作专栏*/
 
void appendAaccount(char account[18], char password[18]) /*注册时将新账户保存文件*/ 
{
	FILE *fp;
	fp = fopen("Information.txt", "a");
	fprintf(fp, "%s %s -1 是 否 否\n", account, password);
	fclose(fp);
}
void individuallistwrite(struct individuallist* listHeadNode) /*将个人账户链表保存至文件*/ 
{
  FILE* fp =fopen("Information.txt","w");
  struct individuallist* pMove=listHeadNode->next;
  while(pMove)
  {
  	fprintf(fp,"%s %s %d %s %s %s\n",pMove->data.account,pMove->data.password,pMove->data.score,pMove->data.qualify,pMove->data.promotion,pMove->data.eliminate);
  	pMove=pMove->next;
  }
  fclose(fp);
}
void individuallistread(struct individuallist* listHeadNode) /*将文件中的内容读取至个人账户链表*/ 
{
	struct individual tempData;
	FILE* fp=fopen("Information.txt","r");
	if(fp==NULL)
	{
		fp=fopen("Information.txt","w+");
	 }
	 while(fscanf(fp,"%s %s %d %s %s %s",&tempData.account,&tempData.password,&tempData.score,&tempData.qualify,&tempData.promotion,&tempData.eliminate)!=EOF)
	 {
	 	individualIn(listHeadNode,tempData);
	  }
	  fclose(fp); 
 }
 void teamwrite(struct teamlist* listHeadNode)	/*将团队链表保存至文件*/ 
{
  FILE* fp =fopen("Group.txt","w");
  struct teamlist* pMove=listHeadNode->next;
  while(pMove)
  {
  	fprintf(fp,"%s %s %c %d %d %d %d\n",pMove->data.name,pMove->data.province,pMove->data.qualify,pMove->data.p1,pMove->data.p2,pMove->data.p3,pMove->data.score);
  	pMove=pMove->next;
  }
  fclose(fp);
}
void teamread(struct teamlist* listHeadNode)	/*将文件中的团队信息读入至链表*/ 
{
	struct team tempData;
	FILE* fp=fopen("Group.txt","r");
	if(fp==NULL)
	{
		fp=fopen("Group.txt","w+");
	 }
	 while(fscanf(fp,"%s %s %c %d %d %d %d",&tempData.name,&tempData.province,&tempData.qualify,&tempData.p1,&tempData.p2,&tempData.p3,&tempData.score)!=EOF)
	 {
	 	teamIn(listHeadNode,tempData);
	  }
	  fclose(fp); 
 }
