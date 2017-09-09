//二叉树的先序遍历
void PreOrder(BiTNode *T){
	BiTNode *p=T;
	if(T!=NULL){
	printf("%c",T->data);
	PreOrder(p->lchild);
	PreOrder(p->rchild);
	}
}
//二叉树的先序非递归遍历
void PreOrder(BiTNode *T){
	BiTNode *p=T;	
	SqStack S;
	InitStack(&S);//初始化栈
	Push(&S,p);//将根节点入栈
	while(isEmpty(&s)!=0){
		Pop(&S,p);//弹栈
		printf("%c",p->data);//访问栈顶元素
		if(p->rchild!=NULL)
			Push(&S,p->rchild);//左子树入栈
		if(p->lchild!=NULL)
			Push(&S,p->lchild);//右子树入栈
	}
}
//二叉树中序遍历
void InOrder(BiTNode *T){
	BiTNode *p=T;
	if(T!=NULL){
		InOrder(p->lchild);
		printf("%c",p->data);
		InOrder(p->rchild);
	}
}
//二叉树的中序非递归遍历
void InOrder(BiTNode *T){
	BiTNode *p=T;
	SqStack S;
	InitStack(&S);

	while(p||isEmpty(&s)!=0){
		if(p!=NULL){
			Push(&S,p);
			p->p->lchild;
		}else{
			Pop(&S,p);
			print("%d",p->p->data);
			p->prchild;
		}
	}
}

//二叉树的后续遍历
void PostOrder(BiTNode *T){
	BiTNode *p=T;
	SqStack S;
	InitStack(&S);
	Push(&S,p);//将根结点入栈
	while(isEmpty(&S)!=0){
		if(p->rchild!=NULL){
			Push(&S,p->p->rchild);
			p->p->rchild;
		}
		if(p->lchild!=NULL){
			Push(&S,p->p->lchild);
			p->p->lchild;	
		}
		Pop(&S,p);//将根结点弹栈
		printf("%c",p->p->data);		
	}	
}
//二叉树的后续非递归遍历
void PostOrder(BiTNode *T){
	BiTNode *p=T;
	BiTNode *r=NULL;
	SqStack S;
	InitStack(&S);
	
	while(p||isEmpty(&s)!=0){
		if(p!=NULL){
			Push(&S,p);
			p=p->lchild;
		}else{
			p=GetTop(&S);
			if(p->rchild!=NULL&&rchild!=NULL){
				p=p->rchild;	
				Push(&S,p);
				p=p->lchild;	
			}else{
				p=Pop(&S,p);
				printf("%c",p->data);
				r=p;
				p=NULL;
			}
		}			
	}		
}

//层次遍历的非递归算法
void LevelOrder(BiTNode *T){
	SqQueue Q;
	InitQueue(&Q);
	
	BiTNode *p=T;
	EnQueue(&Q,p);
	
	while(isEmpty(&Q)!=0){
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

void InitQueue(SqQueue *Q){
	Q->front=0;
	Q->rear=0;
}
void EnQueue(SqQueue *Q,BiTNode *T){
	if((Q->rear+1)%MaxSize==Q->front){
		return;
	}
	Q->data[Q.rear++]=T;
}

BiTNode DeQueue(SqQueue *Q){
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
//双链表的定义
typedef struct DNode{
	ElemType data;
	struct LNode *piror,*next;
}DNode,*DLinkList;
//头插法建立双链表
DLinklist Creatlist(DNode *head){
	DNode *s;
	ElemType x;
	scanf("%d",&x);
	while(x!=999){
		s=(DNode*)malloc(sizeof(DNode));
		s->data=x;
		s->next=head->next;
		if(head->next){
			head->next->piror=s;
		}
		s->piror=head;
		head->next=s;
		scanf("%d",&x);
	}
	return head;
}
//尾插法建立双练表
DLinklist Creatlist(DNode *head){
	DNnode *s;
	DNnode *r;
	ElemType x;
	scanf("%d",&x);
	while(x!=999){
		s=(DNode*)malloc(sizeof(DNode));
		s->next=NULL;
		s->data=x;
		
		r->next=s;
		s->piror=s;
		r=s;
		scanf("%d",&x);
	}
	r->next=NULL;
	return head;
	
}

void Del(LNode *head,ElemType x){
	LNode *pre=head;
	LNode *p=head->next;
	while(p!=NULL){
		if(p->data==x){
			pre->next=p->next;
			free(p);
			p=p->next;
		}else{
			pre=p;
			p=p->next;
		}
	}
}

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

int main(int argc,char *argv[]){
	LNode *head;
	head=(LNode*)malloc(sizeof(LNode));
	head->next=NULL;
	head=CreatList(head);
	Print(head);
	DelNodeX(head,3);
	Print(head);
	return 0;
}

LinkList CreatList(LNode *head){
	LNode *L;
	ElemType x;
	scanf("%d",&x);
	
	while(x!=990){
		L=(LNode*)malloc(sizeof(LNode));
		L->data=x;
		L->next=head->next;
		head->next=L;
	
		scanf("%d",&x);
	}
	return head;
}

void DelNodeX(Node *head,ElemType x){
	LNode *pre=head;
	LNode *p=p->next;
	while(p!=NULL){
		if(p->data==x){
			pre->next=p->next;
			free(p);
			p=pre->next;
		}else{
			pre=p;
			p=p->next;
		}
	}
}

void Print(LNode *head){
	LNode *p=p->next;
	while(p){
		printf("%4d",p->data);
		p=p->data;
	}
	printf("/n");
}

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreateList(LNode*);

void Del_min(LNode *head){
	LNode *pre=head;
	LNode *p=head->next;
	LNode *minpre=pre;
	LNode *minp=p;
	while(p){
		if(minp->data>p->dat){
		minpre=pre;
		minp=p;
	}
	pre=p;
	p=p->next;
	}
	printf("Delete Node:%4d\n",minp->data);
	minpre->next=minp->next;	
	free(minp);
}

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreatList(LNode*);
void DelRrepeat(LNode*)
void Print(LNode*);

int main(int arhc,char *argv[]){
	LNode *head;
	head=(LNode*)malloc(sizeof(LNode));
	head->next=NULL;
	head=CreateList(head);
	Print(head);

	DelRrepea(head);
	Pirint(head);
	return 0;
}

//尾插法建立单链表
LinkList Creat(LNode *head){
	LNode *r=head;
	LNode *s;
	ElemType x;
	scanf("%d",&x);
	while(x!=999){
		s=(LNode*)malloc(sizeof(LNode));
		s->data=x;
		r->next=x;
		r=s;
		scanf("%d",&x);
	}
	r->r->next=NULL;
	return head;
}
//查找并删除重复值
void DelRepeat(LNode *head){
	LNode *pre=head;
	LNode *p=head->next;
	while(p){
		if(pre->data==p->data){
			pre->next=p->next;
			free(p);
			p=pre->next;
		}
		pre=p;
		p=p->next;
	}
}
//统计出单链表中结点的值等于给定值x的结点数
int CountX(LNode *HL,ElemType x){
		LNode *p=HL;
		int cnt=0;//计数器
		
		if(p==NULL)
			return false;//判断合法性
		while(p){
			if(p->data=x){//查找值为x的结点
				cnt++;//数量+1
				p->p->next;//指向下一个节点
			}	
		}
		return cnt;	
}
//直接插入排序
void insertSort(ElemType A[],int n){
	int i,j;
	for(i=2;i<=n;i++)
		if(A[i].key<A[i-1].key){//若A[i]的关键字小于前驱
			A[0]=A[i];//复制为哨兵
			for(j=i-1;A[0].key;--j)//从后往前查找待插入位置
				A[j+1]=A[j];//向后挪位
			A[j+1]=A[0];//复制到插入位置
		}
}

//双链表的定义
typedef struct DNode{
	ElemType data;
	struct LNode *piror,*next;
}DNode,*DLinkList;
//头插法建立双链表
DLinklist Creatlist(DNode *head){
	DNode *s;
	ElemType x;
	scanf("%d",&x);
	while(x!=999){
		s=(DNode*)malloc(sizeof(DNode));
		s->data=x;
		s->next=head->next;
		if(head->next){
			head->next->piror=s;
		}
		s->piror=head;
		head->next=s;
		scanf("%d",&x);
	}	
	return head;
}

//有一组初始记录关键字序列,要求设计一个算法能够在O(n)的时间复杂度内将线性表划分为两部分，其中左半部分的每个关键字均小于k,有半部分的关键字都大于k


