/*
 * 输入一个三位正整数，然后哦逆序输出
 */


#include<stdio.h>
int main()
{
    int a,x,y,z;
    printf("Input the integer:");
    scanf("%d",&a);
    x = a%1;
    y = a%10;
    z = a%100;
    printf("The result is %d%d%d",x,y,z);
    return 0;
}