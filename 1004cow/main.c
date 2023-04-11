//1012关系表达式（&，|，~  ）和逻辑表达式（&&，||）的值是0或1
//1013  (int)(11.0/3+0.5)结果是4
//1014  float）（1/a的值0.当a等于2.   1/2是整型，向下取整，0.5是0.  0的浮点型还是0
//1015  float强制转换成int采取的是只保留整数部分的方式，正数向下，负数向上
//1016  定义数组时，方括号里必须是常量
//1017  定义数组a，可以对a进行初始化的语句格式 int a[3]={0,1,2};
//1018  定义一维数组： #define N 10    \n  int a【N]
//1019  数组的下表是0-9（10-1），下标最大减一。也就是说是a[0 ]--a[9]
//1020  i=10，a[a[i]]，就是先看a[10]，在看外层.注意第一个是从0开始的

//有一头母牛，他每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。求在n年的时候，有多少头母牛
//输入数据有多个测试实例组成，每个测试实例占一行，包括一个证书n（0<n<55)。n为0表示输入数据的结束，不做处理
//对每个测试实例，输出在第n年的时候母牛的数量，每个输出占一行

/*思路：第n年的母牛的来源分别来自于前一年剩下的和往前推3年的母牛（能生的母牛，最早的也算在里面
 *第五年的六头=第四年剩下的四头牛+第二年新产的母牛刚具有生育能力生下的一头+最早的母牛一头
 * fn= n（n≤3）   f（n-1）+f（n-3），n>3
 * 注意测试用的是多组，想办法循环输入并输出。注意程序运行程序的条件结束是输入0。注意递归方法的脱出条件是n≤3
 */
#include<stdio.h>
int fun(int n)
{
    if(n<=3) return n;
    else return fun(n-1)+fun(n-3);
}
int main()
{
    int n;
    while(scanf("%d",&n) &&n )
        printf("%d\n",fun(n));

    return 0;
}