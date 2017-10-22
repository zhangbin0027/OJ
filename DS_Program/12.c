//设一个带表头结点的单链表中所有元素结点的数据值无序，试编写一个函数，删除表中所有其值在给定值s与t之间（包含s和t，要求s<t）的所有结点
//算法思想：因为链表逻辑上无序，删除指定区间结点的前提是找到这些指定区间结点。因此从头节点开始对整个链表进行一次遍历，若找到满足题意的结点，删除即可。
void RangeDel(LNode *head,Elemtype t,Elemtype s){
	LNode *pre=head;//p是工作指针，pre是其前驱
	LNode *p=head->next;
	while(p!=NULL)
	{
		if(p->data<t&&p->data>s)//寻找到被删除结点，删除
		{
			pre->next=p->next;
			free(p);
			p=pre->next;
		}else{//否则继续寻找被删除结点
			pre=p;
			p=p->next;
		}
	}
}

//具体代码
nclude<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *Linklist;

Linklist CreatLNode(LNode*);
void Delts(LNode*, ElemType, ElemType);
void Print(LNode*);

int main(int argc,char* argv[])
{
    LNode *head;
    head=(LNode*)malloc(sizeof(LNode));
    head->next=NULL;

    head=CreatLNode(head);
    Print(head);

    ElemType t=7;
    ElemType s=3;
    Delts(head, t, s);
    Print(head);

    return 0;
}
//头插法创建单链表
Linklist CreatLNode(LNode* head)
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
//查找并删除指定区间结点
void Delts(LNode* head, ElemType t, ElemType s)
{
    LNode *pre=head;
    LNode *p=head->next;
    while(p){
        if(p->data>s&&p->data<t){
            pre->next=p->next;
            free(p);
            p=pre->next;
        }else{
            pre=p;
            p=p->next;
        }
    }
}
//打印所有结点
void Print(LNode *head)
{
    LNode *p=head->next;
    while(p){
        printf("%4d",p->data);
        p=p->next;
   }
    printf("\n");
}
