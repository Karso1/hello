/*
 * 用scanf输入圆半径r，圆柱高h
 * 求圆周长c1，圆面积S，圆柱体积V
 */

#include<stdio.h>
int main()
{
    double r,h,C1,S,V,pi = 3.14;
    printf("Input:");
    scanf("r=%lf,h=%lf",&r,&h);
    C1 = 2*pi*r;
    S  = pi * r*r;
    V  = S * h;
    printf("C1 = %.2lf\n S = %.2lf\n V = %.2lf\n",C1,S,V);

    return 0;
}