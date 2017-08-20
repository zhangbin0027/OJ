#include <stdio.h>
#include <math.h>
//编写程序，计算N！的值要求N的值由键盘输入

void main()
{
	int n;
	double x=1.0;
	int i;
	printf("请输入N：");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=x*i;
	}
	if(x==0)
		printf("溢出！");
	else
		printf("N!为:%5.2e\n",x);
}
