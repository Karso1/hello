//数数用于判断这是一个多少位的数字。
//if while语句。直到

#include<stdio.h>
int main()
{
    int x;//输入的数字
    int n=0;

    scanf("%d",&x);

    n++;//n每次加1，递增

    x/=10;
    while(x>0)
    {
        n++;
        x/=10;
    }

    printf("%d\n",n);
    return 0;
}