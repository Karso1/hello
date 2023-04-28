/*
 * 从键盘输入一个正三角形的边长整型，计算面积和周长
 */
#include<math.h>
#include<stdio.h>
int main()
{
    double a;
    printf("Input a side of triangle:");
    scanf("%lf",&a);
    printf("The area of triangle is %.2lf, the circle of triangle is %.0lf",sqrt(a*3/2*(a*3/2 - a)* (a*3/2 - a)*(a*3/2 -a)),a*3);
    return 0;
}
/*
 * sqrt是平方根sqarerootcalculations
 * 结果不能是负数和虚数，如果想要负数，应该在sqrt之前加-
 *
 */