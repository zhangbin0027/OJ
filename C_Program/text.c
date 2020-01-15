#include <stdio.h>

void main(){
//编写一个程序，将输入的任意三个数颠倒过来
	int units,tens,hundreds,n;
	printf("please input a number(100-999)");
	scanf("%d",&n);
	units=n%10;
	tens=(n%100)/10;
	hundreds=n/100;
	printf("the reverse of %3d is:%d %d %d\n",n,units,tens,hundreds);
}

#include <stdio.h>
//输入三个数，将居中的值显示出来
int main(){
	int a,b,c;
	printf("please input three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(b>c){
			printf("mid=%d\n",b);
		}else if(a>c){
			printf("mid=%d",a);
		}
	}else if(a>c){
		printf("mid=%d\n",a);
	}else if(b>c){
:		printf("mid=%d\n",c);
	}else{
		printf("mid=%d\n",b);
	}
	system("pause");
	return 0;
}

#include <stdio.h>
#include <math.h>
//编写一个求二元一次方程组的根的程序
void main(){
	int a,b,c;
	float p,q,disc,x1,x2;
	printf("please input three number:\n");
	scanf("%d %d %d",&a,&b,&c);
	disc=b*b-4*a*c;
	p=-b/(2*a);
	q=sqrt(disc)/(2*a);
	x1=p+q;
	x2=p-q;
	printf("x1=%5.2f\t x2=%5.2f\n",x1,x2);
	return 0;
}

#include <stdio,h>
#include <stdlib.h>
//简单选择排序对任意输入的一个10元整数数组排序
void main(){
	int a[10];
	int i,j,min,temp;
	printf("please input 10 integeer numbers:\n");
		for(i=0;i<10;i++)
	scanf("%d",&a[i]);
		for(i=0;i<10;i++){
			min=i;
		}
}

//求一个字符串的长度，在main函数中输入字符串，并输出其长度
#include <stdio.h>

int len(char *p){
	int n=0;
	while(*p!='\0'){
		n++;
		p++;

	}
	return (n);	
}
void main(){
	int length;
	char str[20];
	printf("please input a string :\n");
	scanf("%s",str);
	length=len(str);
	printf("the length of the string is %d",length);
}

#include <stdio.h>
//打印所有的水仙花数，所谓水仙花数就是指一个三位数其个位数字立方和等于该数本身
int main(){
	int i,j,k,n;
	for(n=100;n<1000;n++){
		i=n/100;//分解出百位数
		j=n/10%10;//分解出十位数
		k=n%10;//分解出个位数	
		if(i*100+j*10+k==i*i*i+j*j*j+k*K*k){
			printf("水仙花数字:%d\n",n);
		}
	}
	return 0;
}
