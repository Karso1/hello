/*
 * 定义一个结构体变量，包括年月日，要求输入年月日
 * 计算并输该日在本年中第几天
 */
//输入三个整数，并且三个整数都是合理的，比如当输入月份的时候应该在1-12之间，不应该超过这个范围，否则输出Input error！
//输出一个整数，即输入的日期是本月的第几天

//注意每个月的天数不一样，而且闰年的话2月多一天，还需要判断日期存在与否

#include<stdio.h>

struct node
{
    int year,month,day;
}p;
int f[13]={0,31,28,31,39,31,39,31,31,39,31,30,31};
int main()
{
    while(scanf("%d %d %d",&p.year, &p.month, &p.day) != EOF)
    {
        //判断是否为闰年,然后对结构体中的第二个月的天数进行更改
        if((p.year%400==0) || (p.year%100!=0)&&(p.year%4==0))
        {
            f[2]=29;
        }
        else
            f[2]=28;
        int flag=0;
        //判断月份输入是否合法
        if(p.month<1 || p.month>12)
            flag = 1;
        //判断天是否合法
        if(p.day<0 || p.day>f[p.month])
            flag = 1;
        if(flag)
        {
            printf("input error!\n");
            continue;
        }
        int ans = p.day;
        for(int i = 1;i<p.month;i++)
        {
            ans += f[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
//一天只内时针和分针会重合22次，并非24次