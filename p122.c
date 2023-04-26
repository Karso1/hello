/*
 * 从键盘输入4个数num1，num2，num3，num4
 * 输出：（num1除num2的余数）*num3+num4，不需要考虑num2为0和计算结果溢出的情况
 * 要求输出的结果中，整数部分宽度为8（不足8时以0补足）小数部分宽度为7.
 */
#include<stdio.h>
int main()
{
    int n1,n2;
    double n3,n4,jg;

    printf("请输入4个数：");
    scanf("%d %d %lf %lf",&n1,&n2,&n3,&n4);

    jg = (n1%n2)*n3+n4;

    printf("\n计算结果为：%016.7f",jg);
    return 0;
}