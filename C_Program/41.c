//写出一个函数getint,它把输入的一串数字字符转换成整数
#include <stdio.h>
#include <string.h>
#include <math.h>

int getinit(char *p,int length)//转换函数
{
	int rs=0;
	int i;
	for(i=length;i>0;i--)//转换
	{
		rs+=(*p-48)*(int)pow(10,i-1);
		p++;
	}
	return rs;
}
void main()
{
	char str[15];
	int result=0;length=0;

	printf("请输入字符串:\n");	
	scanf("%s",str);
	length=strlen(str);
	int i=0;
	for(i=0;i<length;i++)
	{
		if(str[i]<48||str[i>57])
		{
			printf("请输入一组由数字字符组成的字符串:\n");
			return;
		}
	}
	result=getinit(str.length);//调用转换函数
	if(result!=0)
	printf("结果是：%d\n",result);//打印结果
}

