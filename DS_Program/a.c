#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreatList(LNode*);
void RverList(LNode*);
void Print(LNode*);

int main(int argc,char *argv[]){
	LNode *head;
	head=(LNode)malloc(sizeof(LNode*));
	head->next=NULL;
	
	CreatLinkList(LNode*);
	ReverseLNode(LNode*);
	Print(LNode*);
		
	return 0;
}

LinkList CreatList(LNode *head){
	LNode *L;
	ElemType x;
	scanf("%d",&x);
	while(x!=999){
		L=(LNode*)malloc(sizeof(LNode));
		L->data=x;
		
		L->next=head->next;
		head->next=L;
		
		scanf("%4d",&x);
	}
	return head;
}

void RverList(LNode *head){
	LNode *pre=head;
	LNode *p=pre->next;
	LNode *q=p->next;
	p->next=NULL;
	while(q){
		pre=p;
		p=q;
		q=q->next;

