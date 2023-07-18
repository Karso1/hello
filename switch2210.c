/*
 * 2 to 10
 */
#include<string.h>
#include<stdio.h>
int main()
{
    char s[105];
    scanf("%s",&s);
    int ans = 0;
    int len = strlen(s);
    for(int i =0;i<len;i++)
    //当i小于字符串长度时进入循环，比如输入1101，len=4
    {
        if(s[i]=='0')
        {
            ans = ans *2;//2进制中为0即，0*2的n次方，即ans=ans*2，
        }
        else
        {
            ans = ans*2 + 1;//二进制为1进入else循环，
        }
    }
    printf("%d\n",ans);
    return 0;
}