//二叉树的带权路径长度（WPL）是二叉树中所有叶结点的带权路径长度之和，给定一棵二叉树T，采用二叉链表存储，节点结构为left weight right;
//其中叶节点的weight域保存该结点的非负权值。设root为指向T的根节点的指针，设计求T的WPL的算法。
//算法思想：可以利用广度优先搜索和深度优先搜索两种算法来实现，其值广度优先搜索较为容易，即先序遍历，先判断当前结点是否为叶子结点，当符合时，结点值乘以深度即为当前结点的权值，若左右子树都存在，递归的返回，二叉树的权值即为左右子树上的各节点的权值之和
//先序遍历求带权路径长度之和的算法
typedef struct BiTNode{//用二叉链表存储二叉树
	int weight;
	struct BiTNode *lchild,*rchild;
}BiTNode;

int main(){//
	Wpl(root,0);//初始化深度d递归调用wpl函数
	return Wpl;	
}

void Wpl(BiTNode *root,int d){//二叉树的带权路径长度等于每个叶结点的深度与权值之积的综合
	if(root->lchild==NULL&&root->rchild==NULL){
		return Wpl=(root->weight)*d;//若为叶子结点，wpl加上该结点的权值与深度之积
	}else{//若为非叶子结点，若左子树不空，则递归调用左子树的wpl，右子树不空，递归调用，求总和
		return (Wpl(root->lchild,d+1)+Wpl(root->rchild,d+1));
	}
}
//采用层次遍历求带权路径长度的算法
//算法思想，采用层次遍历的算法，借助一个辅助队列，设置一个level来记录深度，last指针指向最后一个结点，每下降一层深度就加一，当遍历到叶结点时wpl累加，当遍历到非叶结点时，将其左右子树加入到队列当中，队列空时遍历结束
#define MaxSize[100]
int wpl_levelOrder(root,0);

typedef struct BiTNode{
	int weight;
	struct BiTNode *lchild,*rchild;
}BiTNode;

void LevelWeight(BiTNode *root,int d){
	SqQueue Q;
	InitQueue(&Q);
	
	BiTNode *p=T;
	EnQueue(&Q,p);
	while(p||isEmpty!=NULL){
			
	}
}
