//编写算法将带头结点的单链表就地逆置，所谓就地就是指辅助空间复杂度为O(1)
//算法思想：头插法建立单链表

LinkList Reverse_1(LNode *head){
	LNode *p,*r;//p为工作指针，r为p的后继，防止断链
	p=L->next;//从第一个元素结点开始
	L->next=NULL;//先将头节点的next域置为空
	while(p!=NULL){//依次将元素结点摘下
		r=p->next;//暂存p的后继
		p->next=L->next;
		L->next=p;
		p=r;
	}
}
