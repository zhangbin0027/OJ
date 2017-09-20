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
	LNode *p=head->next;
	LNode *premin=head;
	LNode *min=head->next;
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



