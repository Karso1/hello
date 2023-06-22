/*
 * 从键盘读入10个整数， 对其按由小到大的顺序进行排序，然后输出
 */

#include<stdio.h>
int main()
{
    int a1[10],i,j,zj;
    printf("plz input 10 integer numbers:");
    for(i = 0;i<10;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("\nthe array before sorted:");
    for(i=0;i<10;i++)
    {
        printf("%d ",a1[i]);
    }
    for(i =0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a1[i]>a1[j])
            {
                zj = a1[j];
                a1[j]= a1[i];
                a1[i]=zj;
            }
        }
    }
    printf("\nthe array after sorted:");
    for(i = 0;i<10;i++)
    {
        printf("%d ",a1[i]);
    }
    return 0;
}