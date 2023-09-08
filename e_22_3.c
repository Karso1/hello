#include<stdio.h>
void fun(int x,int pp[],int *n)
{
    int i,k,j=0;
    for(i=1;i<=x;i+=2)
    {
        if((x%i)==0)  pp[j++]=i;
        *n=j;
    }
    for(i=0;i<j-1;i++)
        for(k=i+1;k<j;k++)
            if(pp[i]>pp[k])
            {
                x=pp[i];
                pp[i]=pp[j];
                pp[j]=x;
            }
}
int main()
{
    int x,aa[1000],n,i;
    printf("\nplz enter an integer number:\n");
    scanf("%d",&x);
    fun(x,aa,&n);
    for(i=0;i<n;i++)
        printf("%d",aa[i]);
    printf("\n");
    return 0;
}