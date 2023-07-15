/*
 * 反序数：输入一个整数如123，将其转换为反序之后输出321
 */

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans = 0;//将反序之后的答案存在这里
    while(n>0)
    {
        //将n逐个分解
        ans *= 10;//ans将刚刚得到的个位数字*10，第二次循环将得到的两位数字同时*10，以此类推
        ans += (n%10);//123对10取余得到3给ans
        n /= 10;//n/10，消掉此时个位数字
    }
    printf("%d\n",ans);
    return 0;
}