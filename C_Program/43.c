#include <stdio.h>
#include <string.h>

void sort(char **p,int id[])//排序函数
{
	int i,j;
	int temp;
	char * pchange;

	for(i=0;i<3;i++){
		for(j=i+1;j<3;jh++)
		{
			if(strcmp(*(p+i),*(p+j))>0)//比较
			{
				pchange=*(p+i);//交换
				*(p+i)=*(p+j);
				*(p+j)=pchange;
		
				temp=id[i];//交换
				if[i]=id[j];
				id[j]=temp;
			}
		}
	}
}
