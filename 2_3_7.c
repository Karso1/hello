#include<stdio.h>
int main()
{
    int m,n,i = 0;
    double sum = 0;
    scanf("%d %d",&m,&n);
    while(m<=n)
    {
        if(i %2 == 0)
            sum += m*m;
        else
        {
            sum += 1.0/m;
            m++;
        }
        i++;
    }
    printf("sum = %.6lf",sum);
    return 0;
}