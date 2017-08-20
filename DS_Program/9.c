//在带头结点的单链表L中，删除所有值为x的结点，并释放其空间，假设值为x的结点不唯一，试编写算法实现以上的操作
//本算法在无序单链表中删除满足某种条件的所有结点，这里的条件是结点的值为x，条件可以任意给定，比如要求删除位于min和max之间的所有结点则只需将if语句改为if(p->data>min&&p->data<max)
//算法实现
void DelNodeX(LNode *head,Elemtype x){
	LNode *pre=head;
	LNode *p=head->next;
	while(p!=NULL){
		if(p->data==x){
			pre->next=p->next;
			free(p);
			p=pre->next;
		}else{
			pre=p;
			p=p->next;
		}
	}
}

//具体代码
#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreatList(LNode*);
void DelNodeX(LNode*,ElemType);
void Print(LNode*);

int main(int argc, char* argv[]){
	LNode *head;
	head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;
	head = CreatList(head);
	Print(head);
	DelNodeX(head,3);
	Print(head);
	return 0;
}

//头插法建立单链表
LinkList CreatList(LNode *head) {
	LNode *L;
	ElemType x;
	scanf("%d", &x);

	while (x != 9999) {
		L = (LNode*)malloc(sizeof(LNode));
		L->data = x;
		L->next = head->next;
		head->next = L;

		scanf("%d", &x);
	}
	return head;
}

//删除值为x的结点
void DelNodeX(LNode *head, ElemType x) {
	LNode *pre = head;
	LNode *p = p->next;
	while (p!=NULL)
	{
		if (p->data == x) {
			pre->next = p->next;
			free(p);
			p = pre->next;
		}else{
			pre = p;
			p = p->next;
		}
	}
}

//打印所有结点
void Print(LNode *head){
	LNode *p = p->next;
	while (p)
	{
		printf("%4d", p->data);
		p = p->next;
	}
	printf("\n");
}
