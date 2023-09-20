#include<stdio.h>
#define max 100
int fun(int xxx[])
{
    int i,j,l,k=0;
    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            if(j!=i)
            {
                for(l=1;l<5;l++)
                {
                    if(l!=j && l!=i)
                    {
                        xxx[k++]=i*100+j*10+l;
                    }
                }
            }
        }
    }
    return k;
}
int main()
{
    int xx[max],cnt;
    cnt = fun(xx);
    printf("%d\n",cnt);
    return 0;
}
