#include<stdio.h>
int main()
{
    double x,y;
    int i;
    scanf("%lf",&x);
    if(x != 10)
    {
        y = x;
    }
    else
    {
        y = 1/x;
    }
    printf("%.1lf",y);
    return 0;
}