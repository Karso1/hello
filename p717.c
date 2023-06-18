/*
 * 输入10个整型数存入一堆数组，输出值和下标都为奇数的元素及其个数
 * 数组第一个元素下标为0
 * 要求先输出个数
 */

#include<stdio.h>
int main()
{
    int a1[10],i,count = 0;
    for(i = 0;i<10;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i = 0;i<10;i++)
    {
        if(a1[i]%2!=0 && i%2!= 0)
        {
            count ++;
        }
    }
    printf("\ncount = %d \n",count);
    for(i = 0;i<10;i++){
        if(a1[i]%2!=0 && i%2 != 0)
        {
            printf("a[%d] = %d\n",i,a1[i]);
        }
    }
    return 0;
}