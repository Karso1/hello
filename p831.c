/*某班有40位同学参加考试，成绩整数从键盘输入
 * 求全班最高分最低分以及平均分
 * 并统计改版同学的考试及格率
 * /
 */
#include<stdio.h>
int main()
{
    int a1[40],i,max,min,count=0;
    double sum =0,jg;
    printff("plz input 40 students grades:");
    for(i=0;i<40;i++)
    {
        scanf("%d",&a1[i]);
    }
    max=a1[0];
    min=a1[0];
    for(i=0;i<40;i++)
    {
        sum= sum+a1[i];
        if(a1[i]>max)
        {
            max=a1[i];
        }
        if(a1[i]<min)
        {
            count++;
        }
    }
    jg=((double)count/40)*100;
    printf("\nthe higest grade:%d\nlowest grade:%d\naverage grade:%.lf\njigelv:%.0f%%\n",max,min,sum/40,jg);
    return 0;
}