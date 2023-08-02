#include<stdio.h>
int main()
{
    int n,i;
    char c = 'A';
    scanf("%d",&n);
    do {
        for(i=1;i<=n;i++)
        {
            printf("%c",c);
            c++;
        }
        putchar('\n');
        n--;
    }while(n);
    return 0;
}