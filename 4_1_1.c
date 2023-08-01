#include<stdio.h>
int gcd(int a,int b)
{
    if(b == 0) return a;
    else return gcd(b,a%b);
}
int main()
{
    int x,y,gy,gb;
    scanf("%d %d",&x,&y);
    gy = gcd(x,y);
    gb = x*y/gy;
    printf("%d %d",gy,gb);
    return 0;
}

/*
int main()
{
    int i,a,b,r,d;
    scanf("%d %d",&a,&b);
    r = a*b;
    if(a<b)
    {
        i=a;
        a=b;
        b=i;
    }
    do
    {
        i = a%b;
        a=b;
        b=i;
    }while(i!=0)
        d=r/a;
    printf("%d %d",a,d);
    return 0;
}
*/