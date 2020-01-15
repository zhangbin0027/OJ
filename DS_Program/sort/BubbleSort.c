/*比较相邻的元素，如果前一个比后一个大，就把他们两个调换位置
对每一对元素作同样的工作
最差时间复杂度(On^2),最优时间复杂度O(n),平均时间复杂度O(n^2)
所需辅助空间O(1),是稳定的
*/
#include <stdio.h>

void Swap(int A[],int i,int j){
	int temp=A[i];
	A[i]=A[j];
	A[j]=temp;
}
void BubbleSort(int A[],int n){
	for(int j=0;j<n-1;j++){
		for(int i=0;i<n-1-j;i++){
			if(A[i]>A[i+1]){
				Swap(A,i,i+1);
			}
		}
	}
}
int main()
{
	int A[]={6,5,3,1,8,7,2,4};//从小到大冒泡排序
	int n=sizeof(A);
	BubbleSort(A,n);
	printf("结果为：\n");
	for(int i=0;i<n;i++){
		printf("%d",A[i]);
	}	
	printf("\n");
	return 0;
}
