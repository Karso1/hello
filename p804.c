/*
 * 先从键盘读入的8个学生的6门课，成绩存放在二维数组student中
 * 每一行存储一个学生的数据，第0列为学号，第1-6列依次为6门课的成绩
 * 在从键盘读入一个学号，在student查找该学生是否存在
 * 若存在输出其平均成绩，若不存在则显示not Find！
 */

#include<stdio.h>
#define NOT_FIND -1
#define TOTAL_STU 8
float aver(int (*pStu)[7],int stuNo);
int main()
{
    int student[TOTAL_STU][7];//第一列储存学生姓名
    float averScore;
    int i ,j,stuNumber;

    printf("Input the %d student's number and score:\n",TOTAL_STU);
    //从键盘读入8个学生的成绩存放在二维数组student里
    for(i=0;i<8;i++)
    {
        printf("%d",i+1);
        for(j=0;j<7;j++)
        {
            scanf("%d",&student[i][j]);
        }
    }
    printf("\ninput a student's number to compute:\n");
    scanf("%d",&stuNumber);

    //调用aver（）求平均值
    averScore = aver(student,stuNumber);
    if(NOT_FIND == averScore)
    {
        printf("\nstudent of No.%d not Find!\n",stuNumber);
    }
    else
    {
        printf("The No.%d student's average is %.2f\n",stuNumber,averScore);
    }
    return 0;
}

float aver(int (*pStu)[7],int stuNo)
{
    int i,j;
    float averx = -1,sum=0;
    for(i=0;i<8;i++)
    {
        if(stuNo == *(*(pStu+i)+0))
        {
            for(j=1;j<7;j++)
            {
                sum = sum +*(*(pStu+i)+j);
            }
            averx= sum/6;
        }
    }
    return averx;
}