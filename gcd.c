/*
 * 最大公约数gcd
 */

#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n",gcd(x,y));
}
int gcd(int a,int b)
{
    if(b == 0) return a;
    else return gcd(b,a%b);//递归，当a为5，b为3，继续调用函数gcd（3，2）
    //递归1，3%2=1，调用gcd（2，1）
    //递归2，2%1=0，调用gcd（1，0）
    //递归3，b == 0，return a 1
}