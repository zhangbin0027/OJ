//设单链表中仅有三类字符的数据元素(大写字母、数字和其他符),要求利用原单链表中的结点空间设计出三个单链表的算法，使每个单链表中仅包含同类字符
typedef char ElemTypedata;
typedef struct LNode{
	ElemType data;
	struct Node *next;
}LinkList,LNode;

void LinkList(LNode *head1,LNode *head2,LNode *head3){
	LNode *p=head;
	LNode *head1,*head2,*head3=0;
	
	while(p){
		if(p->data>='A'&&p->data<='Z'){
			p->next=head1;
			head1=p;
		}else if(p->data>='0'&&p->data<='9'){
				p->next=head2;
				head2=p;
		}else{
			p->next=head1;
			p=head3;
		}
	}
}
