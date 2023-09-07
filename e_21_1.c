/*
 * 找到一组数据中最小的元素并于第一个元素交换
 */

#include<stdio.h>
void fun(int *dt,int n)
{
    int i,m,t;
    m=0;
    for(i=1;i<n;i++)
        if(dt[i]<dt[m])
            m=i;
        t = dt[0];
        dt[0]=dt[m];
        dt[m]  = t;
}
int main()
{
    int a[10]={30,20,14,41,421,41};
    int i,n=6;
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    printf("\n");
    fun(a,n);
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    printf("\n");
    return 0;
}