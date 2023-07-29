#include<stdio.h>
#include<stdlib.h>
int main()
{
    int lower,upper;
    scanf("%d %d",&lower,&upper);
    if(lower>upper || upper>100)
    {
        printf("Invalid.");
        exit(0);
    }
    printf("fahr celsius\n");
    do {
        {
            printf("%d%6.1f\n",lower,5.0*(lower - 32)/9);
            lower +=2;
        }
    }
    while(lower <= upper);
    return 0;
}