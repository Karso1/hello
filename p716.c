/*
 * 求s=a+aa+aaa+aaaa+……
 * 其中a是1——9之间的一个数字
 */

#include<stdio.h>
#include<math.h>
int main()
{
    int a1,n,i;
    double sum = 0,m1,m2 = 0;

    printf("plz input a,n:");
    scanf("%d %d",&a1,&n);

    for(i = 0;i<n;i++)
    {
        m1= a1*pow(10,i);
        m2= m2+m1;
        sum = sum +m2;
    }
    printf("\na+aa+aaa+....=%.01f",sum);
    return 0;
}