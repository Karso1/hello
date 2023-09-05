//在有n名学生，2门课成绩的结构体数组std中，计算出第一门课程的平均分并返回
#include<stdio.h>
typedef struct
{
    char num[8];
    double score[2];
}STU;

double fun(STU std[],int n)
{
    int i;
    double sum = 0.0;
    for(i=0;i<n;i++)
    {
        sum += std[i].score[0];
    }
    return sum/n;
}

int main()
{
    STU std[]   = {
            "N1001", 76.5,82.0 ,"N1002", 66.5,73.0,
            "N1005", 80.5,66.0,"N1006", 81.0,56.0
    };
    printf("The 1st lesson score is:%lf\n",fun(std,4));
    return 0;
}