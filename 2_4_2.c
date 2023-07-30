#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,i=0;
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        y = pow(3,i);
        printf("pow(3,0)=%d\n",y);
    }
    return 0;
}