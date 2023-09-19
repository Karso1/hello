#include<stdio.h>
double fun(int n)
{
    float A=1;
    int i;
    for(i=2;i<=n;i++)
        A=1/(1+A);
    return A;
}

int main()
{
    int n;
    printf("\nPlz input n:");
    scanf("%d",&n);
    printf("A%d=%f\n",n,fun(n));
    return 0;
}