#include<stdio.h>
void fun(int a,int b,long *c)
{
    *c=b/10*1000+a%10*100+b%10*10+a/10;
}
int main()
{
    int a,b;
    long c;
    printf("Input a b:\n");
    scanf("%d%d",&a,&b);
    fun(a,b,&c);
    printf("The result is:%ld\n",c);
    return 0;
}