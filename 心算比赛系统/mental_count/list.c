#include "list.h"
/*������������ͷ�ڵ�*/ 
struct individuallist *individualcreat(){
	struct individuallist *head=(struct individuallist*)malloc(sizeof(struct individuallist));
	head->next=NULL;
	return head;
}
/*��ϲ���ʹ��*/ 
struct individuallist *individualcreat2(struct individual data){
	struct individuallist *individualnew=(struct individuallist*)malloc(sizeof(struct individuallist));
	individualnew->next=NULL;
	individualnew->data=data;
	return individualnew;
}
/*��������ͷ�巨*/
void individualIn(struct individuallist *head,struct individual data){
	struct individuallist *node=individualcreat2(data);
	node->next=head->next;
	head->next=node;
}
/*��������ɾ�����*/
void individualOut(struct individuallist *head,char *account){
	struct individuallist* move=head->next;
	struct individuallist* movef=head;
	while(strcmp(move->data.account,account)!=0){
		movef=move;
		move=move->next;
	}
	movef->next=move->next;
	free(move);
}
/*�жϸ��˻��Ƿ�ע��*/ 
int individualcheck(struct individuallist *list,char *account){
	int flag=1;
	struct individuallist *p;
	p=list->next;
	while(p!=NULL){
		if(strcmp(p->data.account,account)==0){
			flag=0;
			break;
		}else{
			p=p->next;
		}
	}
	return flag;
}
/*�������ж�ȡ�˻����룬�������û�����������������Ա�*/ 
char *individualcheck2(struct individuallist *list,char *account){
	struct individuallist *p;
	p=list->next;
	while(p!=NULL){
		if(strcmp(p->data.account,account)==0){
			return p->data.password;
		}else{
			p=p->next;
		}
	}
}
/*�������в����˻������ؽṹ��ָ��*/ 
struct individuallist *individualcheck3(struct individuallist *list,char *account){
	struct individuallist *p;
	p=list->next;
	while(p!=NULL){
		if(strcmp(p->data.account,account)==0){
			return p;
		}else{
			p=p->next;
		}
	}
}
/*�����Ŷ�����ͷ�ڵ�*/
struct teamlist *teamcreat(){
	struct teamlist *head=(struct teamlist*)malloc(sizeof(struct teamlist));
	head->next=NULL;
	return head;
}
/*�ж��û�����Ķ����Ƿ����*/ 
struct teamlist *teamcheck(struct teamlist *list,char *name){
	struct teamlist *p;
	p=list->next;
	while(p!=NULL){
		if(strcmp(p->data.name,name)==0){
			return p;
		}else{
			p=p->next;
		}
	}
	printf("��������ȷ�Ķ���\n");
	system("pause");
    system("cls");
	return NULL;
}
/*��ϲ��뷨ʹ��*/ 
struct teamlist *teamcreat2(struct team data){
	struct teamlist *teamnew=(struct teamlist*)malloc(sizeof(struct teamlist));
	teamnew->next=NULL;
	teamnew->data=data;
	return teamnew;
}
/*ͷ�巨�������ļ���ȡʱ���ļ����ݶ�ȡ������*/ 
void teamIn(struct teamlist *head,struct team data){
	struct teamlist *node=teamcreat2(data);
	node->next=head->next;
	head->next=node;
}
