/*
 * 题目描述：
 * S=n^5，求Sn除以3的余数
 *
 * 输入描述：
 * 每行输入一个整数n，（0<n<1000000)
 *
 * 输出描述：
 * 输出Sn%3的结果并换行
 *
 * 分析：
 * 通过分析我们可以发现，n虽然不大，但是n^5却超过long long的范围，所幸的是题目只要我们对答案 %3
 * 这时哦我们可以运用同余模定理
 * s%3 = （n^5）%3
 *     =  （n*n*n*n*n)%3
 *     =  ((n%3)*(n%3)*(n%3)*(n%3)*(n%3))%3
 */

#include<stdio.h>
int main()
{
    long int n;
    while(scanf("%ld",&n))
    {
        long long int s= n;
        for(int i=1;i<5;i++)
        {
            s=((s%3)*(n%3));
        }
        printf("%ld\n",s%3);
    }
    return 0;
}