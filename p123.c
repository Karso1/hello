/*
 * 从键盘键入4个数，num1，num2，num3，num4
 * 输出：num1+（num2÷num3的余数）*num4，要求整数部分宽度为7，小数部分宽度为5
 */

#include<stdio.h>
int main()
{
    int num2,num3;
    double num1,num4,sum;
    printf("请输入4个数：");
    scanf("%lf %d %d %lf",&num1,&num2,&num3,&num4);
    sum = num1 + (num2 % num3)*num4;
    printf("%013.5f",sum);
    return 0;
}