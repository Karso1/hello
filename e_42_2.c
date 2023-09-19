#include<stdio.h>
double fun(int m)
{
    double t= 1.0;
    int i;
    for(i=2;i<=m;i++)
        t=t-1.0/i;
    return t;

}
int main()
{
    int m;
    printf("\nPlz enter a number:\n");
    scanf("%d",&m);
    printf("\nThe result is %lf\n",fun(m));
    return 0;
}
