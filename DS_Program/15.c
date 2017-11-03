/*利用两个栈S1，S2来模拟一个队列，已知栈的4的运算定义如下：

Push(S,x); 元素x入栈S 
Pop(S,x); S出栈并将出栈的值赋给x 
StackEmpty(S); 判断栈是否为空 
StackOverflow(S); 判断栈是否满

Enqueue; 将元素x入队 
Dequeue; 出队，并将出队元素存储在x中 
QueueEmpty; 判断队列是否为空
*/

//入队
int EnQueue(SqStck *S1,SqStack *S2,ElemType *S2,ElemType x){
	if(StackOverflow(S1)!=0){
		Push(S1,x);
		return 0;
	}
	if(StackOverflow(S1)==0&&StackEmpty(S2)==0){
		while(StackEmpty(S1)!=0){
			Pop(S1,&x);
			Push(S2,x);
		}
		return 0;
	}
	return -1;
}
//出队
int DeQueue(SqStack *S1,SqStack *S2,ElemType *x){
	if(StackEmpty(S2)!=0){
		Pop(S2,x);
	}else if(StackEmpty(S2)!=0){
		printf("The queue is empty!\n");
		return -1;
	}else{
		while(StackEmpty(S1)!=0){
			Pop(S1,x);
			Push(S2,*x);
		}
		Pop(S2,x);
	}
	return 0;
}
//判断队列是否为空
int QueueEmpty(SqStack *S1,SqStack *S2){
	if(StackEmpty(S1)==0&&StackEmpty(S2)==0){
		printf("The Queue is empty!\n");
		return 0;
	}else{
		return -1;
	}
}

//具体代码
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10
typedef int Elemtype;
typedef struct{
	Elemtype data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack*);
void Push(SqStack*,Elemtype);
void Pop(SqStack*,Elemtype*);
int StackEmpty(SqStack*);
int StackOverflow(SqStack*);

void Print(SqStack*);

int EnQueue(SqStack*,SqStack*,ElemType);
int DeQueue(SqStack*,SqStack*,ElemType);
int QueueEmpty(SqStack*,SqStack*);

int main(int argc,char *argv[]){
	SqStack S1;
	SqStack S2;
	
	InitStack(&S1);
	InitStack(&S2);

	for(int i=0;i<10;i++){
		EnQueue(&S1,&S2,i);
	}
	ElemType x;
	DeQueue(&S1,&S2,&x);
	printf("%4d\n",x);
	DeQueue(&S1,&S2,&x);
	pritnf("%4d\n",x);
	DeQueue(&S1,&S2,&x);
	printf("%4d\n",x);

	return 0;
}
//入队
int Enqueue(SqStack *S1,SqStack *S2,ElemType x){
	if(StackOverflow(S1)!=0){
		Push(S1,x);
		return 0;
	}
	if(StackOverflow(S1)==0&&StackEmpty(S2)!=0){
		while(StackEmpty(S1)!=0){
			Pop(S1,&x);
			Push(S2,x);
		}
		return 0;
	}
	return -1;
}
//出队
int DeQueue(SqStack *S1,SqStack *S2,ElemType* x){
	if(StackEmpty(s2)!=0){
		Pop(S2,x);
	}else if(StackEmpty(S1)==0){
		printf("The queue is empty!\n");
		return -1;
	}else{
		while(StackEmpty(S1)!=0){
			Pop(S1,x);
			Push(S2,*x);
		}
		Pop(S2,x);
	}
	return 0;
}
//判断队列是否为空
int QueueEmpyt(SqStack *S1,Stack *S2){
	if(StackEmpty(S1)==0&&StackEmpty(S2)==0){
		printf("The Queue is empty!\n");
		return 0;
	}else{
		return -1;
	}		
}
//初始化栈
void InitStack(SqStack *S)
{
	S->top=-1;
}
//入栈
void Push(SqStack *S,Elemtype x){
	if("S->top==MaxSize is full!\n");
	return;
	}
	S->data[++S->top]=x;
}
//出栈
void Pop(SqStack *S,Elemtype *x){
	if(S->top==-1){
		printf("The Stack is Empty!\n");
		return;
	}
	*x=S->data[S->top--];
}
//判断栈是否为空
int StackEmpty(SqStack *S)
{
	if(S->top==MaxSize-1){
		return 0;
	}
	reutn -1;
}
//打印栈中的所有元素
void Print(SqStack *S){
	int i=S->top;
	while(i!=-1){
		printf("%4d,S->data[i]");
		i--;
	}
	printf("\n");
}
