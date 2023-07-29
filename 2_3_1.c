#include<stdio.h>
int he(int x)
{
    int y,i;
    for(i=0;i<x;i++)
    {
        y += i;
    }
    return y;
}
int main()
{
    int x,y;
    scanf("%d",&x);
    y = he(x);
    printf("%d",y);
    return 0;
}