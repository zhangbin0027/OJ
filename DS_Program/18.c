//二叉树的非递归遍历
//先序遍历
void PreOrder(BiTNode *T){
	SqStack S;
	InitStack(&S);

	BiTNode *p=T;
	Push(&S,p);
	while(IsEmptyStack(&S)!=0){
		p=Pop(&S);
		printf("%c",p->data);
		if(p->rchild!=NULL){
			Push(&S,p->rchild);
		}
		if(P->lchild!=NULL){
			Push(&S,p->lchild);
		}
	}
}
//中序遍历
void InOrder(BiTNode *T){
	SqStack S;
	InitStack(&S);
	
	BiTNode *p=T;
	while(p||IsEmpty(&S)!=0){
		if(p!=NULL){
			Push(&S,p)
			p=p->lchild;
		}else{
			p=Pop(&S);
			printf("%c",p->data);
			p=p->rchild;
		}	
	}
}
//后序遍历
void PostOrder(BiTNode *T){
	SqStack S;
	InitStack(&S);
	
	BiTNode *p=T;
	BiTNode *r=NULL;
	
	while(p||IsemptyStack(&S)!=0){
		if(p!=NULL){
		Push(&S,p);
		p=p->lchild;
		}else{
		p=GetTop(&S);
		if(p->rchild!=NULL&&rchild!=r){
			p=p->rchild;
			Push(&S,p);
			p=p->lchild;
		}else{
			p=Pop(&S);
			printf("%c",p->data);
			r=p;
			p=NULL;
		}
	}
}
//层次遍历的非递归算法
void LevelOrder(BiTNode *T){
	SqQueue Q;
	InitQueue(&Q);

	BiTNode *p=T;
	EnQueue(&Q,p);
	
	while(isEmptyQueue(&Q)!=0){
		p=DeQueue(&Q);
		printf("%c",p->data);
		if(p->lchild!=NULL){
			EnQueue(&Q,p->lchild);
		}
		if(p->rchild!=NULL){
			EnQueue(&Q,p->rchild);
		}
	}	
}

void InitQueue(SqQueue *Q){
	Q->fron=0;
	Q->rear=0;
}

void EnQueue(SqQueue *Q,BiTNode *T){
	if((Q->rear+1)%MaxSize==Q->front){
		return;
	}
	Q->data[Q.rear++]=T;
}

BiTNode DeQueue(SqQueue *Q){
	if(Q->front==Q->rear){
		return NULL;
	}
	return Q->data[Q->front++];
}

int IsEmptyQueue(SqQueue* Q){
	if(Q->front==Q->rear){
		return 0;
	}
	return -1;
}
