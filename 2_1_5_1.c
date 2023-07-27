/*
 * 根据用户输入的数字和需要计算的幂次数，编写一个求幂函数结果的函数
 */

#include<stdio.h>
int mi(int x,int n)
{
    int y=1,i=0;
    for(i=0;i<n;i++)
    {
        y *= x;
    }
    return y;
}
int main()
{
    int a,b;
    printf("plz input 2 number:\n");
    scanf("%d %d",&a,&b);
    printf("%d",mi(a,b));
    return 0;
}