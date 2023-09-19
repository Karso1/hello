#include<stdio.h>
void fun(int a,int b,long *c)
{
    int a_up,a_low,b_up,b_low;
    a_up=a/10;
    b_low = b%10;
    a_low = a%10;
    b_up = a/10;
    *c = b_up*1000 + a_up*100+b_low*10+a_low;
}
int main()
{
    int a,b;
    long c;
    printf("input a b:\n");
    scanf("%d%d",&a,&b) ;
    fun(a,b,&c);
    printf("The result is:%ld\n",c);
    return 0;
}