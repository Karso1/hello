/*
 * 输入华氏温度，输出摄氏温度
 * 计算公式：C=5*（F-32）/9
 * c表示摄氏温度，F表示华氏温度
 * 输出数据要求为整型
 */

#include<stdio.h>
int sswitch(int x)
{
    int y;
    y = 5*(x-32)/9;
    return y;
}
int main()
{
    int F,C;
    scanf("%d",&F);
    printf("%d",sswitch(F));
    return 0;
}