/*
 * 输入3行3列的矩阵，输出所有元素的累加和
 */

#include<stdio.h>
int main()
{
    int a1[3][3],i,j,sum=0;
    printf("plz input the 3*3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum = sum + a1[i][j];
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}