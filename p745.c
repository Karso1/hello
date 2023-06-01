/*
 * 输入两个正整数，mn，求最大公约数和最小公倍数
 */

#include<stdio.h>
int main()
{
    int m,n,i,zj,maxi,maxj;
    printf("plz input two integer numbers:");
    scanf("%d %d",&m,&n);

    if(m<n)
    {
        zj = n;
        n = m;
        m  = zj;
    }
    for(i =n;i>=1;i--)
    {
        if((n%i == 0)&&(m%i == 0))
        {
            maxi = i;
            break;
        }

    }
    maxj = m*n/maxi;
    printf("\nthe greatest common divisor is %d",maxi);
    printf("\nthe least common multiple is %d",maxj);

    return 0;
}