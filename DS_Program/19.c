//统计二叉树中度为0的结点个数
//非递归方式实现
void CountBiTree(BiTree *T){
	if(T==NULL)
		return 0;
	if(T->lchild==NULL&&p->rchild=NULL){
		return CntlfNode_recoursive(T->lchild)+CntlFNode_recoursive(T->rchild)+1;
	}
	else{
		return CntlfNode_recoursive(T->lchild)+CntlFNode_recoursive(T->rchild);
	}
}

