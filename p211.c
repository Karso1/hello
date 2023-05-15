/*
 * 输出菱形
 */

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("plz input n:");
    scanf("%d",&n);

    for(i = 1; i<=2 * n + 1;i++)
    {
        for(j=1;j<=2*n+1;j++)
        {
            if(i+j>=n+2&&i-j<=n&&j-i<=n&&i+j<=3*n+2)
            {
                printf("#");
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