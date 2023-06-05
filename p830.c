/*
 * 求1+2+3……+n<=m时的最大n和sum
 * 其中m从键盘输入。不得使用解方程，算平方根
 */

#include<stdio.h>
int main()
{
    int sum = 0,m,n,i;
    printf("plz input m:");
    scanf("%d",&m);

    for(i=1; ; i++)
    {
        sum = sum + i;
        if(sum > m)
        {
            break;
        }
    }
    sum = sum - i;
    n = i - 1;

    printf("\nresult : n = %d,sum = %d",n,sum);
    return 0;
}
