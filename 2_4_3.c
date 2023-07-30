#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double i;
    double sum = 0;
    scanf("%d",&n);
    for(i=1.0;i<=n;i++)
    {
        sum += sqrt(i);
    }
    printf("sum = %.2lf",sum);
    return 0;
}