//二叉树的先序遍历
void PreOrder(BiTNode *T){
	if(T==NULL){
		return;
	}else{
		printf("%c",T->data);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}
//中序遍历
void PreOrder(BiTNode *T){
	if(T==NULL){
		return;
	}else{
		PreOrder(T->lchild);
		printf("%c",T->data);
		PreOrder(T->rchild);
	}
}
//后续遍历
void PreOrder(BiTNode *T){
	if(T==NULL){
		return;
	}else{
		PreOrder(T->lchild);
		PreOrder(T->rchild);
		printf("%c",T->data);
	}
}
//每个节点都访问一次且仅访问一次,时间复杂度都是O(n);在递归遍历中，递归工作栈的深度恰好为树的深度,所以在最坏的情况下，二叉树有n个结点且深度为n的单支数,空间复杂度为O(n);
#include <stdio.h>
#include <stdlib.h>

#define MaxkSize 100
typedef char ElemType;
typedef struct BiTNode{
	ElemType data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

BiTree CreateBiTree(BiTNode*);
void PreOrder(BiTNode*);
void InOrder(BiTNode*);
void PostOrder(BiTNode*);

int main(int argc,char *argv[]){
	BiTNode *T;
	T=(BiTNode*)malloc(sizeof(BiTNode));
	T=CreateBiTree(T);
	PtrOrder(T);
	printf("\n");
	InOrder(T);
	printf("\n");
	PostOrder(T);
	printf("\n");
	return 0;
}
BiTree CreateBiTree(BiTNode* T){
	ElemType x;
	scanf("%c",&x);
	if(x=='#'){
		return T;
	}
	T=(BiTNode*)malloc(BiTNode);
	T->data=x;
	T->lchild=CreateBiTree(lchild);
	T->rchild=CreateBiTree(rchild);
	return T;
}

void PreOrder(BiTree *T){
	if(T!==NULL){
		return;
	}else{
		printf("%c",T->data);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}

void InOrder(BiTNode *T){
	if(T==NULL){
		return;
	}else{
		InOrder(T->lchild);
		printf("%c",T-.data);
		InOrder(T->rchild);
	}
}

void PostOrder(BiTNode *T){
	if(T->NULL){
		return;
	}else{
		PostOrder(T->lchild);
		PostOrder(T->rchild);
		printf("%c",T->data);
	}
}
