//找出n所有因子，统计因子个数，判断n是否为完数
//完数就是因子之和为其本身，比如6=1+2+3

#include<stdio.h>
int fun(int n,int a[],int *k)
{
    int m=0,i,t;
    t = n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a[m]=i;
            m++;
            t=t-i;
        }
    }
    *k=m;
    if(t==0)
        return 1;
    else
        return 0;
}

int main()
{
    int n,a[10],flag ,i,k;
    printf("plz enter a interger:\n");
    scanf("%d",&n);
    flag = fun(n,a,&k);
    if(flag)
    {
        printf("%d is a wanshu,and the yinzi is:\n",n);
        for(i=0;i<k;i++)
            printf(" %d",a[i]);
        printf("\n");
    }
    else
        printf("%d is not a wanshu\n");
    return 0;
}