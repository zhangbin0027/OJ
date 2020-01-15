//实现两个链表A与B的合并 
LinkList Union(LNode *head1,*head2){
	LNode *prep=head1;//prep指针指向头节点
	LNode *p=head1->next;//p节点指向A链表的头节点的下一个结点
	LNode *q=head2->next;//q结点指向B链表的头节点的下一个结点
	while(p&&q){//如果p和q不空
		if(p->data==q->data){//p的数据和q的数据相等
			prep=p;
			p=p->next;
			q->q->next;
		}else if(p->data<q->data){//p的数据小于q的数据
			prep->next=p->next;
			free(p);
			p=prep->next;
		}else{
			q->q->next;
		}
		while(p){//若单链表B中还有剩余
			prep->next=p->next;
			free(p);
			p=prep->next;
		}
	}
	return head;
}
