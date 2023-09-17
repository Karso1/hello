#include<stdio.h>
int fun(int n)
{
    int m,y;
    y = 0;
    if(n>=0)
        m = n;
    else
        m = -n;
    while(m!= 0)
    {
        y = y*10 + m%10;
        m = m/10;
    }
    y = (n>=0)?y:-y;
    return y;
}

int main()
{
    int m1,m2;
    scanf("%d %d",&m1,&m2);
    printf("%d的逆向时%d\t",m1,fun(m1));
    printf("%d的逆向是%d\n",m2,fun(m2));
    return 0;
}