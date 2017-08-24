//求先序遍历序列中第k(0≤k≤二叉树中结点个数)个结点的值。
void Find(BiTree *T){
	int k;
	int cnt=0;
	BiTNode *p=T;
	if(T==NULL){
		return false;
	}
	if(k==cnt){
		printf("%c\n",T->data);
	}
	cnt++;
	Find(T->lchild,k);
	Find(T->rchild,k);
}

void Findth(BiTree T){
	char ch;
	int cnt;
	if(T==NULL){
		return '#';
	}
	if(k==cnt){
		return T->data;
	}
	cnt++;
	
	ch=Findth(T->lchild,k);
	if(ch!='#'){
		return ch;	
	}
	ch=Findth(T->rchild,k);
	return ch;
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
ElemType Findkth(BiTNode*,int);

int main(int argc,char *argv[]){
	BiTNode *T=NULL;
	T=(BiTNode*)malloc(sizeof(BiTNode));
	T=CteateBiTree(T);
	char ch;
	ch=Findkth(T,3);
	ch=='#'?printf("NOT Find\n"):printf("Find %c\n",ch);
	return 0;
}

BiTree CreateBiTree(BiTNode *T){
	ElemType x;
	scanf("%c",&x);
	if(x=='#'){
		return T;
	}
	T=(BiTNode*)malloc(sizeof(BiTNode));
	T->data=x;
	T->lchild=CreateBiTree(T->lchild);
	T->rchild=CreateBiTree(T->rchild);
	return T;
}

int cnt=1;
ElemType Findkth(BiTNode *T,int k){
	char ch;
	if(T==NULL){
		return '#';
	}
	if(k==cnt){
		return T->data;
	}
	cnt++;
	c=Findkth(T->lchild,k);
	if(ch!='#'){
		return ch;
	}
	ch=Findkth(T->rchild,k);
	return ch;
}
