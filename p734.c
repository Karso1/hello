/*
 * 从键盘输入一个正方体的边长整型，计算该正方体的体积和表面积
 */
//体积：a*a*a，表面积a*a*6

#include<stdio.h>
int main()
{
    int a;
    printf("Input a side of cube:");
    scanf("%d",&a);
    printf("The volume of cube is %d,the surface area of cube is %d",a*a*a,a*a*6);
    return 0;
}