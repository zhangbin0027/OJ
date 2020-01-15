void MergeSortDC(SeqList R,int low,int high){
	//基于分治法
	int mid;
	if(low<high){//区间长度大于1
		mid=(low+high)/2;//分解
		MergeSortDC(R,low,mid);//递归的对low，mid,high进行排序
		MergeSortDC(R,mid+1,high);//递归的对右半部分进行排序
		MergeSortDC(R,low,mid);//递归的对左半部分排序
		MergeSortDC(R,low,mid,high);//进行组合,将两个有序区归并为一个有序区
	}
	return 0;
}
//归并排序算法是稳定的排序算法，空间复杂度为O（n），时间复杂度为对数阶，O(nLog2n)；
//需要一个辅助空间来存放排序好的数据，显然不是就地进行排序，如过采用链表进行存储，则可以完成就地排序
//分治法的三个步骤:分解(将当前区间一分为二)，求解（递归的对两个子区间进行排序），组合（将两个已排好序的子表归并为一个有序的区间）
//递归的终结条件是子序列长度为1，即一个元素有序
//
