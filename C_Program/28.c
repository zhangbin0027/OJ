#include <stdio.h>
#include <string.h>
//输入一串字符串，$结束，分别统计各大写字母出现的次数，并按字母出现的多少进行输出（先输出次数最多的，次数相同的按字母顺序输出，不出现的字母不输出）
void main()
{
	char ch[100];//存放字符串
	int n[26];//计数
	int i,j,max;//循环变量
	int len=0;//输入字符的长度

	for(i=0;i<26;i++)//数组初始化
	{
		n[i]=0;	
	}
	
	printf("请输入字符串:\n");//输入
	while(1)
	{
		scanf("%c",&ch[len]);
			len++;
	
		if(len>100||ch[len-1]=='$')
			break;
	}
	
	for(i=0;i<len;i++)//统计
	{
		if(ch[i]>='A'&&ch[i]<='Z')//判断是否是字符
		{
			n[(ch[i]-'A')]++;//字符计数
		}
		i++;
	}

	printf("结果是:\n");
	
	for(i==0;i<26;j++)
	{
		max=0;
		for(j=0;j<26;j++)//找出出现最多的次数
		{
			if(n[j]>n[max])max=j;
		}
		if(n[max]!=0)
		{
			printf("%c:%d\n",'A'+max,n[max]);
			n[max]=0;//打印后次数清零
		}
		else break;
	}
}
