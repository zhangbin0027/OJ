//在二叉树中查找值为x的节点，试编写算法打印值为x的节点的所有祖先节点，假设值为x的节点不多于一个
//算法思想:因为仅仅只是打印祖先节点，可以考虑使用非递归后序遍历的方式来实现。在非递归后序遍历的方式中，保留在栈中的所有元素（除栈顶外）必然是栈顶的祖先节点，因此只要找到x节点，然后将栈中所有节点出栈便可。
void AncestorX(BiTNode *T,ElemType x){
	SqStack S;
	InitStack(&S);
	
	BiTNode *p=T;
	BiTNode *r=NULL;
	
	while(p||IsEmptyStack(&S)){
		if(p!=NULL){
			Push(&S,p);
			p=p->lchild;
		}eles{
			p=GetTop(&S);
			if(p->rchild!=NULL&&p->rchild!=r){
				p=p->rchild;
				Push(&S,p);
				p=p->lchild;
			}else{
				p=Pop(&S);
				if(p->data==x){
					while(IsEmpty(&S)!=0){
						p=Pop(&S);
						printf("%c",p->data);
					}
				}
				r=p;
				p=NULL;
			}
		}
	}
}

void AncestorBiTree(BiTNode *T){
	SqStack S;
	InitSqStack(S);
	
	BiTNode *p=T;
	BiTNode *r=NULL;
	
	while(p||IsEmptyStack(&S)){
		if(p!=NULL){
			Push(&S,p);
			p=p->lchild;
		}else{
			p=GetTop(&S);
			if(p->rchild!=NULL||rchild!=r){
				p=p->rchild;
				Push(&S,p);
				p=p->lchild;
			}else{
				p=Pop(&S,p);
				if(p->data=x){
					while(IsEmptyStack!=0){
						p=Pop(&S);
						printf("%c",p->data);
					}
				}
				r=p;
				p=NULL;
			}
		}
	}
