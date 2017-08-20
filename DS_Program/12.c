//设一个带表头结点的单链表中所有元素结点的数据值无序，试编写一个函数，删除表中所有其值在给定值s与t之间（包含s和t，要求s<t）的所有结点
//算法思想：因为链表逻辑上无序，删除指定区间结点的前提是找到这些指定区间结点。因此从头节点开始对整个链表进行一次遍历，若找到满足题意的结点，删除即可。
void RangeDel(LNode *head,Elemtype t,Elemtype s){
	LNode *pre=head;//p是工作指针，pre是其前驱
	LNode *p=head->next;
	while(p!=NULL)
	{
		if(p->data<t&&p->data>s)//寻找到被删除结点，删除
		{
			pre->next=p->next;
			free(p);
			p=pre->next;
		}else{//否则继续寻找被删除结点
			pre=p;
			p=p->next;
		}
	}
}
