#include<stdio.h>
void wanshu(int n);
int x = 0;//定义一个全局变量
int main()
{
    int m,n,i,count = 0;
    scanf("%d %d",&m,&n);
    for(i = m;i<=n;i++)
    {
        wanshu(i);
    }
    if(x==0)
    {
        printf("None");
    }
    return 0;
}
void wanshu(int n)
{
    int i,sum = 0,a[100]={0},t = 0,s;
    for(i = 1;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            t++;
            a[t] = i;
        }
    }
    for(i=1;i<=t;i++)
    {
        sum += a[i];
    }
    if(sum == n)
    {
        printf("%d = %d",n,a[i]);
        for(s = 2;s<=t;s++)
            printf("+%d",a[s]);
        putchar('\n');
        x++;
    }
}