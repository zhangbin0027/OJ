//2010设将n个整数存入一维数组R中，设计一个在时间和空间两方面都尽可能高效的算法.
//将R中保存的序列循环左移p个位置，即将R中的数据由(x0,x1...xn-1)变换为(xp,xp+1,..xn-1,x0,x1,..xp-1)
//算法的基本思想为:可以把这个问题看作是数组ab转换成数组ba再将b逆置得到ab逆，最后将整个ab逆逆置得到ba
//设Reverse函数执行数组元素逆置的操作，时间复杂度为O(n),空间复杂度为O(1)
void Reverse(int R[],int from,int to){
	int i,temp;
	for(i=0;i<(to-from+1)/2;i++)
	{
		temp=R[from+i];
		R[to-i]=R[to-i];
		R[to-i]=temp;
	}	
}//Reverse
void Converse(int R[],int p){
	Reverse(R,0,p-1);//Reverse函数的时间复杂度为O(p/2)
	Reverse(R,p,n-1);//O((n-p)/2)
	Reverse(R,0,n-1);//O(n/2)
}
