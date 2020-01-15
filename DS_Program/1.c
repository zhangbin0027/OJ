//写出一个时间复杂度为o(n*n)和o(n*logn)的算法，写出一个为了时间放弃空间的算法
//时间复杂度为o(n)的算法为
sum=0;//一次
for(i=0;i<n;i++){//n次
	for(j=0;j<n;j++){//n^2次
		sum++;//n^2次
	}
}

for(i=1;i<n;i++){
	y=y+1;//频度为n-1
	for(j=0;j<=(2*n);j++)
		x++;//2n^2-n-1+(n-1)=2n^2-2
}


//时间复杂度为o(n*log2n)
i=1;//频度为1
while(i<=n)
{
	i=i*2;//设频度为f(n),则2^f(n)<=n;则f(n)<=log2n;
}
printf("%d\n",i)

//牺牲空间换时间
#define LEN 32
char string1 [LEN];
memset (string1,0,LEN);//需调用两个字符函数才能完成
strcpy(string1,"This is a example!");//在需要频繁更改一个字符串内容的时候，具有更好的灵活性

const char string2[LEN]="This is a example!";//需要预存许多字符串
char * cp;//虽然占用了大量的内存但是获得了较高的时间执行效率
cp=string2;//直接使用指针就可以操作，效率高


