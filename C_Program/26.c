#include <stdio.h>
#define NUM 20
//将一组数据存放在数组中，并将他们排好序。从键盘输入一个数，要求按原来的顺序将它插入到数组合适的位置上
void main()
{
	int a[NUM],length=0;
	int i,j,t,done;
		
	printf("请输入要排序的一组数(-1结束):\n");
	while(1)
	{
		scanf("%d",&a[length]);//输入数据
		length++;//输入数据的个数
		
		if(a[length-1]==-1||length>NUM)
			break;//退出循环
	}
	i=0;
	do{
		done=1;
		for(j=length-1;j>=i+1;j--)
			if(a[j]<a[j-1])
			{	
				done=0;
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
				i++;
	}while((i!=length+1)&&!done);

	printf("排名后的数据为:\n");
	for(i=1;i<length;i++)
		printf("%2d",a[i]);
	printf("\n");
}
