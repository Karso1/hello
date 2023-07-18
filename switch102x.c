/*
 * 102x
 * 将10进制转换成x进制
 */

#include<stdio.h>
int main()
{
    int n,x;
    char s[105];
    //定义字符串数组存储数据，因为输入数为十进制，十进制数有字符，所以用char存储
    //输入10进制和需要转换的进制x
    scanf("%d %d",&n,&x);
    int cnt = 0;//cnt作为数组下标的代表
    while(n>0)
    {
        //将n进行诸位分解，
        int w = (n%x);//数字除以需要转换的进制x
        if(w<10)
            s[cnt++] = w +'0';//变成字符需要先加上一个0
            else s[cnt++] = (w-10)+'A';//如果规定转换成小写则加a
            //如果大于10则从A开始
            n /= x;
    }
    //反序输出
    for(int i =cnt -1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}