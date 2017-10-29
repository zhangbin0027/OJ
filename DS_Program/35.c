//共享栈的定义
typedef struct Stack{
	ElemType data[MaxSize];
	int top[2];
}SqStack;

//共享栈的初始化
void InitStack{
	S.top[0]=-1;
	S.top[1]=MaxSize;	
}SqStack;

//判空操作
bool SqStack(SqStack *s){
	if(s.top[0]=-1&&s.top[1]=MaxSize){
		return 0;
	}else{
		return 1;
	}
}
//共享栈的判满
bool SqStack(SqStack *s){
	if(s.top[1]-s.top[0]=1){
		return 0;
	}else{
		return 1;
	}
}
//进栈操作
int Push(SqStack *s,ElemType data,int n){
	if(n<-1||n>MaxSize){
		printf("The Stack is NULL\n");
	}
	if(s.top[1]-s.top[0]=1){
		return 0;
	}		
	switch(n){
		case 0:s->data[++s.top[0]]=x;break;
		case 1:s->data[--s.top[1]]=x;break;
	}
	return 0;
}
//出栈操作
int Push(SqStack *s,ElemType data,int n){
	if(n<1||n>MaxSize){
		printf("The Stack is flase\n");
	}
	if(s.top[0]=-1||s.top[1]=MaxSize){
		return 0;
	}
	switch(n){
		case 0;
		*x=s->data[s.top[0]--];
		break;
		case 1;
		*x=s->data[s.top[1]++];
		break;
	}
	return 0;
}
//链栈
typedef struct LinkLNode{
	ElemType data;
	struct LinkLNode *next;
}LinkStack;
//卡特兰数:1/(n+1)C(n/2n),求n个不同的元素入栈，出栈序列的个数是多少
