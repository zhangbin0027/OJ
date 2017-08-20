//双链表的定义
typedef struct DNode{
	ElemType data;
	struct LNode *piror,*next;
}DNode,*DLinkList;

//头插法建立双链表
DLinklist Creatlist(DNode *head){
	DNode *s;
	ElemType x;
	scanf("%d",&x);
	while(x!=999){
		s=(DNode*)malloc(sizeof(DNode));
		s->data=x;
		s->next=head->next;
		if(head->next){
			head->next->piror=s;
		}
		s->piror=head;
		head->next=s;
		scanf("%d",&x);
	}
	return head;
}
//尾插法建立双链表
DLinklist Creatlist(DNode *head){
	DNode *s;
	DNode *r;
	ElemType x;
	scanf("%d",&x);
	while(x!=999){
		s=(DNode*)malloc(sizeof(DNode));
		s->next=NULL;
		s->data=x;

		r->next=s;
		s->piror=r;
		r=s;
		scanf("%d",&x);			
	}
	r->next=NULL;
	return head;	
}
//插入后继结点
void InsertDNode(DNode *p,ElemType x){
	DNode *s;
	s=(DNode*)malloc(sizeof(DNode));
	s->next=p->next;
	p->next->piror=s;
	s->piror=p;
	p->next=s;
}
//插入前驱结点
void InsertDNode(DNode *p,ElemType x){
	DNode *s;
	s=(DNode*)malloc(sizeof(DNode));
	s->next=p;
	p->piror->next=p;
	s->piror=p->piror;
	p->piror=s;
}
//删除双链表中结点*p的后继结点*q
void DelList(DNode *p){
	DNode *q=p->next;
	p->next=q->next;
	q->next->piror=p;
	free(q);
}
