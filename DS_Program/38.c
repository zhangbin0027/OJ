//Q是一个队列，S是一个空栈 ,实现将队列中的元素逆置的算法
//算法思想：因为Q是一个队列，如果仅仅按照队列先进先出的特性时无法完成自身元素逆置操作的，而题目中又给出了一个可用栈，那么我们只需借助栈先进后出的特性完成元素逆置。将队列中的元素逐个出队，然后入栈，最后再入队即可完成队列元素的逆置。

//创建队列
while(x!=999){
        EnQueue(&Q,x);
        scanf("%d",&x);
}
//出队->入栈
while(Q.front!=Q.rear){
    DeQueue(&Q,&x);
    EnStack(&S,x);
}
InitQueue(&Q);
//出栈->入队
while(S.top!=-1){
    DeStack(&S,&x);
    EnQueue(&Q,x);
}

//具体代码
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10
typedef int ElemType;
//定义队列
typedef struct{
	ElemType data[MaxSize];
	int front,rear;
}SqQueue;
//定义栈
typedef struct{
	ElemType data[MaxSize];
	int top;
}SqStack;

void InitQueue(SqQueue*);
void EnQueue(SqQueue*,ElemType);
void DeQueue(SqQueue*,ElemType);

void InitStack(SqStack*);
void EnStack(SqStack*,ElemType);
void DeStack(SqStack*,ElemType);
	
void PrintQueue(SqQueue*);

int main(int argc,char *argv[]){
	SqQueue Q;
	SqStack S;
	InitQueue(&Q);
	InitStack(&S);
	
	ElemType x;
	scanf("%d",&x);
	while(x!=999){
		EnQueue(&Q,x);
		scanf("%d",&x);
	}	
	while(Q.front!=Q.rear){
		DeQueue(&Q,&x);
		EnStack(&S,x);
	}
	InitQueue(&Q);
	while(S.top!=-1){
		DeStack(&S,&x);
		EnQueue(&Q,x);
	}
	PrintQueue(&Q);
	return 0;	
}
//初始化队列
void InitQueue(SqQueue *Q){
	Q->front=0;
	Q->rear=0;
}
//入队
void EnQueue(SqQueue *Q,ElemType x){
	Q->data[Q.rear++]=x;
}
//出队
void DeQueue(SqQueue *Q,ElemType *x){
	if(Q->front==Q->rear){
		printf("The Queue is empty!\n");
	}
	*x=Q->data[Q->front++];
}
//初始化栈
void InitStack(SqStack *S){
	S->top=-1;
}
//入栈
void EnStack(SqStack *S,ElemType x){
	s->data[++s.top]=x;
}
//出栈
void DeStack(SqStack *S,ElemType *x){
	if(S->top==-1){
		printf("The stack is empty!\n");
		return;
	}
	*x=S->data[s.top--];
}
//打印全部元素
void PrintQueue(SqQueue *Q){
	while(Q.front!=Q->rear){
		printf("%4d",Q->data[Q->front++]);
	}
	printf("\n");
}
