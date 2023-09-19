#include<stdio.h>
int fun(int x[],int n,int e,int *num)
{
    int i,s=0;
    *num=0;
    for(i=0;i<n;i++)
        if(x[i]%e==0)
        {
            s+=x[i];
            (*num)++;
        }
    return s;
}
int main()
{
    int x[]={1,9,8,6,12},num=0,sum;
    sum = fun(x,5,3,&num);
    printf("sum=%d,num=%d\n",sum,num);
    return 0;
}