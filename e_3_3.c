/*
 * 计算并输出给定整数n的所有因子，不包括1和n本身
 */

#include<stdio.h>
int fun(int n)
{
    int i,s=0;
    if(n<1000)
    {
        for(i=2;i<n;i++)
        {
            if(n%i == 0)
            {
                s=s+i;
            }
        }
    }
    return s;
}

int main()
{
    int n,sum;
    printf("input n:");
    scanf("%d",&n);
    sum = fun(n);
    printf("sun=%d\n",sum);
    return 0;
}