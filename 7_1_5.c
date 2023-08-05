/*
 * 本题要求给定的n个整数从大到小排序后输出
 * 输入：输入第一行给出一个不超过10的正整数n，第二行给出n个整数，期间以空格分开
 * 输出，从大到小有序数列，空格隔开，行末不得有多余空格
 */

#include<stdio.h>
int main()
{
    int n,i,j,temp;
    int a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d",a[0]);
    for(i=1;i<n;i++)
        printf("%d",a[i]);
    return 0;
}