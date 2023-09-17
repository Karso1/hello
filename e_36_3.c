#include<stdio.h>
double fun(double a[],int n)
{
    double min,max,s,avg;
    int i;
    min=a[0];
    max=a[0];
    s=0.0;
    avg =0.0;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min =a[i];
        if(max<a[i])
            max=a[i];
        s+=a[i];
    }
    avg=(s-min-max)/(n-2);
    return avg;
}

int main()
{
    double b[10],r;
    int i;
    printf("plz input 10number:\n");
    for(i=0;i<10;i++)
        scanf("%lf",&b[i]);
    printf("10 numbers are:\n");
    for(i=0;i<10;i++)
        printf("%4,11f",b[i]);
    printf("\n");
    r = fun(b,10);
    printf("ave=%f\n",r);
    return 0;
}