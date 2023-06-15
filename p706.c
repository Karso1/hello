/*
 * 输入任意10个整数，对这些数从小到大排序并输出
 */

#include<stdio.h>
int main()
{
    int a1[10], i, j, zj;
    printf("plz input 10number:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a1[i]);//将这10个数放到数组里
    }
    for (i = 0; i < 9; i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a1[i]>a1[j])
            {
                zj = a1[i];
                a1[i]=a1[j];
                a1[j]=zj;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%5d",a1[i]);
    }
    return 0;
}