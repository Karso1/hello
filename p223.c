/*
 * 一个球从1万米高度自由落下，每次落地后反弹回原高度的一半，在落下再反弹，求他在第n次谈多高
 */

#include<stdio.h>
int main()
{
    int n,i;
    double ss = 10000,hh =5000;
    printf("plz input n:");
    scanf("%d",&n);
    for(i =2;i<=n;i++)
    {
        ss = ss + 2 * hh  ;
        hh = hh/2;

    }
    printf("\nsn = %f,hn = %f",ss,hh);
    return 0;
}