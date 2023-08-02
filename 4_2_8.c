#include<stdio.h>
int main()
{
    int n,j,i = 0,a[11] = {0};
    scanf("%d",&n);
    do {
        i++;
        a[i] = n%10;
        n = n /10;
    }while(n);
    for(j=i;j>0;j--)
        printf("%d",a[j]);
    return 0;
}