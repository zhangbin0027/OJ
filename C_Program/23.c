#include <stdio.h>
#include <math.h>
//编写程序，找出1到999之间能被3整除且至少有一位数字是5的所有整数
void main()
{
	int i,a,b,c,j;//a为百位数，b为十位数，c为个位数
	int flag=0;//标志格式打印
	int f=0;//记录符合条件的个数
	printf("符合条件的整数有:\n");
	for(i=0;i<=999;i++)
	{
		a=i%10;
		b=(i/10)%10;
		c=i/100;
	
		if((i%3==0&&((a==5)||(b==5)||c==5)))
		{
			f+=1;
			printf("%d",i);
			flag=1;
		}
		if(f%5==0&&flag==1)
		{
			printf("\n");
			flag=0;
		}
	}
	printf("\n");
}
