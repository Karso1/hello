/*
 * 将十进制整数转化成2进制整数
 * 如：7转换成111
 *
 * 10进制转换成x进制，x<10
 */

#include<stdio.h>
int main()
{
    int n,x;
    int s[105];
    //输入10进制n和要转换的进制x
    scanf("%d%d",&n,&x);
    //n = 123, x= 2;
    int cnt = 0;
    while(n>0)
    {
        //将n进行诸位分解
        int w = (n%x);
        //w = 123%2 == 1
        s[cnt++]=w;
        //将得到的w=1赋值给数组中的第一个元素，下标为0
        // 运行之后cnt++，代表第二个元素
        n /= x;
        //n=123/2=61
    }
    //反序输出
    for(int i =cnt - i;i>=0;i--)
    {
        printf("%d",s[i]);
    }
    printf("\n");
    return 0;
}