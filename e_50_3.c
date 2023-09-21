#include<stdio.h>
#include<math.h>
int prime(int m)
{
    int k,flag=1;
    for(k=2;k<(int)sqrt((double)m);k++)
        if(m%k==0)
            flag=0;
        return flag;
}

int fun(int n,int *x,int *y)
{
    int k,flag=0;
    int k2;
    k=2;
    do {
        k2=n/k;
        if(k*k2==n)
            if(prime(k)&&prime(k2)&&k<k2)
            {
                flag=1;
                *x=k;
                *y=k2;
                break;
            }
        k+=1;
    }
    while(k<k2);
    return flag;
}
int main()
{
    int a,b;
    FILE *out;
    out = fopen("out.dat","w");
    if(fun(111,&a,&b))
    {
        printf("111=%d*%d\n",a,b);
        fprintf(out,"111=%d*%d\n",a,b);

    }
    if(fun(11111,&a,&b))
    {
        printf("11111=%d*%d\n",a,b);
        fprintf(out,"qqqqq=%d*%d\n",a,b);

    }
    if(fun(111111,&a,&b))
    {
        printf("111111=%d*%d\n",a,b);
        fprintf(out,"111111=%d*%d\n",a,b);

    }
    fclose(out);
    return 0;
}