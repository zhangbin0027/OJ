//循环队列
//循环队列的定义
#define MaxSize 100;
typedef struct{
	ElemEype data[MaxSize];
	int rear,front;	
}SqQueue;
//循环队列的初始化
void InitQueue(SqQueue *Q){
	Q->front=0;
	Q->rear=0;
}

//循环队列的判空
bool EmptySqQueue{
	if(q->rear=q->front==0){
		return 0;
	}else{
		return 1;
	}
}
//循环队列的判满
bool FullSqQueue{
	if(q->front=(q->rear+1)%MaxSize){
		return 0;	
	}else{
		return 1;
	}
}
