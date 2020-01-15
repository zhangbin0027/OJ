#include <stdio.h>
//从键盘上输入15个浮点数,求出这15个浮点数的和和他们的平均值,要求写出求和和求平均值的函数
float sum(float x[])//计算15个浮点数的和
{
	int i;
	float sum=0;
	
	for(i=0;i<15;i++)
	{
		sum+=x[i];
	}
	return sum;
}

float ave(float x[])//计算15个数的平均值
{
	return sum(x)/15;//平均值
}

void main()
{
	int i,num;
	float s=0;
	double a=0;
	
	printf("输入15个浮点数:\n");
	for(i=0;i<15;i++)
		scanf("%f",&num[i]);

	s=sum(num);//调用计算和函数
	a=ave(num);//调用计算平均值的函数

	printf("和:%5.4f\n",s);
	printf("平均值:%5.4f\n",a);
}
