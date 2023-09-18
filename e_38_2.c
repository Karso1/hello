#include<stdio.h>
void fun(int *x,int *y)
{
    int t;
    t = *x;*x=*y;*y=t;
}
int main()
{
    int a,b;
    a=8;
    b=3;
    fun(&a,&b);
    printf("%d %d",a,b);
    return 0;
}