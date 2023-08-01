#include<stdio.h>
int main()
{
    int i,a,r,n,s=0;
    scanf("%d %d",&a,&n);
    r = a;
    for(i=1;i<=n;i++)
    {
        s +=a;
        a = (a*10)+r;
    }
    printf("s = %d",s);
    return 0;

}