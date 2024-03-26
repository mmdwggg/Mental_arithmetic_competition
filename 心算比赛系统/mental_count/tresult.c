#include "list.h"
struct teamlist *tInformation;
/*团队比赛结果*/ 
/*算法步骤为先判断是否有团队未完成考试，再遍历链表找出完成考试的加入至结构体数组并排序，最后打印出排序好的顺序与未参加考试的队伍*/ 
void tresult(){
	/*文件读取*/ 
	tInformation=teamcreat(); 
    teamread(tInformation);
    struct teamlist *move;
    int w=0,i=0,n,j,t1;
    char t2[20];
    move=tInformation->next;
    	while(move!=NULL&&move->data.qualify!='t'){
			move=move->next;
		}
	if(move->data.qualify=='t')
	w=1;
	move=tInformation->next;
	struct teamarray data[100];
		while(move!=NULL){
			if(move->data.qualify=='f'){
				data[i].score=move->data.score;
				strcpy(data[i].name,move->data.name);
				i++;
			}
			move=move->next;
		}
	move=tInformation->next;
		n=i;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(data[j].score<data[j+1].score){
			t1=data[j].score;
			data[j].score=data[j+1].score;
			data[j+1].score=t1;
			strcpy(t2,data[j].name);
			strcpy(data[j].name,data[j+1].name);
			strcpy(data[j+1].name,t2);
			}
		}	
	}
	for(i=0;i<n;i++){
		printf("%s:%d\n",data[i].name,data[i].score);
	}
	if(w==1){
		printf("以下队伍未完成考试,请抓紧时间完成！\n");
		while(move!=NULL){
			if(move->data.qualify=='t'){
				printf("%s\t",move->data.name);
			}
			move=move->next;
		}
	}
	system("pause");
    system("cls");
}
