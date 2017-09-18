//荷兰国旗问题：设仅有由红白蓝三种颜色的条块组成的条块序列，请编写一个时间复杂度为O(N)的算法，使得这些条块按照红黄蓝的顺序排好
//算法思想：顺序扫描线性表,将红色条块交换到线性表的最前面,蓝色条块交换到线性表的最后面。j为工作指针表示当前扫描的元素,i以前的元素全部为红色，k以后的元素全部为蓝色

typedef enum(RED,WHITE,BLUE) color;//设置枚举数组
void Flag_Arrage(color a[],int n){
	int i=0;
	int j=0;
	int k=n-1;
	while(j<=k){
		switch(a[j]){//判断条快的颜色
			case RED;
				swap(a[i],a[j]),i++;j++;break;
			case White;
				j++;break;
			case BULE;
				swap(a[j],a[k]),k--;//这里没有j++语句以防止交换后仍为蓝色的情况
		}
	}
}

//red,current指向队头,white指向队尾
void theeFlag(int *red ,int *current,int *white){
	white(current==0){
		if(current==red){
			current++;red++;continue;
		}
		if(current>red){
			int temp;
			temp=*red;
			*red=*current;
			*current=*temp;
			red++;
			continue;
		}
		if(current==1){
			current++;continue;
		}
		if(current==2){
			if(*white==2){
			white--;
			continue;
			}
		int temp;
		temp=*current;
		*current=*white;
		white=temp;	
		continue;
		}
	}
}
