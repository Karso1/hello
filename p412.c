/*
 * 从键盘读入一组整数，int。数与数之间使用空格或者回车做分隔
 * 可正可负，最多10000个，但若读入的数为-222时，则表示输入结束且-222不算在数组内
 * 对这一数组按从小到大的顺序排序
 * 将排序后的这一数组输出到屏幕上，输出格式为每行6个数，数与数之间用，分隔，两个逗号之间的宽度为6（不算逗号）
 * 并且使用左对齐格式，行尾没有逗号
 */

#include<stdio.h>
int main()
{
    int a1[1000],i,j,zj,sz,n= 0;
    printf("plz input numbers:");
    for(i = 0;i<1000;i++)
    {
        scanf("%d",&sz);
        if(sz == -222)
        {
            break;
        }
        else
        {
            a1[i]= sz;
            n++;
        }
    }
    for(i = 0;i<n-1;i++)
    {
        for(j = i+1;j<n;j++)
            if(a1[i]>a1[j])
            {
                zj = a1[i];
                a1[i]=a1[j];
                a1[j]=zj;
            }
    }
    printf("\n0utput:\n");
    for(i=0;i<n;i++)
    {
        printf("%-6d",a1[i]);
        if((i+1)%6 == 0||(i+1)==n)
        {
            printf("\n");
        }
        else
        {
            printf(",");
        }
    }
    return 0;
}