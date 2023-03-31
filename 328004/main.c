//do while语句
//do
//{
//   <循环体语句>
//}while（<循环条件 >)
//do是一定会执行的。while是判断的。

#include<stdio.h>
int main()
{
    int x;
    int n = 0;
    scanf("%d",&x);
    do
    {
        x /= 10;//消除个位数
        n ++;
    }while (x>0);
    printf("%d",n);
    return 0;
}