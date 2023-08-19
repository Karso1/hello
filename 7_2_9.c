/*
 * 所谓螺旋方阵，是指对任意给定的N，将1到N*N的数字从左上角第一个格子开始
 * 按顺时针螺旋方向顺序填入N*N的方阵里
 *
 * 输入一个正整数N（<10）
 * 输出N*N的螺旋方阵，每行N个数字，每个数字占3位
 */

#include<stdio.h>
#include<string.h>  //内涵memset（）
int main()
{
    int n,x,y,tot=0,a[10][10];
    scanf("%d",&n);
    memset(a,0,sizeof(a));//将数组元素全部初始化为0，以便之后判断
    tot = a[x=0][y=0]=1;

    while(tot<n*n)
    {
        //先进性预判，碰壁就不往下走，！a[x][y+1]等价与a[x][y+1]==0
        while(y+1<n && !a[x][y+1])
            a[x][++y] = ++tot;
        while(x+1<n && !a[x+1][y])
            a[++x][y] = ++tot;
        while(y-1>=0 && !a[x][y-1])
            a[x][--y] = ++tot;
        while(x-1>=0 && !a[x-1][y])
            a[--x][y] = ++tot;
    }
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
    return 0;
}