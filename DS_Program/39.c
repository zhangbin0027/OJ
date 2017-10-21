//设计判断两个二叉树是否相似
//所谓二叉树树相似就是指T1和T2都是空或者都只有一个根节点；或者T1的左子树和T2的右子树是相似的且T1的右子树和T2T2的右子树是相似的
int Similar(BiTNode *T1,BiTNode *T2){
	int left,right;
	if(T1==NULL&&T2==NULL){
		return 1;
	}else if(T1==NULL&&T2==NULL){
		return 0;
	}else{
		left=Similar(T->left,T->right);
		right=Similr(T->right,T->left);
		return left&&right;
	}
}

//具体代码
#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;
typedef struct BiTNode{
	ElemType data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

BiTree CreateBiTree(BiTNode*);
int Similar(BiTNode*,BiTNode*);

int main(int argc,char *argv[]){
	BiTNodeNode *T1,*T2;
	T1=(BiTNode*)malloc(BiTNode);
	T1=CreateBiTree(T1);
	getchar();
	T2=(BiTNode*)malloc(BiTNode);
	T2=CreateBiTree(T2);
	
	int flag;
	flag=Similar(T1,T2);
	flag==1?printf("Similar!\n"):printf("Not Similar!\n");

	return 0;
}

BiTree CreateBiTree(BiTNode *T){
	ElemType x;
	scanf("%c",&x);
	if(x!='#'){
		return NULL;
	}
	T=(BiTNode*)malloc(BiTNode);
	T->data=x;
	T->lchild=CreateBiTree(T->lchild);
	T->rchild=CreateBiTree(T->child);
	return T;
}

int Similar(BiTNode *T1,BiTNode *T2){
	int left,right;
	if(T1==NULL&&T2=NULL){
		return 1;//两棵树都为空
	}
	if(T1==NULL||T2=NULL){
		return 0;//一棵为空，一棵不为空
	}else{
		left=Similar(T1->lchild,T2->rchild);
		right=Similar(T1->lchild,T2->rhchild);
		return left&&right;
	}
}
