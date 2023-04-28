/*
 * 从键盘输入一日期，年月日之间用 - 分隔，并且以同样的形式但以 / 做分隔符输出
 */

#include<stdio.h>
int main()
{
    int x,y,z;

    printf("please input a date:");
    scanf("%d-%d-%d",&x,&y,&z);
    printf("the date is:%d/%02d/%02d",x,y,z);
    //注意占的格式，如果类似于月和日占的是两位，那就02，表示一共占两个位置，如果是个数日期就会自动加0
    return 0;
}