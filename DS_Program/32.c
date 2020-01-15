//设有一个带头结点的循环单链表，其结点值均为正整数。设计一个算法，反复找出单链表中结点值的最小的结点并输出，然后将该结点从中删除，直到单链表空为止，最后删除头结点
//算法思想：本题可以借鉴删除最小值结点 的算法来实现，但是也应该注意到本题时循环单链表，因此判断是否已经为空表的方法是head->next==head也就是头节点的next域已经指向自身结点。

//循环调用，直至为空
while(head->next!=head){
	pre=FindMin(head);
	DelMin(pre);
}
//找到最小值结点,并打印该结点
LinkList(LNode *head){
	LNode *prep=head;
		
}


int Search(LNode *head,ElemType data){
	int LNode *pre=head;
	int LNode *p=head->next;
	int min=0;
	while(p){
		min=p->data;
		if(p->next->data<p->data){
			min=p->next;
			p=p->next;
		}
		return min;
	}
}
int DeleteMin(LNode *head,int min){
	int LNdoe *p=min;
	int LNode *pre=p->piror;
	while(p){
		pre->next=p->next;
		p=p->next;
		free(p);
	}
	Search(min);
	return head;
}
