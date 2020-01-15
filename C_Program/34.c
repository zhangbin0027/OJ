#include <stdio.h>
//从键盘上输入10个整数,去掉重复的.将其剩余的由大到小输出
void print(int n[],int length)
{
	int i;
	printf("结果是:\n");
	for(i=length-1;i>0;i--)
	{
		printf("%d",n[i]);
	}
	printf("\n");
}

void sort()
{
	int num[10];//记录从键盘输入的10个整形数
	int n[10];//记录整理后的数据
	int length=0;//记录整理后的数据长度
	int i,j,k;
	
	printf("请输入10个整形数:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<10;i++)//去重复并排序
	{
		if(length==0||num[i]>n[length-1])
		{
			n[length]=num[i];
			length++;	
		}
	}
	else
	{//遍历数组n,将num[i]插入
		for(j=0;j<length;j++)
		{
			if(n[j]==num[i])//数组中已存在
			{
				break;
			}	
			else if(num[i]<n[j])
			{
				for(k=length;k>j;k--)//将j后数字向后移一位
				{
					n[k]=n[k-1];
				}
					n[j]=num[i];
					length++;
					break;
			}
		}
	}
}
	print(n,length);

void main()
{
	sort();
}
