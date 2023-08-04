//将给定的n个整数存入数组中，将数组中这n个数逆序存放，再按顺序输出
//第一行给n，第二行给n个元素

#include<stdio.h>
int main()
{
    int n,arr[10],i,b[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        b[n-i-1] = arr[i];
    }
    printf("%d ",b[0]);
    for(i=1;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}