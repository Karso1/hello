/*
 * 有一组分数数列，2/1 3/2 5/3 8/5 13/8 21/13
 * 求前N项之和，保留两位小数
 * 输入格式：N
 * 样例输入：10，输出：16.48
 */

//当n=1，2/1 = （n+1）/n
//当n=2，3/2 = （n+1）/n
//定义i，与用户输入的N比较，如果小于就for循环然后i++

#include<stdio.h>
int main()
{
    double i=1;
    int N=0;
    double n=0;
    double sum = 0;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        n = (i+1)/i;//算的前一项
        sum = sum + n;//将前一项加起来的结果后再加新的后一项i
    }
    printf("%0.2lf",sum);
    return 0;
}