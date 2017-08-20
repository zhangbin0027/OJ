//写出折半查找的算法
//对于有序表，查找时先取表中间位置的记录关键字和所给关键字进行比较，若相等，则查找成功；若给定值比关键字值大，则在后半部分继续进行折半查找；否则在前半部分进行折半查找，直到找到查找范围为空而查不到为止
//折半查找的过程实际上是先确定待查找元素的区域，然后逐步缩小区域，知道查找成功或失败为止
int Binary_Search(SeqList L,Elemtype key)
{
	int low=0;high=L.Len-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(L.elem[mid]==key)
			return mid;
		else if(L.elem[mid]>key)
			high=mid-1;
		else
			low=mid+1;
	}	
	
}
