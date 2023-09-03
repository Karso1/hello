#include<stdio.h>
//将形参dt0所指的具有*n0个数据的数组中，所有不等于x的数据重新保留在原数组
//并通过形参n0返回这些数据的个数

void fun(int *dt0,int *n0,int x)
{
    int i,j;
    i=0;j=0;
    do {
        if(dt0[i]!=x)
        {
            dt0[j]=dt0[i];
            j++;
        }
        i++;
    }
    while(i<*n0)
        *n0 = j;
}
int main()
{
    int d[10]={2,1,4,5,1,21,443,31,42,124},n=10,i;
    fun(d,&n,2);
    for(i=0;i<n;i++)
        printf("%d",d[i]);
    printf("\n");
    return 0;
}