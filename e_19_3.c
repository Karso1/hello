#include<stdio.h>
#include<stdlib.h>
struct BITS{int m3,m2,m1,m0;}    ;
struct BITS fun(int n)
{
    struct BITS res;
    res.m0 = n%10;
    res.m1 = n/10%10;
    res.m2 = n/100%10;
    res.m3 = n/1000%10;
    return res;
}
int main()
{
    struct BITS a ;
    int i =0,n=0;
    for(i=32;i<100;i++)
    {
        n = i*i;
        a = fun(n);
        if(a.m3<a.m2<a.m1<a.m0)
            printf("No. is %d\n",n);
    }
    return 0;
}