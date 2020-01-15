/*设有主串s和子串t,子串t的定位就是要在主串s中找到一个与子串t相等的子串。 
通常把主串s称为目标串,把子串t称为模式串,因此定位也称作模式匹配。 
模式匹配成功是指在目标串s中找到一个模式串t；不成功则指目标串s中不存在模式串
首先对s和t同时进行访问，如果t中的元素有一个与s不匹配，那么对字符串s和字符串t的下标进行重置，s的下标重置为与t开始相比的下一个下标，t的下标置0。 
如果s或t有一个已经访问结束，那么判断t是否访问结束。如果是，则标志已经访问完成；如果不是，则表示没有在s中找到子串t
算法思想：
int FindSub(String *S,String *T){
	int i=0;j=0;
	while(i<S->length&&j<T->length){
		if(S->data[i]==T->data[i]){
			i++;
			j++;
		}else{
			i=i-j+1;
			j=0;
		}
	}
	if(j==T->length){
		return 0;
	}else{
		return -1;
	}
}
*/

//具体代码
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100
typedef char ElemType;
typedef struct{
	ElemType data[MaxSize];
	int length;
}String;

void StrCreat(String*);
void Print(String*);
int FindSub(String*,String*);

int main(int argc,char* argv[]){
	String *s;
	s=(String*)malloc(sizeof(String));
	StrCreat(S);
	
	String *t;
	t=(String*)malloc(sizeof(String));
	StrCreat(t);
	
	int flag=FindSub(s,t);
	if(flag==0){
		printf("t is subString of s!\n");
	}else{
		printf("t is not subString of s!\n");
	}
	
	return 0;
}

//创建串
void StrCreat(String* S){
	char x;
	S->length=0;
	printf("Input String_S(End of '#'!):\n");
	scanf("%c",&x);
	while(x!='#'){
		S->data[S->length++]=x;
		scanf("%c",&x);
	}
	getchar();
}

//模式匹配，寻找s中是否存在子串t
int FindSub(String *S,String *T){
	int i=0,j=0;
	while(i<S->length&&j<T->length){
		if(S->data[i]==T->data[j]){
			i++;
			j++;
		}else{
			i=i-j+1;
			j=0;
		}
	}
	if(j==T->length){
		return 0;
	}else{
		return -1;
	}
}

void Print(String *S){
	for(int i=0;i<S->length;i++){
		printf("%c",S->data[i]);
	}
	printf("\n");
}
