#include <stdio.h>
//编写插入排序，定义整型数组a来存储由键盘输入的20个数，每输入一个数据，将它插入到合适的位置上
void main()
{
	int a[20];
	int i,j,k,temp;

	printf("请依次输入20个数:\n");
	printf("1:");//输入第一个数据
	scanf("%d",&a[0]);
	for(i=1;i<20;i++)//从1-19循环输入
	{
		printf("%2d:",i+1);
		scanf("%d",&temp);
		
		j=i-1;
		if(temp>a[j])//如果输入变量大于a[j]
			a[i]=temp;//赋值
		else{//负责后移并赋值
			do{
				j--;	
			}while(temp<a[j]&&j>-1);
			for(k=i;k>j+1;k--)
				a[k]=a[k-1];
				a[j-1]=temp;
		}
		
	}
	printf("排序后的数组为:\n");
	for(i=0;i<20;i++)
		printf("%2d",a[i]);
	printf("\n");
}
