/*
 * 统计出x所指数组中能被e整除的元素个数
 * 通过函数值返回
 * 同时计算不能被e整除的元素之和，放到形参sum所指的储存单元中


 */

#include<stdio.h>
#define N 10
int fun(int x[],int e,int *sum)
{
    int i,n=0;
    *sum =0;
    for(i=0;i<N;i++)
        if(x[i]%e==0)
    n++;
    else
        *sum+=x[i]  ;
return n;
}
int main()
{
    int x[N]={1,2,314,4,1,2,2,23,14,1,};
    int e =3,n,sum;
    n = fun(x,e,&sum);
    printf("n = %d,summ=%d\n",n,sum);
    return 0;
}
