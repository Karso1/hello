/*
 * 输入两个整数mn，输出大于等于m（m>5)的n个素数
 * 输出的各素数以空格相隔
 */

#include<stdio.h>
int mian()
{
    int m,n,i,j,count = 0,ff;
    printf("input the m,n:");
    scanf("%d,%d",&m,&n);
    printf("\nthe result:\n");
    for(i = m; ; i++)
    {
        ff = 0;
        for(j =2;j<=m-1;j++)
        {
            if(i%j == 0)
            {
                ff =1;
                break;
            }
        }
        if(ff == 0)
        {
            printf("%d",i);
            count ++;
        }
        if(count == n)
        {
            break;
        }
    }
    return 0;
}