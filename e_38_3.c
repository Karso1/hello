#include<stdio.h>
#include<stdlib.h>
#define N 15
int fun(int *s,int x)
{
    int i;
    for(i=0;i<N;i++)
    {
        if(s[i]==x)
            return 1;
    }
    return -1;
}
int main()
{
    int a[N]={123,3,12,3,4,1,4,123,421,523,4124,53,32,12,43},i,x,index;
    printf("array data are:\n");
    for(i=0;i<N;i++)
        printf("%4d",a[i]);
    printf("\n");
    printf("plz input index number:\n");
    scanf("%d",&x);
    index = fun(a,x);
    printf("index = %d\n",index);
    return 0;
}