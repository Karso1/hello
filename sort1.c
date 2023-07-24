/*
 * sort
 * n<2000
 */

#include<stdio.h>
int main()
const int maxn = 1005;
int a[maxn];
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        //两个for都是1到n，方便记忆
        for(int j=1;j<n;j++)
        {
            if(a[i]>a[j]+1)
            {
                //exchange a[j]and a[j+1]
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}