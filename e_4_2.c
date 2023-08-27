#include<stdio.h>
void fun(long n,int *c0,int *c1)
{
    int k;
    *c0 = *c1 = 0;
    do
    {
        k = n%10;
        if(k==0)
            (*c0)++;
        if(k==1)
            (*c1)++;
        n=n/10;
    }
    while(n);
}

int main()
{
    long n;
    int c0,c1;
    printf("input n:");
    scanf("%ld",&n);
    fun(n,&c0,&c1);
    printf("c0=%d,c1=%d\n",c0,c1);
    return 0;
}