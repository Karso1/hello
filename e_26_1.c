//求n名学生的成绩，计算出所有学生的平均成绩，把高于平均成绩的学生成绩的平均值返回

#include<stdio.h>
double fun(double x[],int n)
{
    int i,k=0;
    double avg = 0.0,sum = 0.0;
    for(i=0;i<n;i++)
    {
        avg += x[i];
    }
    avg /=n;
    for(i=0;i<n;i++)
        if(x[i]>avg)
        {
            sum += x[i] ;
            k++;
        }
    return sum/k;
}
int main()
{
    double score[12] = {50,60,70,80,90,100,55,65,75,85,95,99};
    double aa;
    aa = fun(score,12);
    printf("%\n",aa);
    return 0;
}