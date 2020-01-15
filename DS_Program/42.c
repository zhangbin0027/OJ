//将两个递增有序的单链表A,B合并成元素值非递减的单链表C

void Merge(LNode *head1,LNode *head2){
	LNode *p1=head1->next;
	LNode *p2=head2->next;
	LNode *r=head;//利用尾插法建立单链表C，r指针初始指向C的头节点
	
	while(p1!=NULL&&p2!=NULL){//当两个工作指针都不为空时循环
		L=(LNode*)malloc(sizeof(LNode));
		if(p1->data<p2->data){//比较两个链表，找到最小值结点
			L->data=p1->data;
			r->next=L;
			p1=p1->next;
			r=L;
		}else{
			L->data=p2->data;
			r->next=L;
			p2=p2->next;
			r=L;
		}
		r->next=NULL;
		if(p1!=NULL) r->next=p1;//将剩余结点的链表的结点连接到C的尾部
		if(p2!=NULL) r->next=p2;
		return head;
	}	
}

//具体代码
#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreatList(LNode*);
LinkList Merge(LNode*,LNode*,LNode*);
void Print(LNode*);

int main(int arhc,char *argv[]){
	LNode *head1;
	head1=(LNode*)malloc(sizeof(LNode));
	head1->next=NULL;
	head1=CreatList(LNode*);
	
	LNode *head2;
	head2=(LNode*)malloc(sizeof(LNode));
	head2->next=NULL;
	head2=CreatList(LNode*)

	LNode *head;
	head=(LNode*)malloc(sizeof(LNode));
	head=LinkList_Merge(LNode *head);
	
	Print(head1);
	Print(head2);
	Print(head);	
	return 0;	
}

LinkList CreatList(LNode* head){
	LNode *L;
	LNode *r=head;
	ElemType x;
	scanf("%d",&x);
	while(x!=999){
		L=(LNode*)malloc(sizeof(LNode));
		L->data=x;
		r->next=L;
		r=L;
		scanf("%d",&x);
	}
	return head;
}

LinkList Merge(LNode *head1,LNode *head2,LNode *head){
	LNode *p=head1->next;
	LNode *p=head2->next;
	LNode *r=head;
	LNode *L;
	while(p1&&p2){//找到两个链表中的最小结点，将其合并
		L=(LNode*)malloc(sizeof(LNode));
		L=LNode *head;
		if(p1->data<p2->data){
			r->next=p1;
			p1=p1->next;
			r=L;		
		}else{
			r->next=p2;
			p2=p2->next;
			r=L;
		}
		r->next=NULL;
		if(p1->next!=NULL) r->next=p1;
		if(p2->next!=NULL) r->next=p2;
		return head;	
	}
}

void Print(LNode*){
	LNode *p=head->next;
	while(p){
		printf("%4d",p->data);
		p=p->next;
	}
	printf("\n");
}
