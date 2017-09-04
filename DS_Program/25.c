//二叉树的叶子结点链接成单链表
#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;
typedef struct BiTNode{
	ElemType data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

typedef BiTNode LNode;
static LNode *head=NULL;
static LNode *r=NULL;
	
BiTNode *CreateBiTree(BiTNode*)
void CreateList(BiTNode*);
void Print(LNode*);


