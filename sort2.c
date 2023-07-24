/*
 * quick sort
 * n<50w
 */

#include<stdio.h>

const int maxn = 10005;
int a[maxn];

void Quick_Sort(int 1,int r)
{
    if(1>=r)return;
    int i=1,j=r,x=a[1];
    while(i<j)
{
        while(i<j && a[j]>=x)j--;
        if(i<j)a[i++]=a[j];
        while(i<j && a[i]<x)i++;
        if(i<j)a[j--]=a[i];
}
    a[i]=x;

Quick_Sort(1,i-1);

Quick_Sort(i+1;r);
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    Quick_Sort(1,n);//传入左边界下标和右边界下标
    for(int i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}