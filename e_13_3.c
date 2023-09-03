#include<stdio.h>
double fun(int n)
{
    double s=0;
    int i;
    for(i=1;i<=n;i++)
    {
        s = s+1.0/(i*(i+1));
    }
    return s;
}
int main()
{
    printf("%f\n",fun(10));
    return 0;
}