#include <stdio.h>
//编写程序，不用标准函数strlen()，求出字符串的长度,并将长度打印出来
int len(char *p)
{
	int n=0;
	while(*p!='\0')
	{
		n++;
		p++;
	}
	return n;
}

int main()
{
	int length;
	char str[20];
	printf("please input a string:\n");
	scanf("%s",str);
	length=len(str);
	printf("the length of the string is %d:\n",length);
	return 0;
}
