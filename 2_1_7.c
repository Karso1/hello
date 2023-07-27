/*
 * 输入一个三位数，将其反序输出
 */
#include<stdio.h>
int main()
{
    int a;
    int b,c,d;
    scanf("%d",&a);
    b=a%10;
    c=(a-b)/10%10;
    d=a/100;
    printf("%d%d%d",b,c,d);
    return 0;
}