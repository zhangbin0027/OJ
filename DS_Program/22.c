static LNode *head=NULL;
static LNode *r=NULL;
void CreateList(BiTNode *T){
	if(T==NULL){
		return;
	}
	CreateList(T->lchild);
	if(T->lchild==NULL&&T->rchild==NULL){
		if(r==NULL){
			head=T;
		}else{
			r->rchild=T;
		}
		r=T;
	}
	CreateList(T->rchild);
}

void SwapBiTreePre(BiTNode *T){
	BiTNode *temp;
	if(T==NULL){
		return;
	}
	temp=T->lchild;
	T=>lchild=T->rchild;
	T->rchild=temp;	
	SwapBiTreePre(T->lchild);
	SwapBiTreePre(T->rchild);
}

//具体代码
#include <stdio.h>
#incldue <stdlib.h>

typedef char ElemType;
typedef struct BiTNode{
	ElemType data;
	struct BiTNOde *lchild,*rchild;
}BiTNode,*BiTree;

BiTNode *CreateBitree(BiTNode*);
void SwapLRtreePre(BiTNode*);

int main(int argc,char *argv[]){
	BiTNode *T=(BiTNode*)malloc(sizeof(BiTNod));
	T=CreateBiTree(T);
	
	Jundge(T);
	SwapLRtreePre(T);
	Jundge(T);
	
	return 0;_
}

BiTNode *CreateBiTree(BiTNode *T){
	ElemType x;
	scanf("%c",&x);
	if(x=='#'){
		return NULL;
	}
	T=(BiTNode*)malloc(sizeof(BiTNode));
	T->data=x;
	T->lchild=CreateBiTree(T->lchild);
	T->rchild=CreateBiTree(T->rchild);
	return T;
}

void SwapLRtreePre(BiTNode *T){
	BiTNode* temp;
	if(T==NULL){
		return;
	}
	temp=T->lchild;
	T->lchild=t->rchild;
	T->rchild=temp;
	SwapLRtreePre(T->lchild);
	SwapLRtreePre(T->rchild);
}

