#include<stdio.h>
int main()
{
    int i,m,n,min;
    scanf("%d",&n);
    scanf("%d",&m);
    min =m;
    for(i=1;i<n;i++)
    {
        scanf("%d",&m);
        if(m<min)
            min =m;
    }
    printf("min = %d",min);
    return 0;
}