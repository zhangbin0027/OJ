//递归调用快速排序
void QuickSort(ElemType A[],int low,int high){
	if(low<high){//递归跳出的条件
		int pivotpos=Partition(A,low,high);//划分满足为上述条件的两个子表
		QuickSort(A,low,pivotpos-1);//依次对两个子表进行递归排序
		QuickSort(A,pivotpos+1,high);
	}
}
//快速排序的算法关键在于划分操作
//假设每次总是以当前表中的第一个元素作为枢轴值对表进行划分,则必须将表中比枢轴值大的元素向右移动，比枢轴值小的元素向左移动，使得一趟操作后，表中的元素被枢轴值一分为二。
void QuickSort(ElemTyped A[],int low,int high){
	ElemType pivort=A[low];//将当前表中的第一个元素设为枢轴值,对表进行划分
	while(low<high){//循环跳出条件
		while(low<high){
			while(low<high&&a[high]>=pivot)
				--high;
				A[low]=A[high];//将比枢轴值小的元素移动到左端
			while(low<high&&A[low]<=pivot)
				++low;
				A[high]=A[low];//将比枢轴值大的元素移动到右端
		}
		A[low]=pivot;//枢轴元素存放到最终位置
		return low;//返回存放枢轴的最终位置
	}
}
