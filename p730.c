/*
 * 输入两个整数，如果相等输出yes，否则输出no
 */

#include<stdio.h>
int main()
{
    int x,y;
    printf("please input x y:");
    scanf("%d %d",&x,&y);
    if(x == y)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}