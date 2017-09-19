/*试编写一算法，实现将二叉树中所有节点的左右子树进行交换
算法思想：因为需要实现将二叉树中所有节点的左右子树交换，因此最简单的方式便是使用递归的方式。而完成整个树左右子树的交换，可以考虑两种方式，从上向下依次交换，或从下往上依次交换。 
从上向下：假如T为整棵树的根节点，则首先交换T的左右孩子，然后交换T的左孩子（注：此时T的左孩子为原来二叉树中T的右孩子）的左右孩子，依次类推，当T的左子树交换完成后，再接着交换T的右孩子（注：此处同理，T的右孩子为原来二叉树中T的左孩子）的左右孩子，依次类推完成整棵树的左右子树交换。 
从下往上：首先交换整棵树中最左边的两个叶子节点，然后接着交换次左边的两个叶子节点，接着将最左边的两个叶子节点父节点与次左边的两个叶子节点的父节点进行交换，依次类推，直到交换到根节点为止。 
为了保证结果的正确性，利用先序遍历和中序遍历可以唯一确定一个二叉树的特点，同时打印出先序遍历结果和中序遍历结果以保证结果可靠性
*/
//从上到下的交换过程类似于先序遍历的过程
void SwapLRPreTree(BiTNode *T){
	BiTNode *temp;
	if(T==NULL){
		return;
	}
	temp=T->lchild;
	T->lchild=T->rchild;
	T->rchild=temp;
	SwapLRPreTree(T->lchild);
	SwapLRPreTree(T->rchild);
}

//从下往上的交换过程类似于后续遍历的过程
void SwapLRPostTree(BiTNode *T){
	BiTNode *temp;
	if(T==NULL){
		return;
	}
	SwapLRPostTree(T->lchild);
	SwapLRPostTree(T->rchild);
	temp=T->lchild;
	T->lchild=T->rchild;
	T->rchild=Ttemp;		
}


