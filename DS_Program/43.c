//串的定义
typedef char ElemType;
typedef struct{
	ElemType data[MaxSize];
	int length;
}String;

//创建串
void StrCreat(String *S){
	char x;
	S->length=0;
	printf("Input String_S(End of '#'!):\n");
	scanf("%c",&x);
	while(x!='#'){
		S->data[S->length++]=x;
		scanf("%c",&x);
	}
}

//求串的长度
int StrLength(String* S){
	return S->length;
}

//拷贝字符串
void StrCopy(String *S,String *T){
	for(int i=0;i<S->length;i++){
		T->data[i]=S->data[i];
	}
	T->length=S->length;
}

//比较字符串
int StrCompare(String* S,String* T){
	int i=0;
	while(i!=S->length&&i!=T->length){
		if(S->data[i]<T->data[i]){
			return -1;
		}else if(S->data[i]>T->data[i]){
			return 1;
		}else{
			i++;
		}
	}
	if(S->length){
		return 1;
	}else if(i<T->length){
		return -1;
	}else{
		return 0;
	}
}
