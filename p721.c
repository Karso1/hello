/*
 * 从键盘输入x，y，z，输出值公式：x+z%3*（int）（x+y）%2/4
 */

#include<stdio.h>
int main()
{
    int z;
    double x,y,n;
    printf("please input x,y,z:");
    scanf("%lf,%lf,%lf",&x,&y,&z);
    n = x + z % 3 * (int)(x+y) %2 / 4;//
    //注意！！取余左右必须是整型！！！！
    printf("Result = %lf",n);
    return 0;
}

