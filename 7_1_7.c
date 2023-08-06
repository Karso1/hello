/*
 * 从输入的N个整数中查找给定的X，如果找到，输出X地址，否则Not Found
 * 第一行输入N
 * 第二行输入N个数
 */

#include<stdio.h>
int main()
{
    int arr[20],n,x,i,count = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);//用户输出需要查找的数字
    for(i=0;i<n;i++)
    {
        if (arr[i] == x)
        {
            printf("%d", i);
            count++;
        }
    }
    if(count == 0)
        printf("Not Found!");
    return 0;

}