//试编写在带头结点的单链表L中删除一个最小值结点的高效算法（假设最小值结点是唯一的）
//算法思想：用P指针从头到尾扫描单链表，pre指向*p的结点的前驱，用minp保存最小值结点指针(初值为P),minpre指向*minp结点的前驱(初值为pre)。一边扫描，一边比较，若p->data小于minp->data,则将p.pre分别赋值给minp,minpre,当p扫描完毕，minp指向最小值结点，minpre指向最小值结点的前驱，再将minp所指的结点删除即可。
//在链表中删除最小值结点的前提必须是找到最小值元素是哪个结点，设置指针p对所有结点进行遍历，在只有指针min和p的条件下删除是极为不方便的，若单纯的删除p指向的结点会造成断链，若采用删除自身结点的方法则会造成多次赋值操作，因此直接引入两个分别指向其前驱结点的指针pre和premin,删除操作更加方便
/*void Del_Min(LNode *head){
	LNode *pre=head,*p=head->next;
	LNode *minpre=pre,*minp=p;
	while(p!=NULL){
		if(p->data<pre->data)//找到比之前找到的最小值结点更小的结点
		{
			pre=p;
			minpre=minp;
		}
		pre=p;//继续扫描下一个结点
		p=->next;
	}
	minpre->next=minp->next;//删除最小值结点
	free(minp);
}
*/

//具体代码
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

LinkList CreatList(LNode*);
void DelMin(LNode*);
void Print(LNode*);


int main(int argc, char* argv[])
{
    LNode *head;
    head=(LNode*)malloc(sizeof(LNode));
    head->next=NULL;

    head=CreatList(head);
    Print(head);
    DelMin(head);
    Print(head);

    return 0;
}
//头插法创建单链表
LinkList CreatList(LNode *head)
{
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
//查找并删除最小值结点
void DelMin(LNode *head)
{
    LNode *pre=head,*p=head->next;
    LNode *premin=pre,*min=p;
    while(p){
        if(min->data>p->data){
            premin=pre;
            min=p;
        }
        pre=p;
        p=p->next;
    }
    printf("Deleted Node: %4d\n",min->data);
    premin->next=min->next;
    free(min);
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
//有一个带头结点的循环单链表，设计一个算法反复找出单链表中的最小值，并输出，然后将该结点删除，直到单链表为空为止
//循环单链表为空的条件是p->next=p,即指向自身时为空
//先循环遍历每次找出最小值结点
void Search_Min(LNode *head){
	LNode *pre=head;//p为工作指针,pre为当前结点的前驱结点
	LNode *p=head->next;
	LNode *minpre=head;//用minp记录最小值结点
	LNode *minp=head->next;//指向minp的前驱结点	
	while(p!=head){
		if(minp->data<p->data){
			minpre=pre;//若当前的最小值结点小于p结点，则进行交换
			min=p;
		}
		pre=p;//若未找到则继续向后查找
		p=p->next;
	}
	printf("%4d",min->data);
	return premin;
}


//删除最小值结点
void Del_Min(LNode *head){
	LNode *p=pre->next;
	pre->next=p->next;
	free(p);		
}

//进行循环调用删除函数,直至为空
while(head->next!=head){
	Pre=Search_Min(head);
	Del_Min(pre);
}

//具体代码
#include <stdio.h>
#include <stdlib.h>

typedef int Elemtype;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreatList(LNode *);
LinkList FindMin(LNode*);
void DelMin(LNode*);
void Print(LNode*);

int main(int argc,char *argv[]){
	LNode *head;
	head=(LNode*)malloc(sizeof(LNode));
	head->next=head;
	head=CreatList(head);
	Print(head);
	LNode *pre=head;
	while(head->next!=head){
		pre=FindMin(head);
		DelMin(pre);
	}
	Print(head);
	free(head);
	return 0;
}

LinkList CreatList(LNode* head){
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

LinkList FindMin(LNode *head){
	LNode *pre=head;
	LNode *p=head->next;
	LNode *premin=head;
	LNode *min-head->next;
	while(p!=head){
		if(min->data>p->data){
			premin=pre;
			min=p;
		}
		pre=p;
		p=p->next;
	}
	printf("%4d",min->data);
	return premin;
}

void DelMin(LNode *pre){
	LNode *p=pre->next;
	pre->next=p->next;
	free(p);
}

void Print(LNode *head){
	LNode *p=head->next;
	while(head!=p){
		printf("%4d",p->data);
		p=p->data;
	}
	printf("\n");
}
