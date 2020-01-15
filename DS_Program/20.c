//递归计算二叉树的高度
//算法思想:从叶子结点开始算起,假设叶子结点下面的NULL结点的高度为0，则叶子结点的高度变为1，那么叶子结点的双亲接结点为2,依次类推二叉树的高度.当T为NULL时，高度为0，比较T的左右孩子的高度,若T的左孩子高度大则T->lchild+1.
int cntHeight(BiTree *T){
	int lh,rh;
	if(T==NULL){
		return 0;
	}	
	lh=CntHeight(T->lchild);
	rh=CntHeight(T->rchild);
	return lh>rh?lh+1:rh+1;
}
//非递归算法实现
//采用层次遍历的算法，设置变量cnt表示当前的结点所在的层次,设置last指向当前层最右结点，每次层次遍历出队时与last相比较，若两者相等，层数加1，并让last指向下一层最右结点，直至遍历完成
int cntHeight(BiTNode *T){
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

//具体代码
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10
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
void EnQueue(SqQueue*,BiTNode*);
BiTNode *DeQueue(SqQueue*);
int IsEmptyQueue(SqQueue*);

void InitQueue(SqQueue*);
void EnQueue(SqQueue*,BiTNode*);
BiTNode* DeQueue(SqQueue*);
int IsEmptyQueue(SqQueue*);
	
void PreOrder(BiTNode *);
void InOrder(BiTNode *);

int CntHeight_re(BiTNode *);
int CntHeight_nore(BiTNode *);

int CntWidth_norecursive(BiTNode*);

int main(int argc,char* argv[]){
	BiTNode *T=(BiTNode*)malloc(BiTNode);
	T=CreateBiTree(T);	
	
	PreOrder(T);
	printf("\n");
	int count;
	count=CntHeight_recursive(T);
	printf("二叉树高:%d\n",count);	
}

BiTNode* CreateBiTree(BiTNode *T){
	ElemType ch;
	scanf("%c",&ch);
	if(ch='#'){
		return NULL;
	}
	T=(BiTNode*)malloc(sizeof(BiTNode));
	T->data=ch;
	T->lchild=CreateBiTree(T->lchild);
	T->rchild=CreateBiTree(T->rchild);
	return T;
}

int CntHeight(BiTNode *T){
	int lh,rh;
	if(T!=NULL){
		return 0;
	}
	lh=CntHeight_recursive(T->lchild);
	rh=CntHeight_recursive(T->rchild);
	return lh>rh?lh+1:rh+1;
}
//统计二叉树的高度非递归
int CntHeight(BiTNode *T){
	BiTNode *p=T;
	int cnt=0,last=1;
	SqQueue(Q,q);
	InitQueue(&Q);
	EnQueue(&Q,p);
	
	while(IsEmpTy!=0);
	{
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
