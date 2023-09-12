//删除数组中所有相同的数字,只剩一个，并且返回删除后的数据个数

#include<stdio.h>
#define N 80
int fun(int a[],int n)
{
    int i,j,x;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[j]==a[i])
            {
                for(x=j+1;x<n;x++)
                    a[x-1]=a[x];
                n--;
                j--;
            }
    return (n);
}
int main()
{
    int a[N]={2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,11,11,11,11},i,n=20;
    printf("The original data:\n");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    n = fun(a,n);
    printf("\n\nThe data after deleted:\n");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    printf("\n\n");
    return 0;
}