#include <stdio.h>
//用冒泡排序法或选择排序法对三个数组进行排序并进行输出，并给出现在每个元素所对应的原来的次序
void main()
{
	int a[21],pos[21];
	int i,j,t,done;
	
	printf("输入:\n");
	for(i=1;i<=20;i++)
	{
		scanf("%d",&a[i]);
		pos[i]=i;
	}

	i=1;
	do{
		done=1;
		for(j=20;j>=i+1;j--)
			if(a[j]<a[j-1])
			{
				done=0;
				
				t=a[j];//交换a的值
				a[j]=a[j-1];
				a[j-1]=t;
	
				t=pos[j];
				pos[j]=pos[j-1];
				pos[j-1]=t;
			}
	i++;
	}	
}
