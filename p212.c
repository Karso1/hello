/*
 * 根据输入的n（n》1）在屏幕上显示对应的图案
 */

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("plz input n:");
    scanf("%d",&n);

    for(i=1;i<=2*n-1;i++)
    {
        if(i+j == n+1 || j-i == n-1)
        {
            printf("%c",'a'+i-1);
        }
        else if(i-j == n-1 || i+j == 3*n-1)
        {
            printf("%c",'a'+2*n-1-i);
        }
        else
        {
            printf(" ");
        }
        putchar('\n');
    }
    return 0;
}