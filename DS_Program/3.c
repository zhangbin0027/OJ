//利用两个栈s1和s2来合并一个队列
int enqueue(sqStack &s1,SqStack &s2,int x)
//s1是容量为maxSize的栈。本算法将x入栈，若入栈成功则返回1，失败则返回0
{
	int y;
	if(s1.top==maxSize-1)//s1满
	{
		if(!sempty(s2))
			return 0;//s1为满s2非空，这时不能再入栈
		else if(sempty(s2))//若s2不为空，则将元素从s1倒入到s2中
			while(!sempty(s1))
			{
				pop(s1,y);
				push(s2,y);
			}
				push(s1,x);//x入栈，实现了元素的入栈，返回1
				return 1;
	}else{
		push(s1,x);//若s1不满，则x直接入栈，返回1
		return 1;
	}
}

int dequeue(sqStack &s1,SqStack &s2,int x)
//s2栈顶元素退栈，实现出队操作，x接受出队元素，成功返回1，否则返回0
{
	int y;
	if(!sempty(s2))//栈s2不空，则直接出队，返回1
	{
		pop(s2,x);
		return 1;
	}else{
		if(Sempty(s1))//若s1为空，则判定队空，将s1倒入s2中再出队
			return 0;
	else
	{
		while(!Sempty(s1))
		{
			pop(s1,y);
			push(s2,y);
		}
		pop(s2,x);//s2退栈，实现队列的出队
		return 1;
	}
}

int queue_empty(SqStack s1,SqStack s2)
//本算法判断s1和s2模拟的队列是否为空
{
	if(Sempty(s1)&&Sempty(s2))
	return 1;//队列空
	else return 0;//队列不空	
}
