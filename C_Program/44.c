//使用结构体数组来存放三个学生的学号、姓名、性别和三门单科成绩,输出总分最高的学生，及有一科或以上不及格的学生的各项数据
#include <stdio.h>
#include <string.h>

#define N 3//学生数目为3
struct stu//学生结构体
{
	long stu_no;
	char name[20];
	char sex;
	float scoreOS;
	float scoreDS;
	float scoreJava; 
}student[N];

void main()
{
	int i,max_num=0;//存放最大成绩的下标
	float score,maxscore;//存放最大的总成绩
	
	for(i=0;i<N;i++)//循环输入每个学生的信息
	{
		printf("请输入第%d个学生的信息:\n",i+1);
		printf("学号:");
		scanf("%d",&student[i].stu_no);
		printf("姓名:");
		scanf("%s",&student[i].name);
		printf("性别:");
		scanf("%s",&student[i].sex);
		printf("OS成绩:");
		scanf("%d",&student[i].scoreOS)
		printf("DS成绩:");
		scanf("DS成绩:",&student[i].scoreDS);
		printf("Java成绩:",&student[i].scoreJava);	
	}
//查找成绩最大的学生得到该学生数组中的编号放入max_num中
	max_score=student[0].scoreOS+student[0].scoreDS+student[0].score[0].Java;
	for(i=1;i<N;i++)
	{
		score=student[i].scoreOS+student[i].score[i].DS+score[i].Java;
		if(score>max_score)
		{
			max_num=i;
		}
	}
	//输出最大成绩的学生信息
	printf("总分最高的学生:\n");
	printf("学号 姓名 性别 OS DS Java\n");
	printf("%ld %10s %10c %10.1f %10.1f %10.1f\n\n");
	for(i=0;i<N;i++)
	{
		if(student[i].scoreOS<60||student[i].scoreDs<60||student[i].scoreJava<60)
		printf("%ld %10s %10c %10.1f %10.1f %10.1f\n",student[i].stu_no,student[i].name,student[i].sex,student[i].scoreOS,student[i].scoreDS,student[i].Java);
	}
}
