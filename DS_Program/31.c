//有两个循环单链表，链表头指针分别为h1和h2，编写一个函数将链表h2连接到链表h1之后，要求链接后的链表仍然保持循环链表的形式
//算法思想：因为这是两个循环单链表，仅仅只是考虑将它们连接起来形成新的循环单链表即可.那么我们首先找到第一个循环单链表h1的尾结点，然后让其next域指向另一个循环单链表h2的第一具有数据域的结点（即头节点的next域所指的那个结点），此时便可以释放掉循环单链表h2的头节点；最后在找到循环单链表h2的尾结点，使其next域重新指向循环单链表h1的头节点便可。如此以来便将两个循环单链表连接在一起，形成了一个循环单链表。

//寻找循环单链表的最后一个节点 
LNode *Findrear(LNode *head){
	LNode *p=head->next;
	while(p->next!=head){
		p=p->next;
	}
	return p;
}
//链接两个循环单链表
LinkList Connect(LNode *head1,LNode *head2){
	LNode *r1=Findrear(head1);
	LNode *r2=Findrear(head2);		
	LNode *p=head2;
	
	r1->next=p;
	free(head2);
	r2->next=head1;

	return head1;
}
