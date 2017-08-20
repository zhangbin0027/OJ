//函数extend(s,t)在把字符串s复制到字符串t时将其中的换行符和制表符转换成可见的转移字符表示,即用\n表示换行符，用\t表示制表符，请用指针的方法实现
#include <stdio.h>

void expand(char *p1,char *p2){
	while(*p1!='\0')//最后一个字符停止
	{
		if(*p1=='\n')//处理换行符
		{
			*p2='\\';
			p2++;
			*p2='n';
			p2++;
		}
		else if(*p1=='\t')//处理制表符
		{
			*p2='\\';
			p2++;
			*p2='t';
			p2++;
		}//处理普通字符串
		else{
			*p2=*p1;
			p2++;
		}
		p1++;
	}
	*p2='\0';//设置最后一个字符
}

void main(){
	char s[16],t[30];
	printf("请输入字符串s:\n");

	int i;
	for(i=0;i<15;i++)
		scanf("%c",&s[i]);
	s[15]='\0';
	expand(s,t);//调用拷贝转换函数
	printf("转换后的字符串为:\n %s\n",t);//打印结果
}
