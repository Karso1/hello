/*
 * n由键盘输入
 * 求sn=a+aa+aaa+...+aaaa..aa(n个a），a为2
 */

//通过观察，个位的2出现过n次，十位的出现过n-1次

#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum *= 10;
        sum += 2 * (i+1);
    }
    printf("%d",sum);
    return 0;
}
