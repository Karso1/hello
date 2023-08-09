/*
 * 本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换
 * 最后输出交换后的序列
 * 第一行给出一个整数N
 * 第二行给出N个整数，数字间以空格分隔
 * 在一行中顺序输出交换后的序列，每个整数后跟一个空格
 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,a[10],max,min,x,y,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }//读取到数组中
    if(n==1)
    {
        printf("%d",a[0]);
        exit(0);
    }//如果数组中只有一个元素，则直接输出
    min = a[0];//假定最小值是第一个元素
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min = a[i];
            y = i;//i表示最小元素的下标，给y
        }
    }//遍历整个数组，比较大小并且进行交换
    a[y]=a[0];//最前面的元素放到最小值的位置
    a[0]=min;//最小值放到最前

    max = a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            min = a[i];
            y = i;
        }
    }

    a[x]=a[n-1];
    a[n-1]=max;

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}