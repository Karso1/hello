#include<stdio.h>
int changee(int x)
{
    int y;
    y = 5*(x-32)/9;
    return y;
}
int main()
{
    int x;
    scanf("%d",&x);
    x=changee(x);
    printf("%d",x);
    return 0;
}