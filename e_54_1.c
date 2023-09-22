#include<stdio.h>
struct pair
{
    int n1,n2;
};

struct pair fun(int *c,int d)
{
    int i;
    struct pair p;
    p.n1=p.n2=0;
    for(i=0;i<d;i++)
    {
        if(c[i]%2==0)
            p.n1++;
        else
            p.n2++;
    }
    return p;
}

int main()
{
    int i,c[100],d;
    struct pair p;
    printf("plz input number:\n");
    scanf("%d",&d);
    printf("plz input %d numbers:\n",d);
    for(i=0;i<d;i++)
        scanf("%d",&(c[i]));

    p=fun(c,d);
    printf("n1=%d,n2=%d",p.n1,p.n2);
    return 0;
}