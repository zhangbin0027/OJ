//
//  main.cpp
//  TestProject
//
//  Created by 牛严 on 2017/3/9.
//  Copyright © 2017年 牛严. All rights reserved.
//

#include <iostream>
using namespace std;

typedef struct TBTNode
{
    char data;
    int ltag,rtag;
    struct TBTNode *lchild;
    struct TBTNode *rchild;
}TBTNode;

//先序创建二叉树
void createBT(TBTNode *&p)
{
    char c ;;
//    cin >> c;
    scanf("%c",&c);
    
    if (' ' == c) {
        p = NULL;
    }else {
        p = (TBTNode *)malloc(sizeof(TBTNode));
        p->data = c;
        p->ltag = 0;
        p->rtag = 0;
        
        createBT(p->lchild);
        createBT(p->rchild);
    }
    
}

//-------------------前序数组转后序数组------------------
void preOderToPostOrder(char A[],int begin, int n)
{
    if (n > 2) {
        //先将数组段第一个元素放到最后
        char temp = A[begin];
        for (int i = begin ; i < begin+n-1; ++i) {
            A[i] = A[i+1];
        }
        A[begin+n-1] = temp;
        //然后分别将数组段中前(n-1)/2个元素和后面的(n-1)/2个元素进行同样操作
        n = (n-1)/2;
        cout<<A<<endl;
        cout<<begin<<"到"<<begin+n-1<<endl;
        preOderToPostOrder(A, begin, n);
        preOderToPostOrder(A, begin+n, n);
    }
}

void testPreToPost()
{
    char A[15] = {'A','B','D','H','I','E','J','K','C','F','L','M','G','N','O'};
    preOderToPostOrder(A, 0, 15);
    cout<<A<<endl;
}

//-------------------------打印根结点到叶子结点的路径-----------------------

int top = 0;
char pathStack[100];

void leavesPath(TBTNode *p)
{
    if (p != NULL) {
        
        //-------------------操作当前结点-----------------
        //入栈
        pathStack[top++] = p->data;
        if (p->rchild == NULL && p->lchild == NULL) {
            //打印栈
            for (int i = 0; i < top; ++i) {
                cout<<pathStack[i];
            }
            cout<<endl;
        }
        //-------------------操作当前结点-----------------
        
        leavesPath(p->lchild);
        leavesPath(p->rchild);
        --top;
    }
}

void testLeavesPath()
{
    TBTNode *p = (TBTNode *)malloc(sizeof(TBTNode));
    createBT(p);
    leavesPath(p);
}

//---------------------非递归中序遍历测试-------------------
void inOrder(TBTNode *root)
{
    TBTNode *stack[100];
    int top = -1;
    
    TBTNode *p = root;
    if (root != NULL) {
        //1.结点入栈时将左孩子（及其左孩子）入栈
        //2.当到叶子的时候开始出栈，出了后将右孩子入栈
        //3.重复以上步骤
        while (top != -1 || p != NULL) {
            //入左子树的左子树的左子树直到叶子结点
            while (p != NULL) {
                stack[++top] = p;
                p = p->lchild;
            }
            //出栈，p指向其右孩子，进行循环左子树入栈操作
            if (top != -1) {
                p = stack[top--];
                cout<<p->data<<endl;
                p = p->rchild;
            }
        }
    }
}

int com(int a, int b)
{
    if (a > b) {
        return 1;
    }else{
        return 0;
    }
}

float summary(float A[], int i, int j)
{
    if (i == j) {
        return A[i];
    }else {
        return A[i] + summary(A, i+1, j);
    }
}

//------------------------测试程序入口--------------------
int main(int argc, const char * argv[]) {

    TBTNode *p = (TBTNode *)malloc(sizeof(TBTNode));
    createBT(p);
    leavesPath(p);
    return 0;
}
