#include"list.h"
/*�ļ�����ר��*/
 
void appendAaccount(char account[18], char password[18]) /*ע��ʱ�����˻������ļ�*/ 
{
	FILE *fp;
	fp = fopen("Information.txt", "a");
	fprintf(fp, "%s %s -1 �� �� ��\n", account, password);
	fclose(fp);
}
void individuallistwrite(struct individuallist* listHeadNode) /*�������˻����������ļ�*/ 
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
void individuallistread(struct individuallist* listHeadNode) /*���ļ��е����ݶ�ȡ�������˻�����*/ 
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
 void teamwrite(struct teamlist* listHeadNode)	/*���Ŷ����������ļ�*/ 
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
void teamread(struct teamlist* listHeadNode)	/*���ļ��е��Ŷ���Ϣ����������*/ 
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
