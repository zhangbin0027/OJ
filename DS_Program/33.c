//设头指针为L的带有头节点的非循环双链表，其中每个节点除了具有前驱指针，后继指针，和数据域外，还有一个访问频率域为freq。在链表启用前，其值均初始化为0.每当在链表中Locate(L,x)运算时，令元素值为x的结点中freq域的值增加1.并使此链表中结点保持按访问频度递减的顺序排列，使频繁访问的节点靠近表头
void Locate(DNode *head,ElemType x){
//先查找数据x，查找成功时结点的访问频度加1
//最后将该结点按频度递减插入链表中的合适位置(同频度最近访问的在前面)
	DNode *pre=head;//pre为p的前驱，用于查找插入位置
	DNode *p=head->next;//p为工作指针 
	
	while(p&&q->data!=x){//查找值为x的结点
		p=p->next;
	}
	if(!=p){
		printf("The %d is not exist!\n",&x);
		return;
	}else{
		p->freq++;//令元素值为x节点的freq+1
		p->next->piror=p->piror;
		p->piror->next=p->next;//将p结点从链表中摘下 
		pre=p->piror;
	}
	while(pre&&pre->freq<p->freq){
		pre=pre->piror;
	}
		p->next=pre->next;
		pre->next->piror=p;
		p->piror=pre;
	}
}
