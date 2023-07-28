#include<stdio.h>
int main()
{
    int ele;
    float cost;
    scanf("%d",&ele);
    if(ele <= 50)
    {
        cost = ele*0.53;
    }
    else
        cost = 50*0.53+(ele-50)*(0.53+0.05);
    if(ele>=0)
    {
        printf("cost = %.2f",cost);
    }
    else
        printf("Invalid Value!\n");
    return 0;
}