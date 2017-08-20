//已知在一维数组A[m+n]中依次存放着两个线性表，编写一个函数，将数组中两个顺序表的位置交换
typedef int DataType;
void Reverse(DataType A[],int left,int right,int arraySize){
	if(left>=right||right>=arraySize)
		return;
	int mid=(left+right)/2;
	for(int i=0;i<=mid-left;i++){
		Datatype temp=A[left+i];
		A[left+i]=A[right+i];
		A[right-i]=temp;
	}
}

void Exchange(DataType A[],int m,int n,int arraySize){
//数组A[m+n]中，从0到m-1存放顺序表(a1,a2,a3,...am),从m到m+n-1存放顺序表(b1,b2,b3,...,bn),算法将这两个表的位置互换
	Reverse(A,0,arraySize);
	Reverse(A,0,n-1,arraySize);
	Reverse(A,n,m+n-1,arraySize);
}
