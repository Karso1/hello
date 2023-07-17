/*
 * 将10进制数转换成x进制，通用版，包括16进制
 */

#include<stdio.h>
int main()
{
    int n,x;
    char s[105];//十进制以上有字符所以用char存储
    //输入10进制n和要转换的进制x
    scanf("%d %d",&n,&x);
    int cnt =0;//数组下标
    while(n>0)
    {
        //将n诸位分解
        int w = (n%x);
        if(w<10)
            s[cnt++] = w+'0';//变成字符需要加0
            else s[cnt++] = (w - 10)    +'A';//如果转换成小写则加a
            //如果大于10则从A字符开始
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