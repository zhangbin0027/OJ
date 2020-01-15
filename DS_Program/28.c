//两个整数序列A,B已经存放于两个单链表中，设计一个算法，判断序列B是否是序列A的连续子序列。
//算法思想：操作从两个链表的第一个结点开始，若对应的数据相等，则后移指针，若对应的数据不相等，则A结点从上次开始比较结点的后继节点开始，B链表仍然从第一个结点开始比较，直到B链表到尾表示匹配成功。A链表到尾而B链表未到尾表示失败。
void FindLinkList(LNode *head1,LNode *head2){
	int LNode *pre=head1;//保存每次比较中的A链表中的开始结点
	int LNode *p=head1->next;//p指针为A链表中的工作指针
	int LNode *q=head2;//q指针是B链表中的工作指针
	
	while(p&&q){
		if(p->data=q->data){//若结点值相同
			p=p->next;
			q=q->next;
		}else{
			pre=pre->next;
			p=pre;//A链表新的开始比较结点
			q=head2->next;//q从B链表中的第一个节点开始比较
		}
	}
	if(q==NULL){//B已经比较结束
		return 0;//说明B是A的子序列
	}
	return -1;//成功返回0，失败返回-1
}
