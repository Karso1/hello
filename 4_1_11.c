#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double a,h,sum;
    int n,i;
    scanf("%lf %d",&h,&n);
    sum = h;
    if(n==0){
        printf("0.0 0.0");
        exit(0);
    }
    for(i=1;i<n;i++)
    {
        a= h/pow(2,i-1);
        sum += a;
    }
    for(i=1;i<=n;i++)
        h = h/2;
    printf("%.1lf %.1lf",sum,h);
    return 0;
}