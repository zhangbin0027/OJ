//输入5名大学生4门功课的成绩，然后求出每个大学生的总分；每门课的平均分；输出总分最高的学生的姓名和分数
//根据题意，程序使用字符类型的二维数组name存放5名大学生的姓名，使用整数类型类似的二维数组info存放5名大学生的课程成绩
#include <stdio.h>

#define STUDENT_NUM 5//学生人数
#define COURSE_NUM 4//课程数
#define NAME_NUM 20//学生姓名的长度

float sum(float a[STUDENT_NUM][COURSE_NUM],int n)//计算总分
{
	int i=0;
	float s=0;//每个学生的总分

	for(i=0;i<COURSE_NUM;i++)
		s=s+a[n][i];
	
	return s;
}

float average(float a[STUDENT_NUM][COURSE_NUM],int n)//计算平均分
{
	int i=0;//每门课程的总分
	float s=0;
	for(i=0;i<STUDENT_NUM;i++)
		s=s+a[i][n];
		
	return s/STUDENT_NUM;//每门课程的平均分
}

int max(float a[STUDENT_NUM][COURSE_NUM])//获得总分最高的学生的编号
{
	int i=0,x=0;
	flaot temp;
	float max=0;

	for(;i<STUDENT_NUM;i++)
	{
		temp=sum(a,i);
		if(temp>=max)
		{
			max=temp;
			x=i;
		}
	}
	return x;
}

void main()
{
	char name[5][NAME_NUM];//学生姓名
	float info[STUDENT_NUM][COURSE_NUM];//学生信息
	float temp=0;//临时变量
	int cs=0，cc=0，i=0;//循环变量
	int flag=9;//标志位

	printf("输入学生的姓名:\n");
	for(i=0;i<5;i++)
		scanf("%s",&name[i]);

	printf("输入各个学生的各科成绩:\n");
	for(cs=0;cs<STUDENT_NUM;cs++){
		printf("第%d个:\n",cs+1);
		for(cc=0;cc<COURSE_NUM;cc++){
			scanf("%f",&temp);
			info[cs][cc]=temp;
		}
	}	
	//计算总分
	printf("每个学生的总分为：\n");
	for(i=0;iMSTUDENT_NUM;i++){
		printf("%8.2f",sum(info,i));
	}
	//计算课程的平均分
	printf("\n每门课程的平均分为：\n");
	for(i=0;i<COURSE_NUM;i++){
		printf("%8.2f",average(info,i));
	}
	printf("\n总分最高的学生是：");//用于标识最高分学生的编号
	printf(",总分是：%8.2f\n",sum(info,flag));
}


