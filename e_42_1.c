#include<stdio.h>
int fun(int *c,int d)
{
    int s0,s1,i;
    s0=0;
    s1=0;
    for(i=0;i<d;i++)
    {
        if((i%2==0)&&(c[i]%2==0))
            s0+=c[i];
        if((i%2==1)&&c[i]%2==1)
            s1+=c[i];
    }
    return s0-s1;
}
int main()
{
    int i,c[100],d;
    printf("plz input n:\n");
    scanf("%d",&d);
    printf("plz input %d number:\n",d);
    for(i=0;i<d;i++)
        scanf("%d",&(c[i]));
    i=fun(c,d);
    printf("%d",i);
    return 0;
}