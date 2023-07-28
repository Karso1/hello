/*
 * 如何判断一个数是否为素数
 * 若是，输出该数，否则输出大于该整数的第一个素数
 *
 * 根据素数的定义从2到小于这个数x的每个数取除，看是否能除尽
 * 一般情况下我们只需要判断到sqrt（x）就停止了
 * 因为能比sqrt（x）大的数能除尽，就必然存在一个比sqrt（x）小的数能除尽
 *
 * 首先判断输入的n是不是一个素数
 * 不是则从n+1开始诸葛判断
 */
#include<math.h>
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 1) n++;//1不是素数
    for(int i=n;;i++)
    {
        int flag = 0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j == 0)
            {
                //如果找到了月数
                flag = 1;//说明不是素数
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}