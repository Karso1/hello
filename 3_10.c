#include<stdio.h>
int main()
{
    int v,limv;
    scanf("%d %d",&v,&limv);
    if((float)v /limv -1<0.1)
        printf("OK\n");
    else if((float)v / limv -1<0.5)
        printf("Exceed %.0f%%.Ticket 200",((float)v/limv-1)*100);
    else
        printf("Exceed %.0f%%.Liceense Revoked",((float)v/limv-1)*100);
    return 0;
}