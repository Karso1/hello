/*
 * 输入三角形的边长abc，边长可以是小数。求三角形面积area，并输出
 * 如果输入的三边不构成三角形，给出data error的信息提示
 *
 */
#include<math.h>
#include<stdio.h>
int main()
{
    double a,b,c,area,p;

    printf("please input triange sides:");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        p = (a+b+c)/2;
        area=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("\narea = %.2lf\n",area);
    }
    else
    {
        printf("\ndata error\n");
    }
    return 0;
}