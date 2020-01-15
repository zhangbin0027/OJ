//设计一个算法用于判断带头结点的循环双链表是否对称
//算法思想：设置两个指针p和q，让p从头节点开始，从前往后遍历；指针q从头节点的prior域指示的尾结点开始，从后往前遍历，直到它们指向同一结点（循环双链表的结点数为奇数）或相邻结点时循环双链表的结点数为偶数为止。在遍历期间，如果两个指针指向的结点的数据域的值一直保持相等，则它们沿着各自的方向继续遍历；如果不想等，则终止遍历。
int Judgesym(DNode *head){
//本算法从两头开始扫描双链表以判断是否对称
	int DNode *p=head->next;
	int DNode *q=head->piror;
	while(p!=q&&q->next!=p){//所指结点的值相同则继续比较
		if(p->data==q->data){
			p=p->next;
			q=q->piror;	
 		}else{
			break;
		}
	}
	if(p==q){
		return 0;
	}else{
		return -1;
	}
}
