#include<stdio.h>
void fun(int a,int b,long *c)
        void fun(int  a, int  b, long  *c)
{
    int a_up,a_low,b_up,b_low;
    a_up=a/10;
    a_low=a%10;
    b_up=b/10;
    b_low=b%10;
    *c=a_low*1000+b_low*100+a_up*10+b_up;
}
main()
{  int  a,b; long  c;void NONO ();
    printf("Input a b:");
    scanf("%d%d", &a, &b);
    fun(a, b, &c);
    printf("The result is: %ld\n", c);
    NONO();
    getchar();
    return 0;
}