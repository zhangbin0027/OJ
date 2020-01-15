//非递归的先序遍历
//先序遍历的顺序是根左右。对于任意一个结点都可以看成是一个根结点,直接对其访问，如果访问完成后，左孩子不为空，将左孩子看成是一个新的根结点，重复以上步骤。对于一般程序而言，递归程序转换为非递归程序需要引入栈这个数据结构。注意到栈的先进先出的特性，根节点入栈，判断右孩子是否为空，若为空，则右孩子入栈。若为左孩子或右孩子为空则出栈访问，最后知道栈为空，则出栈访问
void PreOrderBiTree(BiTNode *T){
	SqStack(&S);
	InitSqStack(S);
	
	BiTNode *p=T;
	Push(S,p);

	while(p||isEmpty(&S)!=0){
		p=Pop(&S);
		p=printf("%c",p->data);
		
		if(p->lchild!=NULL){
			Push(&S,p->lchild);
		if(p->rchild!=NULL){
			push(&S,p->rchild);
		}
	}
}
//非递归的二叉树的中序遍历
//中序遍历的顺序是左根右，先扫描根结点的所有孩子（不访问）并将他们一一入栈，然后出栈一个*p结点并访问它，然后扫描*p的右孩子，并将其入栈，再扫描以该结点*P的孩子的根节点的所有左孩子，并将其一一入栈，如此继续，直至栈为空为止。首先判断节点T是否为空，若不为空则入栈，然后指针p指向T的左孩子，一一入栈，直至T为空，经过第一步可以保证栈顶元素必定为二叉树的最左孩子结点，出栈访问该结点，接着判断其右结点是否为空，若不为空，接着扫描右孩子的左孩子结点，重复以上步骤，直至栈为空为止
void InOrderBiTree(BiTNode *T){
	SqStack(&S);
	InitStack(S);
	
	BiTNode *p=T;	
	while(p||isEmptySqStack(&S)!=0){
		if(p!=NULL){//若根节点不为空，则依次入栈，直至为空
			Push(&S,p);
			p=p->lchild;	
		}else{
			p=Pop(&S);//弹出栈顶元素
			printf("%c",p->data);//访问最左结点
			p=p->rchild;//指向右孩子重复以上步骤
		}
	}
}

//非递归的二叉树的后续遍历
//二叉树中的后续遍历的顺序为左右根，当用栈来存储结点时，需要分清返回根结点时是从左孩子返回的还是从右孩子返回的，需要设置一个指针r用来记录最近访问过的结点。首先判断节点是否为空，若不为空，则不断入栈，直至最左边的左孩子为空为止，接着取出栈顶结点，判断其右结点是否为空，右孩子入栈，若右孩子为空，则取出并做出栈访问
void PostOrderBiTree(BiTNode *T){
	SqStack(&S);
	InitStack(S);
	
	BiTNode *p=T;
	BiTNode *r=T;//辅助指针r，记录结点是否被访问过，以区分是从右返回还是从左返回
	while(p||isEmptySqStack(&S)!=0){
		if(p!=NULL){//左孩子结点不为空
			Push(&S,p);
			p=p->lchild;
		}else{
			p=GetTop(&S);//取栈顶元素
			if(r->lchild!=NULL&&p->rchild!=r){
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

//二叉树的层次遍历
void BSTBiTNode(BiTNode *T){
	SqQueue(Q);
	InitQueue(&Q);
		
	BiTNode *p=T;
	while(p){
		p=DeQueue(&Q,p->data);
		if(p->lchild!=NULL){
			EnQueue(Q,p->lchild);
		}
		if(p->rchild!=NULL){
			EnQueue(Q,p->rchild);
		}	
	}	
}

#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100
typedef char ElemType;

typedef struct BiTNode{
	ElemType data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

BiTNode* CreateBiTree(BiTNode*);
void PreOrder(BiTNode*);
void InOrder(BiTNode*);
void PostOrder(BiTNode*);
void LevelOrder(BiTNode*);

typedef struct SqStack{
	BiTNode* data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack*);
void Push(SqStack*,BiTNode*);
BiTNode* Pop(SqStack*);
BITNode* GetTop(SqStack*);
int IsEmptyStack(SqStack*);

typedef struct SqQueue{
	BiTNode* data[MaxSize];
	int front,rear;
}SqQueue;

void InitQueue(SqQueue*);
void EnQueue(SqQueue*,BiTNode*);
BiTNode* DeQueue(SqQueue*);
int IsEmptyQueue(SqQueue*);

int main(int argc,char *argv[]){
	BiTNode *T=(BiTNode*)malloc(sizeof(BiTNode));
	T=CreateBiTree(T);
	PreOrder(T);printf("\n");
	InOrder(T);printf("\n");
	PostOrder(T);printf("\n");
	LevelOrder(T);printf("\n");
	return 0;
}

//创建二叉树
BiTree CreateBiTree(BiTNode *T){
	ElemType x;
	scanf("%c",&x);
	if(x=='#'){
		return T;
	}else{
		T=(BiTNode*)malloc(sizeof(BITNode));
		T->data=x;
		T->lchild=CreateBiTree(T->lchild);
		T->rchild=CreateBiTree(T->rchild);
	}
	return T;
}

//先序遍历
void PreOrder(BiTNode *T){
	SqStack S;
	InitStack(&S);
	
	BiTNode *p=T;
	Push(&S,p);
	while(IsEmptyStack(&S)!=0){
		p=Pop(&S);
		printf("%c",p->data);
		if(p->rchild!=NULL){
			Push(&S,p->rchild);
		}
		if(p->lchild!=NULL){
			Push(&S,p->lchild);
		}
	}
}
//中序遍历
void InOrder(BiTNode *T){
	SqStack S;
	InitStack(&S);
	
	BiTNode *p=T;
		
	while(p||IsEmpty(&S)!=0){
		if(p!=NULL){
			Push(&S,p);
			p=p->lchild;
		}else{
			p=Pop(&S);
			printf("%c",p->data);
			p=p->rchild;
		}
	}
}

//后续遍历
void PostOrder(BiTNode *T){
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
			if(p->rchild!=NULL&&p->rchild!=r){
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
//层次遍历
void LevelOrder(BiTNode *T){
	SqQueue Q;
	InitQueue(&Q);
	
	BiTNode *p=T;
	EnQueue(&Q,p);
		
	while(IsEmptyQueue(&Q)!=0){
		p=DeQueue(&Q);
		printf("%c",p->data);
		if(p->lchild!=NULL){
			EnQueue(&Q,p->lchild);
		}
		if(p->rchild!=NULL){
			EnQueue(&Q,p->rchild);
		}
	}
}
void InitStack(SqStack *S){
	S->top=-1;
}

void Push(SqStack*S,BiTNode *T){
	if(S->top==MaxSize-1){
		return;
	}
	S->data[++S->top]=T;
}

BiTNode *Pop(SqStack *S){
	if(S->top==-1){
		return NULL;
	}
	return S->data[S->top--];
}

BiTNode *GetTop(SqStack *S){
	if(S->top==-1){
		return NULL;
	}
	return S->data[S->top];
}

int IsEmptyStack(SqStack *S){
	if(S->top==-1){
		return 0;
	}
	return -1;
}

void InitQueue(SqQueue *Q){
	Q->front=0;
	Q->rear=0;
}

void EnQueue(SqQueue *Q,BiTNode *T){
	if(Q->rear+1)%MaxSize==Q->front{
		return;
	}
	q->data[Q->rear++]=T;
}

BiTNode *DeQueue(SqQueue *Q){
	if(Q->front==Q->rear){
		return NULL;
	}
	return Q->data[Q->front++];
}

int IsEmptyQueue(SqQueue *Q){
	if(Q->front==Q->rear){
		return 0;
	}
	return -1;
}
