/*
 * 从键盘输入的整数产生55矩阵N，并按行输出该矩阵
 * 每个元素占4个数位，右对齐
 */

#include<stdio.h>
int main()
{
    int a1[5][5],i,j,n;
    printf("plz input an integer:\n");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            a1[i][j] = n+i+j;
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%4d",a1[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
