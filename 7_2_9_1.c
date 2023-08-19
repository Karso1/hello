//埃氏筛法

#include<stdio.h>
int main()
{
    int a[100]={0},n,i,j;
    for(i=0;i<100;i++)
    {
        for(j=1;i<=100;j++)
        {
            scanf("%d",&a[i]);
        }
    }
    for(i=2;i<100;i++)
    {
        for(j=i+1;j<100;j++)
        {
            if (a[j] % i == 0)
                a[j] = 0;
        }
    }
    for(j=0;i<100;j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}