#include <stdio.h>
#include <stdlib.h>

void swap(int A[],int n){
	if(A[j-1]>A[j]){
		temp=A[j-1];
		A[j-1]=A[j];
		A[j]=temp;
	}
}
void sort(int A[],int n){
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(A[j-1]>A[j]){
				swap(A[j-1],A[j]);
				falg==false;
			}
			if(flag==false) return;
		}
	}
}
int main(int argc,char *argv[]){
	int A[]={7,8,4,5,2,3,5,6,10,9};
	int n=sizeof(A);
	sort(A[],n);
	for(i=0;i<n;i++){
		printf("%d",A[i]);
	}
	printf("\n");
	return 0;	
}
void qsort(ElemType A[],int low,high){
	if(low<high){
	int pivort=partion(A,low,high);
	qsort(A,low,pivot-1);
	qsort(A,pivot+1,high);
}
int partion(ElemType A[],int low,int high){
	ElemType pivort=A[low];
	while(low<high){
	if(low<high&&A[high]>=pivot){
		--high;
		}else{
			A[low]=A[high];
		}
	if(low<high&&A[low]<=pivot){ 
		++low;
		}else{
		A[high]=A[low];
		}
	A[low]==pivort;
	return low;
}
int main(int argc,char *argv[]){
	int A[]={1,5,6,3,8,7,5,9,12,13};
	int n=sizeof(A);
	qsort(A[],n);
	for(i=0;i<n;i++){
		printf("%d",A[]);
	}
	printf("\n");
	return 0;
}

void ssort(ElemType A[],int i,int j){
	int n=sizeof(A);
	for(i=0;i<n;i++){
		min=i;
		for(j=n+1;j<n;j++){
			if(A[j]<A[min]){
				min=A[j];
			}else if(min!=i){
				swap(A[i],A[min]);
			}
		}
	}
}
int main(int argc,char *argv[]){
	int A[]={1,3,5,6,23,54,56,4,8,9};
	int n;
	n=sizeof(A);
	ssort(A[],n);
	for(i=0;i<n;i++){
		printf("%d",A[]);
	}
	printf("\n");
	return 0;
}

ElemType B=(ElemType*)malloc((n+1)*ElemType);
void msort(ElemType A[],int low,int mid,int high){
	for(int k=low;k<n;k++){
		B[K]=A[K];	
	}
	for(i=low;j=mid+1;j++){
		if(B[i]<B[j]){
			A[k]=B[i++];
		}else{
			A[k]=B[j++];
		}
	}
	while(i<=mid) A[k++]=B[i++];
	while(j<=high) A[k++]=B[j++];
	return 0;
}
int main(int argc,char *argv[]){
	int A[]={2,5,4,7,5,8,4,5,6,23};
	int n;
	n=sizeof(A);
	msort(A[],n);
	for(i=0;i<n;i++){
		printf("%d",A[]);
	}
	printf("\n");
	return 0;
}

typedef enum(Red,White,Blue)color;
void Flag_Arrage(color a[],int n){
	int i=0;
	int j=0;
	int k=n-1;
	while(j=k){
		switch(a[j]){
			case Red;
				swap(a[i],a[j],i++,j++;break);
			case white;
				j++;break;
			case Blue;
				swap(a[j],a[k]),k--;
			}
}

int Binary_Search(SeqList L,ElemType key){
	int low=0;
	int high=L.len-1;
	int mid;
	while(low<high){
		mid=(low+high)/2;
		if(L.elem[mid]==key)
			return mid;
		else if(L.elem[mid]>key)
			high=mid-1;
		else		
			low=mid+1;
	}
}

int EnQueue(SqStack S1,SqStack &S2,int x){
	int y;
	if(s1.top==MaxSize-1){
		if(!SEmpty(s2)
			return 0;
		else if(Sempty(s2))
			while(!Sempty(s2)
}

typedef int Elemtype;
typedef struct LNode{
	ElemType data;
	struct LNode *link;
}LNode,*LinkList;

int srarch_k(LinkLIst list,int k){
	LNode *p=list->link,*q=list->link;
	int count=0;
	while(p!=NULL){
		if(count<k)
			count++;
		else 
			q=q->link;
			p=p->link;
	}
	if(count<k)
		return 0;
	else{
		printf("%d",q->data);
		return 1;
	}

void Exchange(DataType A[],int m,int n,int arraySize){
	Reverse(A,0,arraySize);
	Reverse(A,0,n-1,arraySize);
	Reverse(A,n,m+n-1,arraySize);
}
void Search_Exchange_Insert(ElemType A[],EleType x){
	int low=0;
	int hig=n-1;
	int mid;
	while(low+high)/2;
		mid=(low+high)/2;
		if(A[mid]==x)
			break;
		else if(A[mid]<x low=mid+1);
		else high=mid-1;
	}
	if(A[mid]==x&mid!=n-1){
		t=A[mid];
		A[mid]=A[mid+1];
		A[mid+1]=t;
	}
	if(low>high){
		for(i=n-1;i>high;i--)
		A[i+1]=x;
	}
}

void Reverse(int R[],int from,int to){
	int i,temp;
	for(i=0;i<(to-from+1)/2;i++){
		temp=R[from+i];
		R[to-i]=R[to-i];
		R[to-i]=temp;
	}
}
void Converse (int R[],int p){
	Reverse(R,0,p-1);
	Reverse(R,p,n-1);
	Reverse(R,0,n-1);
}
//递归删除不带头结点的单链表中的所有值为x的结点
void DelLNode(ElemType x,LNode *head){
	if(p==NULL){
		return NULL;
	}
	if(p->data=x){
		p->data=q->data;
		p->next=q->next;
		free(p);
		DelLNode(p,x);
	}else{
		DelLNode(p->next,x)
		}
}
//删除自身结点
void Del_x(LNode *head,int i){
	LNode *p=head;
	LNode *q=head->next;
	while(i){
		p=q;
		q=q->next;
		i--;
	}
	p->data=q->data;
	p->next=q->next;
	free(q);
}

void Del_x(LNode *head,int i){
	LNode *p;
	LNode *q=p->next;
	if(p==NULL){
		return;
	}
	if(p->data=x){
		if(q!=NULL){
			p->data=q->data;
			p->next=q->next;
		}else{
			p=NULL;
		}
	   	free(q);
		Del_X(p,x);
		}else{
			Del_X(p->next,x);
		}	
	}

//删除单链表中不带头的第i个结点
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
typedef ElemType int;
typedef struct LNode{
	ElemType data;
	struct LNode *head;
}LNode,*LinkLNode;

void Del_X(LNode *p,ElemType i){
	LNode *p;
	LNode *q=p->next;
	if(p=NULL){
		return 0;
	}
	while(p!=NULL){
		if(q!=NULL){
			p->data=q->data;
			p->next=q->next;
		}else{
			p=NULL;
		}
		free(p);
		Del_x(p,x);	
	}else{
		Del_x(p->next,x);
	}
}
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100
typedef ElemType int;

typedef struct LNode{
	Elemtype data;
	struct LNode *head;
}LNode.*linkLinkList;

void CreatLNode(ElemType data,LNode *head){
	while(scanf(&LNode)!=EOF){
		LNode=(LNode*)malloc(sizeof(LNode));
		LNode *head=CreateLNode;
	}
}
void DelLNode(Elemtype data,LNode *head){
	LNode *pre=head;
	LNode *p=pre->next;
	while(p){
		if(p->data=x){
			pre->next=p->next;
			free(p);
		}else{
			pre=pre->next;
			p=p->next;
		}
		return 0;
	}	
}
int main(int argc,char* argv[]){
	CreateLNode *head;
	DelLNode(&L,x);
	for(i=0;i<n;i++){
		printf("&x",p->data);
	}
	printf("\n");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreatList(LNode*);
void DelMin(LNode*);
void Print(LNode*);

int main(int argc,char *argv[]){
	LNode *head;
	head=(LNode*)malloc(sizeof(LNode));
	head->next=NULL;
	
	head=CreatList(head);
	Print(head);
	DelMin(head);
	Print(head);

	return 0;
}

LinkList CreatList(LNode *head){
	LNode *s;
	ElemType x;
	scanf("%d",&x){
		while(x!=999){
			s=(LNode*)malloc(sizeof(LNode));
			s->data=x;
				
			s->next=head->next;
			head->next=s;
		
			scanf("%d",&x);
		}
		return head;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct LNode{
	ElemType data;
	struct LNode *head;
}LNode,*linkLink;

LinkList CreatList(LNode &);
void Sort(LNode *,p);
void Print(LNode *,p);

int main(int argc,char *argv[]){
	LNode *head;
	head=(LNode*)malloc(sizeof(LNode));
	head->next=NULL;
	
	head=CreateList(LNode *);
	Print(LNode *);	
	Sort(LNode *);
	Print(LNode *);	
	
	return 0;
}

void SortLNode(ElemType data,LNode *head){
	LNode *pre=head;
	LNode *p=head->next;
	LNode *q=p->next;
	
	*pre->next=NULL;
	while(p){
		if(q->next!=NULL&&p->data<pre->data){
			pre->next=p;
			p=p->next;			
		}else{
			p==q;
			p=p->next;
		}	
	}
	return head;
}

void Print(ElemType data,LNode *p){
	for(i=0;i<n;i++){
		printf("%4d\n",p->data);
	}
	printf("\n");
	return 0;
}

void LinkListCreat(ElemType data,LNode *head){
	LNode *head;
	head=(LNode*)malloc(sizeof(LNode));
	scanf("%4d",&x);
	while(x!=999){
		L->next=head->next;
		head->next=L;
		scanf("%4d",&x);
	}
	return head;
}

typedef struct LNode{
	ElemType data;
	struct LNode *head;
}LNode,*LinkList;

void Del_Min(LNode *head){
	LNode *pre=head;
	LNode *p=head->next;
	
	LNode *minpre=pre;
	LNode *minp=p;

	while(p){
		if(p->data<pre->data){
			pre=p;//用指针p进行遍历，若p指针所指的位置比当前的结点小，则与pre进行交换
			minpre=minp;
		}
		pre=p;
		p=p->next;
	}
	minpre->next=minp->next;
	free(minp);
}

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreatList(LNode*);
void DelMin(LNode*);
void Print(LNode*);

int main(int argc,char *argv[]){
	LNode *head;
	head=(LNode*)malloc(sizeof(LNode));
	head->next=NULL;
	
	head=CreatList(head);
	Print(head);
	DelMin(head);
	Print(head);
	
	return 0;
}

LinkList CreatList(LNode *head){
	LNode *s;
	ElemType x;
	scanf("%d",&x);
	while(x!=999){
		s=(LNode*)malloc(sizeof(LNode));
		s->data=x;
	
		s->next=head->next;
		head->next=s;
		
		scanf("%d",&x);
	}
	return head;
}

void DelMin(LNode *head){
	LNode *pre=head;
	LNode *premin=pre,*min=p;
	while(p){
		if(min->data>p->data){
			premin=pre;
			min=p;
		}
		pre=p;
		p=p->next;
	}
	printf("Deleted Node is:%4d\n",min->data);
	premin->next=min->next;
	free(min);	
}

void Print(LNode *head){
	LNode *p=head->next;
	while(p){
		printf("%4d",p->data);
		p=p->next;
	}
	printf("\n");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode *head;
}LNode,*LinkList;

int main(int argc,char *argv[]){
	LNode *head;
	head=(LNode*)malloc((sizeof)LNode);
	
	int ElemType;
	head->data=x;
	head=CreateList();
	print(head);
	Del_min();
	print(head);	
}
typedef struct LNode{
	
}
void Del_Min(LNode*){
	LNode *p=head;
	LNode *pre=head;
	
	LNode *minp=p;
	LNode *minpre=pre;
	
	while(p!=NULL){
		if(p->data<pre->data){
			pre=p;
			p=p->next;	
			min=p;
		}
	}
}

