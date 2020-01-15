//求二叉树中结点的最大值与节点的最小值之差
#include <stdio.h>
#include <stdlib.h>
#include <malloc.c>
#include <math.h>
int Max,Min;
Typedef struct BiTNode{
	int data;
	struct BiTNode* lchild,*rchild;
}*BiTNode;

void CreateBiTree(BiTNode *T){
	int data;
	scanf("%d",&data);
	if(data=0)
		*T=NULL;
	else{
		*T=(BiTNode)malloc(sizeof(BiTNode));
		if(!*T)
			exit(1);
		*T->data=data;
	}
}
