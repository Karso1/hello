#include<stdio.h>
int fun(int m)
{
    int k =2;
    while(k<=m && (m%k))
        k++;
    if(m==k)
        return 1;
    else return 0;
}
int main()
{
    int n;
    printf("\nPlz enter n:\n");
    scanf("%d",&n);
    if(fun(n))
        printf("YES\n");
    else printf("NO!\n");
    return 0;
}