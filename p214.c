#include<stdio.h>
int main()
{
    int i,j,n;
    printf("plz input n:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j == 1|| i+j == n+1 || i-j == n-1)
            {
                printf("$");
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
