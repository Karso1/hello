//第一行输入数字个数N
//第二行输入n个数字
//第三行随机数一个数
//输出将所有的数字，从小到大， 并且插入的数字不改变顺序

#include<stdio.h>
int main()
{
    int n,i,j,b,temp;
    int a[11];
    scanf("%d",&n);
    for(i = 0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&b);
    for(i=0;i<=n;i++)
    {
        if(b<=a[i])
        {
            for(j=n;j>i;j--)
            {
                a[j]=a[j-1];
            }
            a[i]=b;
            break;
        }
        if(b == a[n-1])
            a[n]=b;
        if(b>a[n-1])
            a[n]=b;
    }
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}