int CntHeight(BiTree *T){
	int lh,rh;
	if(T==NULL){
		return 0;
	}
	lh=CntHeight(T->lchild);
	rh=CntHeight(T->rchild);
	return lh>rh?lh+1:rh+1;
}

int CntHeight(BiTNode *T){
	BiTNode *p=T;
	SqQueue Q;
	
	InitQueue(&Q);
	EnQueue(&Q,p);
	
	int cnt=0;
	int last=1;
	
	while(Q!=NULL){
		p=DeQueue(&Q);
		if(p->lchild!=NULL){
			EnQueue(&Q,p->lchild);
		}
		if(p->rchild!=NULL){
			EnQueue(&Q,p->rchild);
		}
		if(Q->front==last){
			cnt++;
			last==Q.rear;
		}	
	}
	return cnt;
}

#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10
typedef char ElemType data;
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
void EnQueue(SqQueue*,BiTNode*);
BiTNode *DeQueue(SqQueue*);
int IsEmptyQueue(SqQueue*);

void InitQueue(SqQueue*);
void EnQueue(SqQueue*,BiTNode*);
BiTNode *DeQueue(SqQueue*);

int main(int argc,char *argv[]){
	BiNode *T=(BiTNode*)malloc(BiTNode);
	T=CreateBiTree(T);
	
	PreOrder(T);
	printf("\n");
	int cnt;
	cnt=CntHeight_recursive(T);
	printf("%d\n",cnt);
}

BiTNode *CreateBiTree(BiTNode *T){
	ElemType ch;
	scanf("%c",&ch);
	if(ch='#'){
		return NULL;
	}
	T=(BiTNode*)malloc(sizeof)
}

void SwapLRPreTree(BiTNode *T){
	BiTNode *temp;
	if(T==NULL){
		return;
	}
	SwapLRPostTree(T->lchild);
	SwapLRPostTree(T->rchild);
	temp=T->lchild;
	T->lchild=T->rchild;
	T->rchild=temp;
}

void PostOrder(BiTNode *T){
	BiTNode *p=T;
	BiTNode *r=NULL;
	
	SqStack S;
	InitStack(&S);
	SqStack S1;
	InitStack(&S1);
	SqStack S2;
	InitStack(&S2);

	int flag=1;
	
	while(IsEmptyStack(&S)!=0||p!=NULL){
		if(p){
			Push(&S,p);
			p=p->child;
		}else{
			p=GetTop(&S);
			if(p->data=='E'){
				for(int i=0;i<S.top;i++){
					S1.data[i]=S.data[i];
					S1.top=S.top;
				}
			}
		}
	}
}

int CntHeight(BiTree *T){
	int lh,rh;
	if(T==NULL){
		return 0;
	}
	lh=CntHeight(T->lchild);
	rh=CntHeight(T->rchild);
	return lh>rh?lh+1:rh+1;
}

int CntHeight(BiTNode *T){
	BiTNode *p=T;
	SqQueue Q;
	
	InitQueue(&Q);
	EnQueue(&Q,p);
	
	int cnt=0;
	int last=1;
	
	while(Q!=NULL){
		p=DeQueue(&Q);
		if(p->lchild!=NULL){
			EnQueue(&Q,p->lchild);
		}
		if(p->rchild!=NULL){
			EnQueue(&Q,p->rchild);
		}
		if(Q->front==last){
			cnt++;
			last==Q.rear;
		}
	}
	return cnt;	
}

void PostOrder(BitNode *T){
	SqStack S;
	InitStack(&S);
	
	BiTNode *p=T;
	BiTNode *r=NULL;
	
	while(p||IsEmptyStack(&S)!=0){
		if(p!=NULL){
			Push(&S,p);
			p=p->lchild;
		}else{
			p=GetTop(&S);
			if(p->rchild!=NULL&&rchild!=r){
				p=p->rchild;
				Push(&S,p);
				p=p->lchild;
			}else{
				p=Pop(&S);
				printf("%c",p->data);
				r=p;
				p=NULL;
			}
		}
	}
}
