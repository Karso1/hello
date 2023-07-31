#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
   /*
    if(n<=5)
    {
        if(x-3<=0)
            printf("Fishing in day %d",n);
        else
            printf("Drying in day %d",n);
    }
    else
    */
    {
        x = n%5;
        if(x==0)
            printf("Drying in day %d",n);
        else if(x-3<=0)
            printf("Fishing in day %d",n);
        else
            printf("Drying in day %d",n);
    }
    return 0;
}