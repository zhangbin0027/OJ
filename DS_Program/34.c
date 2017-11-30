//栈的顺序存储结构
typedef struct{
	ElemType data[MaxSize];
	int top;
}SqStack;
//栈空：S.top==-1;栈满：S.top==MaxSize-1;栈长：S.top+1;	
//初始化
InitStack(SqStack *S){
	S.top=-1;
}
//栈的判空
int StackEmpty(SqStack *S){
	if(S.top=-1){
		return 1;
	}else{
		return 0;
	}
}
//入栈操作
int Push(SqStack *s,ElemType data){
//入栈判满,若满返回0，若没有满，则在栈顶插入元素，并返回1
	if(s->top=MaxSize-1){
		return 0;
	}
	->data[++s->top]=x;
	return 0;
}
//出栈操作
int Pop(SqStack *s,ElemType data){
//出栈判空，若空则返回0,若不为空，则取得栈顶元素，并返回1
	if(s->top==-1){
		return 0;
	}
	*x=s->data[s->top--];
	return 0;
}
//读取栈顶元素
int Pop(SqStack *s,ElemType data){
//判断是否为空，若为空则返回0,若不为空，则返回栈顶元素,并返回1
	if(s->top==-1){
		return 0;
	}
	*x=s->data[s->top--];
	return 0;
}

//共享栈
void InitStack(SqStack *s){
	s->top[0]=-1;
	s->top[1]=MaxSize;
}
int StackEmpty(SqStack *s){
	if(s[0]->top==-1&&s[1]->top==MaxSize){
		return 0;
	}else{
		return -1;
	}
}
//入栈操作
int Push(SqStack *s,ElemType x,int n){
	if(n<0||n>1){
		printf("The Stack number is false!\n");
		return -1;
	}
	if(s->top[1]-s->top[0]==1){
		printf("the stack is full!\n");
		return -1;
	}
	switch(n){
		case 0:s->data[++s->top[0]]=x;break;
		case 1:s->data[--s->top[1]]=x;break;
	}
	return 0;
}
//出栈操作
int Pop(SqStack *s,ElemType x,int n){
	if(n<0||n>1){
		return 0;
	}
	switch(n){
		case 0;	
			if(s->top[0]==-1){
				piror("The stack[0] is empty!\n");
			}
			*s=s->data[s->top--];
			break;
		case 1:
			if(s->top[1]==Maxi)
	}
}
