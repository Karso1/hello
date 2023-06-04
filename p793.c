/*
 * 从键盘输入一个数n，long int型
 * 先逆序输出n的各位数，再输出n的各位数之和
 */

#include<stdio.h>
int main()
{
    int sum = 0,m,ys;

    printf("plz input a number:");
    scanf("%d",&m);

    printf("\nnixu:");
    for(;m != 0;)
    {
        ys = m%10;
        printf("%d",ys);
        sum = sum + ys;
        m = m/10;
    }
    printf("\nsum = %d\n",sum);
    return 0;
}