#include<stdio.h>
#include<math.h>
double fun(double a,double x0)
{
    double x1,y;
    x1= (x0+a/x0)/2.0;
    if(fabs(x1-x0)>0.00001)
        y = fun(a,x1);
    else y =x1;
    return y;
}

int main()
{
    double x;
    printf("Enter x:");
    scanf("%lf",&x);
    printf("The square root of %lf is %lf\n",x,fun(x,1.0));
    return 0;
}