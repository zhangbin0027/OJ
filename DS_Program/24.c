//设一棵二叉树的结点结构为（LLink,INFO,RLINK）,ROOT为指向该二叉树的根节点的指针,p和q分别为指向该二叉树中任意两个结点的指针，编写算法Ancestor,该算法找到p和q的最近公共祖先结点r
//算法思想：设p在q的左边,采用后序非递归的算法，栈中存放二叉树结点的指针，当访问到某结点的时，栈中所有元素均为该结点的祖先。后序遍历必然先遍历到结点p，栈中元素均为p的祖先。先将栈复制到另一辅助栈中。继续遍历到结点q时，将栈中元素从栈顶开始逐个到辅助栈中去匹配，第一个相等的元素就是结点p和q的最近公共祖先结点

void PostOrder(BiTNode *T){
	BiTNode *p=T;
	BiTNode *r=NULL;	
	
	SqStack S;
	IniTStack(&S);
	SqStack S1;
	InitStack(&S1);
	SqStack S2;
	InitStack(&S2);
	
	int flag=1;
	
	while(IsEmptyStack(&S)!=0||p!=NULL){
		if(p){
			Push(&S,p);
			p=p->lchild;
		}else{
			p=GetTop(&S);
			
			if(p->data=='E'){
				for(int i=0;i<=S.top;i++){
					S1.data[i]=S.data[i];
					S1.top=S.top;
				}
			}
			if(p->rchild!=NULL&&p->rchild!=r){
				p=p->rchild;
				Push(&S,p);
				p=p->lchild;
			}else{
				p=Pop(&S);
				if(IsEmptyStack(&S1)!=0&&IsEmptyStack(&S2)!=0){
					for(int i=S1.top;i>=1&&flag;i--){
						for(int j=S2.top;j>-1;j--){
							if(S1.data[i]==S2.data[j]){
								printf("%c",S1.data[i]->data);
								flag=0;
							}
						}
					}
				}
				r=p;
				p=NULL;	
			}
			
		}
	}
}

//具体代码
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100;

typedef char ElemType;
typedef struct BiTNode{
	ElemType data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

typedef struct{
	BiTNode *data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack*);
void Push(SqStack*,BiTNode*);
BiTNode *Pop(SqStack*);
BiTNode *GetTop(SqStack*);
int IsEmpty(SqStack*);

BiTree CreateBiTree(BiTNode*);
Void PosOrder(BiTNode*);

int main(int argc,char *argv[]){
	BiTNode *T;
	T=(BiTNode*)malloc(sizeof(BiTNode));
	T=CreateBiTree(T);
	PostOrder(T);
	printf("\n");
	return 0;
}

BiTree CreateBiTree(BiTNode* T)
{
    ElemType x;
    scanf("%c",&x);
    if(x=='#'){
        return T=NULL;
    }else{
        T=(BiTNode*)malloc(sizeof(BiTNode));
        T->data=x;
        T->lchild=CreateBiTree(T->lchild);
        T->rchild=CreateBiTree(T->rchild);
    }
    return T;
}

void PostOrder(BiTNode* T)
{
    BiTNode *p=T;
    BiTNode *r=NULL;

    SqStack S;
    InitStack(&S);
    SqStack S1;
    InitStack(&S1);
    SqStack S2;
    InitStack(&S2);

    int flag=1;

    while(IsEmptyStack(&S)!=0||p!=NULL){
        if(p){
            Push(&S,p);
            p=p->lchild;
        }else{
            p=GetTop(&S);

            if(p->data=='E'){
                for(int i=0;i<=S.top;i++){
                    S1.data[i]=S.data[i];
                    S1.top=S.top;
                }
            }
            if(p->data=='G'){
                for(int i=0;i<=S.top;i++){
                    S2.data[i]=S.data[i];
                    S2.top=S.top;
                }
            }

            if(p->rchild!=NULL&&p->rchild!=r){
                p=p->rchild;
                Push(&S,p);
                p=p->lchild;
            }else{
                p=Pop(&S);

                if(IsEmptyStack(&S1)!=0&&IsEmptyStack(&S2)!=0){
                    for(int i=S1.top;i>-1&&flag;i--){
                        for(int j=S2.top;j>-1;j--){
                            if(S1.data[i]==S2.data[j]){
                                printf("%c",S1.data[i]->data);
                                flag=0;
                            }
                        }
                    }
                }

                r=p;
                p=NULL;
            }
        }
    }
}

//---------------------------------------------------------------------

void InitStack(SqStack* S){
    S->top=-1;
}

void Push(SqStack* S,BiTNode* T){
    if(S->top==MaxSize-1){
        return;
    }
    S->data[++S->top]=T;
}

BiTNode* Pop(SqStack* S){
    if(S->top==-1){
        return NULL;
    }
    return S->data[S->top--];
}

BiTNode* GetTop(SqStack* S){
    if(S->top==-1){
        return NULL;
    }
    return S->data[S->top];
}

int IsEmptyStack(SqStack* S){
    if(S->top==-1){
        return 0;
    }else{
        return -1;
    }
}
