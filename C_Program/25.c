#include <stdio.h>
#include <math.h>

//y=2*sin^2xi+5sin^2xi;i=1,2,3...10
int main()
{
	int i;
	float x[10];
	double y[10];
	
	for(i=0;i<10;i++)
	{
		printf("please input array x[%d]:\n",i+1);
		scanf("%f",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("the anwser is:\n");
		y[i]=2*sin(x[i])*sin(x[i])+5*sin(x[i]*x[i]);
	}
	printf("结果为:\n");//打印
	for(i=0;i<10;i++)
	{
		printf("y[%d]=%f\n",i+1,y[i]);
	}
}
