//求最小公倍数
#include<stdio.h>
int main()
{
    int a,b,n;
    printf("plz input 2 number:\n");
    scanf("%d %d",&a,&b);
    n = 1;
    while(a*n % b)
    {
        n++;
    }
    printf("%d",a*n);
    return 0;
}