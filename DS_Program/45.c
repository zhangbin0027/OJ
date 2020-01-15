//二叉搜索树
#include <stdio.h>
#include <stdlib.h>

typedef sturct BTNode{
	ElemType data;
	struct  BTNode *lchild;
	struct  BTNode *rchild;
}BTNode,*BiTree;

//二叉搜索树的查找
int BST_Search(BiTNode *T,ElemType key){
	BiTNode *p;
	if(!p=Tree||p->data=key){
		return pTree;
	}else{
		return BSt_Search(pTree->lchild,key);
	}else{
		return BST_Search(pTree->rchild,key);
	}
}
//二叉搜索树的插入
bool BST_insert(BiTNode *T,ElemType key){
	BiTNode *p;
	if(!search_BST(pTree,key,NULL,p)){//查找失败，进行插入操作
		BST_Node=(BiTNode*)malloc(sizeof(BiTNode));
		pNew->data=key;
		pNew->lchild=pNew->rchild=NULL;
		if(p==NULL){
			return 0;
		}else if(key<p->data){
			p->lchild=pNew;
		}else if(key>p->data){	
			p->rchild=pNew;
		}
		return ture;
	}else{
		return false;
	}
}
//从长度为len的数组中构建一棵二叉排序树
BSTree Creat_BSTree(*arr,len){
	BSTree pTree==NULL;
	int i;//按顺序逐个插入到结点中
	for(i=0,i<n,,i++){
		insert(pTree,arr[i]);
	return pTree;
	}
}
