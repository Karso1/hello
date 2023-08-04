//给定两个整型数组，本题要求找出不是两者共有的元素
//第一行给定正整数N，第二行给N个整数
//输出不是两数组共有的元素，数字间以空格分开，但行末不得有多余空格，同一数字不重复输出

#include<stdio.h>
int main()
{
    int a[20],b[20],c[20];
    int m,n,j,i,k=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
                break;
        }
        if(j>=n)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[i] == a[j])
                break;
        }
        if(j>=m)
        {
            c[k]=b[i];
            k++;
        }
    }
    printf("%d",c[0]);
    for(i=1;i<k;i++)
    {
        for(j=0;j<i;j++)
        {
            if(c[i]==c[j])
                break;
        }
        if(j>=i)
            printf(" %d",c[i]);
    }
    return 0;
}