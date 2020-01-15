//用递归法求n!
#include <stdio.h>

int func(int n)
{
	if(n==1)
		return 1;
	else 
		return n*func(n-1);
}

void main()
{
	int n;
	printf("请输入:\n");
	scanf("%d",&n);
	printf("n!=%d\n",func(n));
}
