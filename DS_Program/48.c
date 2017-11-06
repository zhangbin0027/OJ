//共享栈的基本操作
//共享栈的进栈操作
int Push(SqStack *s,ElemType *x,int n){
	if(n<0||n>1){
		printf("The stack number is false!\n");
		return -1;//判断栈号是否正确
	}
	if(s.top[0]-s.top[1]==1){//栈顶指针与栈底指针相遇
		printf("The stack is Empty!\n");//栈空
		return -1;
	}
	if(s.top-s.top[1]==0){
	
	}	
	switch(n){
		case 0:
			s.[top[0]++]=s->data;//栈顶指针自增，入栈
		case 1：
			s.[top[1]--]=s->data;//栈底指针减减，出栈
	}
}
int Push(SqStack *s,ElemType *x,int n){
	if(n<0||n>1){
		printf("The stack number is false!\n");
		return -1;//判断栈号是否正确
	}
	if(s.top[0]==-1){//栈底指针为-1时为空
		printf("The stack is Empty!\n");
		return -1;
	}
	switch(n){
		case 0:
			if(s.top[0]==-1){
				printf("The stack0 is Emptye!\n");
				return -1;
			}
			*x=s->data[s.top[0]--];
			break;
		case 1;
			if(s.top[1]=MaxSize){
				printf("The stack1 is Empty!\n");
				return -1;
			}
			*x=s->data[s.top[1]++]
			break;
	}
	return 0;
}
