/*
 *  2进制转换成10
 */
#include<string.h>
#include<stdio.h>
int main() {
    char s[105];
    //输入二进制字符串；
    scanf("%s", &s);
    int ans = 0;
    int len = strlen(s);//读取字符串的长度
    for (int i = 0; i < len; i++) //当i小于字符串长度时进入循环
    {
        if (s[i] == '0')
        {
            ans = ans * 2;
            //假设s为1101
            //第三次循环，为0，则ans=3*2=6
        }
        else
        {
            ans = ans * 2 + 1;
            //第一次循环下标第一的为1，ans=0*2+1=1
            //第二次循环为1，ans=1*2+1=3
            //第四次循环为1，ans=6*2+1=13
        }
    }
    printf("%d\n", ans);
    return 0;
}