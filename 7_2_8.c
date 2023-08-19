/*
 * 鞍点是指该位置上的元素是该行上最大，列上最小的元素
 * 第一行给出n，随后n阶方阵
 * 输出所有鞍点，标号行列下标
 */

#include<stdio.h>
int is_line_max(int n,int x,int i,int a[6][6]);
int is_rank_min(int n,int x,int j,int a[6][6]);

int main()
{
    int n,flag = 0,a[6][6];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(is_line_max(n,a[i][j],i,a))
            {
                if(is_rank_min(n,a[i][j],j,a))
                {
                    printf("%d %d %d\n",i,j,a[i][j]);
                    flag = 1;//是鞍点，标记一下
                }
            }
        }
    }

    if(flag == 0)
    {
        printf("NONE");
        return 0;
    }
}

int is_line_max(int n,int x,int i,int a[6][6])
{
    for(int k=0;k<n;k++)
    {
        if(x<a[i][k])
            return 0;
    }
    return 1;
}

int is_rank_min(int n,int x,int j,int a[6][6])
{
    for(int k=0;k<n;k++)
    {
        if(x>a[k][j])
            return 0;
    }
    return 1;
}
