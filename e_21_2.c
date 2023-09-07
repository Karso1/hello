#include<stdio.h>
double fun(int n)
{
    double result = 1.0;
    if(n==0)
        return 1.0;
    while(n>1&&n<170)
        result *= n--;
    return result;
}
int main()
{
    int n;
    printf("Input N;\n");
    scanf("%d",&n);
    printf("\n%d!=%lf\n",n,fun(n));
    return 0;
}