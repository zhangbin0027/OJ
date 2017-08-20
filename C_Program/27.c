//为了充分利用空间，顺序栈s0,s1共享一个存储区elem[1...maxsize-1].
//设计共享栈,s0,s1,以及关于入栈和出栈的算法,栈中元素为int型
//两个栈共享空间，将两个栈的栈底设在向量两端，初识时，s1栈顶指针为-1,s2栈顶指针为maxsize.两个栈顶指针相邻时为满。两个栈顶指针相向，迎面增长，栈顶指针指向栈顶元素
#define maxsize 100//两个共享顺序存储空间所能达到的最多的元素 
#define elemtype int //假设元素类型为整型
typedef struct
{
		
	elemtype stack[maxsize];//栈空间
	int top[2];//top为两个栈顶的指针
}stk;
stk s;
//本题的关键在于，两个栈入栈和出栈时栈顶指针的计算,s1是下栈，s2入栈时，其栈顶指针左移，退栈时栈顶指针右移
int push(int i,elemtype x)
//入栈操作，i=0表示左边的s1栈，i=1时表示右边的s2栈,x是入栈元素
//入栈成功返回0，失败返回-1
{
	if(i<0||i>1){
		printf("栈号输入不对");
		exit(-1);
	}	
	if(s.top[1]-s.top[0]==1){//入栈判满
		printf("栈满\n");
		printf("return -1");
	}
	switch(i){
		case 0:s.stack[++s.top[0]]=x;return 0;break;
		case 1:s.stack[--s.top[1]]=x;return 0;
	}
}

int pop(int i)
{
	if(i<0||i>1){
		printf("栈号输入不对:\n");
		exit(-1);
	}
	switch(i){
	case 0;	
		if(s.top[0]==-1){//出栈判空
		printf("栈空\n");
		return -1;
	}
		else return s.stack[s.top[0]--];
	case 1;
		if(s.top[1]==maxsize){
		printf("栈空\n");
		return -1;//出栈判空
	}
		else return s.stack[s.top[1]++];
	} 
}

