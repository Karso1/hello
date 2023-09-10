//统计出x所指数组中偶数的个数并返回，偶数的平均值放在ave里

#include<stdio.h>
#define N 8
int fun(int x[],double *ave)
{
    int i,n=0;
    *ave = 0;
    for(i=0;i<N;i++)
        if(x[i]%2==0)
        {
            n++;
            *ave += x[i];
        }
    *ave/=n;
        return n;

}
int main()
{
    int x[N]={12,5,4,4,513,52,512,124,421,12},n;
    double ave;
    n = fun(x,&ave);
    printf("n = %d,ave = %lf\n",n,ave);
    return 0;
}