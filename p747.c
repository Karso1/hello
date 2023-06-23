/*
 * 先从键盘上读入15个数放在同一个数组a[15]中，然后再输入一个数
 * 要求找出该数是数组中第几个
 * 从0开始计数，若有相同的书，则计首次出现的数
 * 元素[i]的值，若果该数不在数组中，则输出has not been found
 */

#include<stdio.h>
int main()
{
    int a1[15],i,n,j=1;
    printf("plz input 15 integer numbers:\n");
    for(i =0;i<15;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("plz input the integer you want to find:");
    scanf("%d",&n);
    for(i=0;i<15;i++)
    {
        if(a1[i]==n)
        {
            j=0;
            printf("\n%d has been found,it is a[%d]\n",n,i);
        }
    }
    if(j==1)
    {
        printf("\n%d has not been found\n",n);
    }
    return 0;
}