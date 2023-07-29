#include<stdio.h>
int main()
{
    int n;
    double s=0;
    int i;
    int t =1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s += 1.0/t;
        t += 2;
    }
    printf("s = %.6lf",s);
    return 0;
}