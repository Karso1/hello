#include<stdio.h>
int main()
{
    int n,w=1,sum=0;
    scanf("%d",&n);
    while(n/10>0)
    {
        sum += n%10;
        w++;
        n = n/10;
    }
    printf("%d %d",w,sum+n);
    return 0;
}