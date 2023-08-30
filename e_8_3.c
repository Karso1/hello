/*
 * 统计各年龄段的人数
 * N个年龄通过调用随机函数获得， 并放在主函数的age数组中
 * 要求函数把0——9年龄段的人放在d【0】中，10—19放在d【1】……
 * 100含以上放在d【10】
 */

#include<stdio.h>
#define N 50
#define M 11
void fun(int *a,int *b)
{
    int i;
    for(i=0;i<M;i++)
        b[i]=0;
    for(i=0;i<N;i++)
        b[*(a+i)/10 >10 ?  10  :  *(a+i)/10]++;
}
double rnd()
{
    static t =29,c=217,m=1024,r=0;
    r=(r*t+c)%m;
    return ((double)r/m);
}
int main() {
    int age[N], i, d[M];
    for (i = 0; i < N; i++) {
        age[i] = (int) (115 * rnd());
    }
    printf("The original data:\n");
    for (i = 0; i < N; i++)
        printf((i + 1) % 10 == 0 ? "%4d\n" : "%4d", age[i]);
    printf("\n");
    fun(age, d);
    for (i = 0; i < 10; i++)
        printf("%4d---%4d :  %4d\n",i*10,i*10+9,d[i]);
    printf("Over 100:%4d\n",d[10]);
    return 0;
}