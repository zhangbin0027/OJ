//已知一个带有表头结构的单链表，结点结构为
//假设该链表只给出了头指针list,在不改变链表的前提下，查找链表中倒数第k个位置上的结点（K为正整数）。若查找成功，算法输出该结点的data值，并返回1；否则只返回0
//算法的基本设计思想为：利用快慢指针法，通过链表的一趟遍历，找到倒数第k个结点的位置。定义两个指针变量p,q,初始时均指向头结点的下一个结点，p指针沿链表移动；当p指针移动到第k个结点时，q指针开始与p指针同步移动;当p指针移动到最后一个结点时，q指针所指的结点为倒数第k个结点
typedef int Elemtype;//链表数据的类型定义
typedef struct LNode//链表结点的结构定义
{
	Elemtype data;//结点数据
	struct LNode *link;//结点链接指针
}LNode,*LinkList;

int search_k(LinkList list,int k)
//查找链表list倒数第k个结点，并输出该结点data域的值
{
	LNode *p=list->link,*q=list->link;//指针p，q指示第一个结点
	int count=0;
	while(p!=NULL)
	{
		if(count<k) count++;
		else q=q->link;
		p=p->link;
	}//while
	if(count<k)
		return 0;
	else{
		printf("%d",q->data);
		return 1;
	}
}
