//判断单链表的前n个字符是否是中心对称
//将单链表的前一半元素依次入栈,遍历到单链表的后一半的最后一个元素时，便从栈中弹出一个元素,对他们俩进行比较，若相等，则将链表中的下一个元素继续进行比较，直至单链表到末尾，此时如果栈为空栈，则此单链表是中心对称。若不相等，则不是中心对称
/*
#define MaxSize[];
typedef struct SqStack{//借助栈作为辅助空间
	int ElemType data;
	int top=-1;
}SqStack;
void JudgeLinkList(LNode *head){
	int LNode *p=head->next;//带头结点的单链表的工作指针

	InitSqStack(&S);

	while(s.top==MaxSize-1){
		if(p=0;<=n/2;p++){//将前一半元素依次入栈
			Push(S,p);
			p=p->next;
		}else if(p->next!=NULL){//工作指针遍历到后半部分的表尾
			p=p->next;
		}else(isEmptyStack!=0){
			Pop(S,p);
			x=s.top--;
		}
		if(p==NULL){
			return 1;
		}else{
			return 0;
		}
		
		while(p){
			case 1:x->data=p->data;break;
				printf("The LinkList is  balance\n");
			case 0:x->data!=p->data;break
				printf("The LinkList is not balance\n");
			}
	}
}
*/

#include<stdio.h>
#include<stdlib.h>
typedef char ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

LinkList CreatList(LNode*);
int JudgeSym(LNode*,int);
void Print(LNode*);

int main(int argc,char* argv[])
{
    LNode *head;
    head=(LNode*)malloc(sizeof(LNode));
    head=CreatList(head);
    Print(head);

    int flag;
	int n=5;
    flag=JudgeSym(head,n);
    if(flag){
        printf("The link is not symmetery before %d charactor!\n",n);
    }else{
        printf("The link is symmetery before %d charachtor!\n",n);
    }
    return 0;
}
//尾插法建立单链表
LinkList CreatList(LNode* head)
{
    LNode *L;
    LNode *r=head;
    ElemType x;
    scanf("%c",&x);
    while(x!='\n'){
        L=(LNode*)malloc(sizeof(LNode));
        L->data=x;
        r->next=L;
        r=L;
        scanf("%c",&x);
    }
    return head;
}
//判断中心对称
int JudgeSym(LNode* head,int n)
{
    LNode *p=head->next;
    char s[n/2];
    int i;
    for(i=0;i<n/2;i++){
        s[i]=p->data;
        p=p->next;
    }
    i--;
	if(n%2){
        p=p->next;  
    }
    while(p&&p->data==s[i]){
        p=p->next;
        i--;
    }
    if(i==-1){
        return 0;
    }else{
        return -1;
    }
}
//打印全部结点
void Print(LNode *head)
{
    LNode *p=head->next;
    while(p){
        printf("%4c",p->data);
        p=p->next;
    }
    printf("\n");
}
