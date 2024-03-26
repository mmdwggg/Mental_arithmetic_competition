#include "list.h"
/*创建个人链表头节点*/ 
struct individuallist *individualcreat(){
	struct individuallist *head=(struct individuallist*)malloc(sizeof(struct individuallist));
	head->next=NULL;
	return head;
}
/*配合插入使用*/ 
struct individuallist *individualcreat2(struct individual data){
	struct individuallist *individualnew=(struct individuallist*)malloc(sizeof(struct individuallist));
	individualnew->next=NULL;
	individualnew->data=data;
	return individualnew;
}
/*个人链表头插法*/
void individualIn(struct individuallist *head,struct individual data){
	struct individuallist *node=individualcreat2(data);
	node->next=head->next;
	head->next=node;
}
/*个人链表删除结点*/
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
/*判断该账户是否被注册*/ 
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
/*从链表中读取账户密码，用来和用户本身输入的密码做对比*/ 
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
/*从链表中查找账户，返回结构体指针*/ 
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
/*创建团队链表头节点*/
struct teamlist *teamcreat(){
	struct teamlist *head=(struct teamlist*)malloc(sizeof(struct teamlist));
	head->next=NULL;
	return head;
}
/*判断用户输入的队名是否存在*/ 
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
	printf("请输入正确的队名\n");
	system("pause");
    system("cls");
	return NULL;
}
/*配合插入法使用*/ 
struct teamlist *teamcreat2(struct team data){
	struct teamlist *teamnew=(struct teamlist*)malloc(sizeof(struct teamlist));
	teamnew->next=NULL;
	teamnew->data=data;
	return teamnew;
}
/*头插法，用于文件读取时将文件内容读取至链表*/ 
void teamIn(struct teamlist *head,struct team data){
	struct teamlist *node=teamcreat2(data);
	node->next=head->next;
	head->next=node;
}
