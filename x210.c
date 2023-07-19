/*
 * x210
 */
#include<string.h>
#include<stdio.h>
int main()
{
    char s[105];
    int x;
    //输入x进制字符串和代表的进制x
    scanf("%s %d",&s,&x);
    int ans = 0;
    int len = strlen(s);
    for(int i =0;i<len;i++)
    {
        ans = ans*x;
        if(s[i]>='0' && s[i]<= '9')
        {
            ans += (s[i]-'0');
        }
        else
            ans += (s[i]-'A')+10;
    }
    printf("%d\n",ans);
    return 0;
}