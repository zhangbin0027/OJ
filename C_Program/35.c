#include <stdio.h>
//从键盘上输入10个整型数,将其剩余的由大到小排序输出
void print(int n[],int length)//输出函数
{
	int i;
	printf("结果是:\n");
	for(i=length-1;i>=0;i--)
	{
		printf("%d",n[i]);
	}
	printf("\n");
}

void sort()//去掉重复值并排序
{
	int num[10];//记录从键盘输入的10个整形数
	int n[10];
	int length=0;
	int i,j,k;
	
	printf("请输入10个整形数:\n");//输入
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		if(length==0||num[i]>n[length-1])//第一种情况
		{
			n[length]=num[i];
			length++;
		}else{
		for(j=0;j<length;j++)//遍历数组,将num[i]插入
		{
			if(n[j]==num[i])//数组中已存在
			{
				break;
			}
				else if(num[i]<n[j])
				{
					for(k=length;k>j;k--)//将j后数组后移一位
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
	print(n,length);//调用输出函数
}

void main()
{
	sort();//调用排序函数
}
