/*设计一个递归算法，删除不带头节点的单链表L中所有值为x的结点
指针p指向要删除的结点，指针q指向要删除结点的后继结点
递归出口
if(p==NULL){
	return;
}
递归主体
if(p->data=x){
	p->data=q->data;
	p->next=q->q->next;
	free(q);
	DelNodeX(p,x);
}else{
	DelNodeX(p->next,x);
}
本题中不带头节点，当删除时必须从第一个结点开始删除，但当最后一个结点的值为x时要区别对待,此时q为空，如果继续执行p->data=q->data则会出错,只需将指针直接赋值为NULL即可
[注]:1.删除后继结点，在将单链表的的第i个结点删除时，先检查删除位置的合法性，然后再从头置为遍历单链表，找到第i-1个结点即前驱结点为p，然后将p->next=q->next;free(q),完成删除
void Del_X(LNode *head,int i)
{
	LNode *p=head;
	LNode *q=head->next;
	while(i)
	{
		p=q;
		q=q->next;
		i--;
	}
	p->next=q->next;
	free(q);

	2.删除自身结点，采用插入前驱结点项类似的方法，将指针p所指向结点的数据域与指针q所指向结点的数据域进行一次交换p->data=q->data,这样就又变成了删除指针q所指向的结点的操作
void Del_X(LNode *head,int i)
{
	LNode *p=head;
	LNode *q=head->next;
	while(i)
	{
		p=q;
		q=q->next;
		i--;
	}
	p->data=q->data;
	p->next=q->next;
	free(q);
}
*/
void Del_X(LNode *p,Elemtype x)
{
	if(p==NULL)
	{
		return;	
	}
	LNode *q=p->next;
	if(p->data=x){
		if(q!=NULL){
			p->data=q->data;
			p->next=q->next;
		}else{
			p=NULL;
		}
		free(q);
		Del_X(p,x);
		}else{
		Del_X(p->next,x);		
	}
}


