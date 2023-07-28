#include<stdio.h>
#include<math.h>
double lixi(double x,double y,double z)
{
    double lixi;
    lixi = x*pow((1+z),y)-x;
    return lixi;
}

int main()
{
    double money,year,rate;
    scanf("%lf %lf %lf",&money,&year,&rate);
    printf("%.2lf", lixi(money,year,rate));
    return 0;
}