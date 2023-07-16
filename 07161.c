/*
 * 水仙花数
 * 利用fun函数求出所有满足条件的三位数，存放到形参n所指的组中，并返回这些数的个数
 * 这些三位数等于他各个位上数字的立方和
 * 如，153=1*1*1+5*5*5+  3*3*3
 */

#include<stdio.h>
int cube(int n)
{
    return n*n*n;
}
int fun(int *n)
{
    int a,b,c,i,k=0;
    for(i=100;i<1000;i++)
    {
        a = i/100;//百位
        b = i/10%10;//十
        c = i%10;//个位

        if(cube(a)+cube(b)+cube(c) == i)
        {
            n[k]=i;
            k++;
        }
        return k;//数组中存的元素的个数
    }
}
int main()
{
    int n[100],k,i;
    k = fun(n);
    for(i=0;i<k;i++)printf("%d", n[i]);
    printf("\n");

}