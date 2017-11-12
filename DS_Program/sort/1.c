#include <stdio.h>
#include <stdlib.h>

void swap(int A[],int n){
	if(A[j-1]>A[j]){
		temp=A[j-1];
		A[j-1]=A[j];
		A[j]=temp;
	}
}
void sort(int A[],int n){
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(A[j-1]>A[j]){
				swap(A[j-1],A[j]);
				falg==false;
			}
			if(flag==false) return;
		}
	}
}
int main(int argc,char *argv[]){
	int A[]={7,8,4,5,2,3,5,6,10,9};
	int n=sizeof(A);
	sort(A[],n);
	for(i=0;i<n;i++){
		printf("%d",A[i]);
	}
	printf("\n");
	return 0;	
}
void qsort(ElemType A[],int low,high){
	if(low<high){
	int pivort=partion(A,low,high);
	qsort(A,low,pivot-1);
	qsort(A,pivot+1,high);
}
int partion(ElemType A[],int low,int high){
	ElemType pivort=A[low];
	while(low<high){
	if(low<high&&A[high]>=pivot){
		--high;
		}else{
			A[low]=A[high];
		}
	if(low<high&&A[low]<=pivot){ 
		++low;
		}else{
		A[high]=A[low];
		}
	A[low]==pivort;
	return low;
}
int main(int argc,char *argv[]){
	int A[]={1,5,6,3,8,7,5,9,12,13};
	int n=sizeof(A);
	qsort(A[],n);
	for(i=0;i<n;i++){
		printf("%d",A[]);
	}
	printf("\n");
	return 0;
}

void ssort(ElemType A[],int i,int j){
	int n=sizeof(A);
	for(i=0;i<n;i++){
		min=i;
		for(j=n+1;j<n;j++){
			if(A[j]<A[min]){
				min=A[j];
			}else if(min!=i){
				swap(A[i],A[min]);
			}
		}
	}
}
int main(int argc,char *argv[]){
	int A[]={1,3,5,6,23,54,56,4,8,9};
	int n;
	n=sizeof(A);
	ssort(A[],n);
	for(i=0;i<n;i++){
		printf("%d",A[]);
	}
	printf("\n");
	return 0;
}

ElemType B=(ElemType*)malloc((n+1)*ElemType);
void msort(ElemType A[],int low,int mid,int high){
	for(int k=low;k<n;k++){
		B[K]=A[K];	
	}
	for(i=low;j=mid+1;j++){
		if(B[i]<B[j]){
			A[k]=B[i++];
		}else{
			A[k]=B[j++];
		}
	}
	while(i<=mid) A[k++]=B[i++];
	while(j<=high) A[k++]=B[j++];
	return 0;
}
int main(int argc,char *argv[]){
	int A[]={2,5,4,7,5,8,4,5,6,23};
	int n;
	n=sizeof(A);
	msort(A[],n);
	for(i=0;i<n;i++){
		printf("%d",A[]);
	}
	printf("\n");
	return 0;	
}

