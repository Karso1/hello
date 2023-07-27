/*
 * 最简真分数
 *
 * 给出n个正整数，任取两个数分别作为分子和分母组成最简真分数
 * 求共有几个这样的组合
 *
 * 输入：每组包含n（n<=60)和n个数，整数大于1且小于等于1000
 * 输出：每行输出最简真分数组合的个数
 */

#include<stdio.h>
int gcd(int x,int y)
{
    if(y==0)return x;
    else return gcd(y,x%y);
}
int main()
{
    //最简真分数的必要条件就是不可以继续约分，即分子和分母最大公约数为1
    int buf[605];
    int ans,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&buf[i]);
        ans = 0;//答案的个数
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(gcd(buf[i],buf[j])==1)
                    ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}