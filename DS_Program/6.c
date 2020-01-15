//线性表(a1,a2,a3,...,an)中元素递增有序且按顺序存储,要求设计一算法要求用最少的时间在表中查找数值为x的元素，若找到则将其与后继元素的位置交换，若找不到则将其插入表中，并使表中元素仍然递增有序
void Search_Exchange_Insert(ElemType A[],ElemType x){
	int low=0;high=n-1,mid;//low和high指示顺序表的上界和下届的下标
	while(low<=high){
		mid=(low+high)/2;//找到中间位置
		if(A[mid]==x) break;//找到x的位置退出循环 
		else if(A[mid]<x low=mid+1);//到中点的右半部进行查找
		else high=mid-1;//到中点的左半部查找
	}
	if(A[mid]==x&&mid!=n-1){//若最后一个元素的值与x相等，则不存在与其后继进行操作的交换
		t=A[mid];
		A[mid]=A[mid+1];
		A[mid+1]=t;	
	}
	if(low>high){//查找失败,插入数据元素x
		for(i=n-1;i>high;i--)//后移元素
		A[i+1]=x;//插入x
	}		
}
