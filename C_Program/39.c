#include <stdio.h>
//将十进制数转换为十六进制数
int main()
{
	int i;//定义一个变量i
	printf("please inpu decimallism number:\n");//普通字符原样输出并换行
	scanf("%d",&i);//以十进制形式获得i的值
	printf("the hex number is %x",i);//将i的值以十六进制形式输出
}
