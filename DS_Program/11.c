//编写算法将带头结点的单链表就地逆置，所谓就地就是指辅助空间复杂度为O(1)
//算法思想：头插法建立单链表
LinkList Reverse_1(LNode *head){
	LNode *p,*r;//p为工作指针，r为p的后继，防止断链
	p=L->next;//从第一个元素结点开始
	L->next=NULL;//先将头节点的next域置为空
	while(p!=NULL){//依次将元素结点摘下
		r=p->next;//暂存p的后继
		p->next=L->next;
		L->next=p;
		p=r;
	}
}
//具体代码
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;

LinkList CreatList(LNode*);
void RverList(LNode*);
void Print(LNode*);

int main(int argc, char* argv[])
{
    LNode *head;
    head=(LNode*)malloc(sizeof(LNode));
    head->next=NULL;

    head=CreatList(head);
    Print(head);
    RverList(head);
    Print(head);

    return 0;
}
//头插法创建单链表
LinkList CreatList(LNode *head)
{
    LNode *L;
    ElemType x;
    scanf("%d",&x);
    while(x!=999){
        L=(LNode*)malloc(sizeof(LNode));
        L->data=x;

        L->next=head->next;
        head->next=L;

        scanf("%d",&x);
    }
    return head;    
}
//就地逆置单链表
void RverList(LNode *head){
    LNode *pre=head;
    LNode *p=pre->next;
    LNode *q=p->next;
    p->next=NULL;
    while(q){
        pre=p;
        p=q;
        q=q->next;
        p->next=pre;
    }
    head->next=p;
}

//打印全部结点
void Print(LNode *head)
{
    LNode *p=head->next;
    while(p){
        printf("%4d",p->data);
        p=p->next;
    }
    printf("\n");
}
