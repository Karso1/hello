/*
 * 一个物体从100米高空自由落下，输入秒数n，求在这段时间内下落的垂直距离
 * 设重力加速度为10m/s
 */
//分析：h=1/2  gtt
//计算出多少时间内下落完毕，当用户输入时间大于这个时间时，则显示出来

#include<stdio.h>
double height(double t)
{
    double h;
    h = 10*t*t/2;
    return h;
}
int main()
{
    int const H = 100;
    double t;
    printf("plz input time t:\n");
    scanf("%lf",&t);
    printf("the height is %.2lf",height(t));
    return 0;
}