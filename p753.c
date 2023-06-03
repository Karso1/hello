/*
 * 计算x的y次方，其中y为整数，可以是负整数或者0，x为实型
 */

#include<stdio.h>
int main()
{
    int y1,i;
    double x1,m = 1;
    printf("input x,y:");
    scanf("%lf %d",&x1,&y1);

    if(y1>0)
    {
        for (i = 0; i < y1; i++)
        {
            m = m*x1;
        }
    }
    else if(y1 == 0)
    {
        m = 1;
    }
    else
    {
        y1 = -y1;
        for(i = 0;i<y1;i++)
        {
            m = m*x1;
        }
        m = 1/m;
    }
    printf("\nresult : %f^%d = %f",x1,y1,m);
    return 0;
}