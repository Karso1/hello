#include<stdio.h>
double fun(int n)
{
    int i;
    double sum=0.0,tmp=1.0;
    if(n<=1||n>100){printf("Input n (n>1&&n<=100): ");
    scanf("%d",&n);}

    for(i=1;i<=n;i++)
    {
        tmp *= i;
        sum+=1.0/tmp;
    }
    return sum;

}
int main()
{
    int n;
    double s;
    printf("\nInput n: ");
    scanf("%d",&n);
    s = fun(n);
    printf("\ns = %f\n",s);
    return 0;
}