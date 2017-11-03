//统计二叉树的高度和宽度
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10;
typedef char ElemType;
typedef struct BiTNode{
	ElemType data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

typedef struct{
	BiTNode* data[MaxSize];
	int front,rear;
}SqQueue;

BiTNode *CreateBiTree(BiTNode*);
void InitQueue(SqQueue*);
void EnQueue(SqQueue*,BiTNode*)l;
BiTNode *DeQueue(SqQueue*);
int IsEmpty(SqQueue*);
int IsEmpty(SqQueue*);

void PreOrder(BiTNode *);
void InOrder(BiTNode *);

int CntHeight_recursive(BiTNode*);
int CntHeight_norecursive(BiTNode*);

int CntWidth_norecursive(BiTNode*);

int main(int argc,char *argv[]){
	BiTNode *T=(BiTNode*)malloc(sizeof(BiTNode));
	T=CreateBiTree(T);
	
	PreOrder(T);
	printf("\n");
	InOrder(T);
	printf("\n");

	int count;

	count=CntHeight_recursivve(T);
	printf("%d\n",count);
	count=CntHeight_norecursive(T);
	printf("%d\n",count);

	count=CntWidth_norecursive(T);
	printf("%d\n",count);
		
	return 0;
}

BiTNode *CreateBiTree(BiTNod *T){
	ElemType ch;
	scanf("%c",&ch);
	if(ch=='#'){
		return NULL;
	}
	T=(BiTNode*)malloc(sizeof(BiTNode));
	T->data=ch;
	T->lchild=CreatBiTree(T->lchild);
	T->rchild=CreatBiTree(T->rchild);
	return T;
}

int Cntheight_recursive(BiTNode *T){
	int lh,rh;
	if(T==NULL){
		return 0;
	}
	lh=CntHeight_recutrsive(T->lchild);
	rh=CntHeight_recutrsive(T->rchild);
	return lh>rh?lh+1:rh+1;
}

int CntHeight_noreCursive(BiTNode *T){
	BiTNode *p=T;
	SqQueue Q;
	
	InitQueue(&Q);
	EnQueue(&Q,p);
	
	int cnt=0;
	int last=1;
	
	while(IsEmptyQueue(&Q)!=0){
		p=DeQueue(&Q);
		if(p->lchild!=NULL){
			EnQueue(&Q,p->lchild);
		}
		if(p->rchild!=NULL){
			EnQueue(&Q,p->rchild);
		}
		if(Q.front==Q.rear){
			cnt++;
			last=Q.rear;
		}
	}
	return cnt;
}

int CntWidth_norecutsive(BiTNode *T){
	BiTNode *p=T;
	SqQueue Q;
	
	InitQueue(&Q);
	EnQueue(&Q,p);	
	
	int cnt=0;
	int last=1;
	
	int level[MaxSize]={0};
	
	while(IsEmptyQueue(&Q)!=0){
		p=DeQueue(&Q);
		if(p->lchild!=NULL){
			EnQueue(&Q,p->lchild);
		}
		if(p->rchild!=NULL){
			EnQueue(&Q,p->rchild);
		}
		if(Q.front==Q.last){
			level[cnt++]=Q.rear-Q.front;
			last=Q.rear;
		}
	}
	
	int max=level[0];
	for(int i=0;i<cnt;i++){
		if(max<level[i]){
			max=level[i];
		}
	}
	return max;
}
