//输入两个整数ab，计算ab之和
//注意此题是计算多组测试数据，需要不停的接受系统的测试输入，都可以计算结果，而不是运行一次程序就结束了
//意味着有while语句
//输入格式：输入两个整数ab，范围不超过2^10
//输出格式：求A+B


#include<stdio.h>
int main()
{
    int a = 0,b = 0;
    while(~scanf("%d %d",&a,&b))//注意~，终止
    {
        printf("%d\n",a+b);
    }
    return 0;
}
//在win下，按ctrl+z会看到^z，停止入流，scanf返回-1
//－1的补码为11111111 11111111 11111111 1111111一共四个字节
//~是c语言中的按位取反，因此~（—1）结果是00000000 00000000 00000000 00000000刚好为整数0的补码
//因此输入ctrl+z的时候，scanf会返回-1，while（~-1）==while（0），0为假，推出while循环
