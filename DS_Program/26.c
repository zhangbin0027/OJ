//求树的高度
int TreeDepth(Node *t){
	int hl,hr,h;
	if(t!=NULL){
		hl=TreeDepth(t->left);
		hr=TreeDepth(t->right);
		h=hl>hr?hl:hr;
		return h+1;
	}
	return 0;
}

//判断二叉树是否平衡
int isBalanced(Node *t){
	if(t==NULL)
		return 1;
	int leftDepth=TreeDepth(t->left);
	int rightDepth=TreeDepth(t->right);
	if(abs(leftDepth-rightDepth)>1)
		return 0;
	else
		return isBalanced(t->left)&&isBalanced(t->right);
}

//判断二叉树是否相同
int CompTree(Node *tree1,Node *tree2){
	if(tree1==NULL&&tree2==NULL)
		return 1;
	else if(tree1==NULL||tree2==NULL)
		return 0;
	if(tree1>data!=tree2->data)
		return 0;
	if(CompTree(tree1->left,tree2->left)==1&&CompTree(tree1->right,tree2->right)==1)
		return 1;
	//反转二叉树也有可能相同
	if(CompTree(tree1->left,tree2->right)==1&&CompTree(tree1->right,tree2->left)==1)
		return 1;
	return 0;
}

//拷贝二叉树
void CopyTree(Node *s,Node *&d){
	if(s==NULL)
		d=NULL;
	Node *temp=new Node;
	temp->data=s->data;
	if(d==NULL)
		d=temp;
	if(s->left)
		CopyTree(s->left,d->left);
	if(s->right)
		CopyTree(s->right,d->right);	
}


