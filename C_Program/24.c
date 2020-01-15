#include <stdio.h>
#include <math.h>
//打印一个水仙花数，所谓水仙花数是指一个三位数，其各位数字立方和等于它本身
int main()
{
	int i,j,k,n;
	for(n=100;n<1000;n++)
	{
		i=n/100;//分解出百位数
		j=n/10%10;//分解出十位数
		k=n%10;//分解出个位数
		if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
		{
			printf("水仙花数为：%d\n",n);
		}
	}
	return 0;
}
