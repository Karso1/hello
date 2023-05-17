/*
 * 根据输入的n再屏幕上显示对应图形
 */

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("plz input n:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i == j || i+ j == 2*n)
            {
                printf("@");
            }
            else
            {
                printf(" ");
            }
        }
        putchar('\n');
    }
    return 0;
}