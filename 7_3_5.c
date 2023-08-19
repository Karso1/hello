/*
 * 顺序输出给定字符串中所出现过的大写英文字母，每个字母只输出一边
 */
#include<stdio.h>
#include<string.h>
int main()
{
    char a[81],c[81];
    int flag1 = 0,flag2 = 0,count = 0;
    gets(a);
    for(int i =0;i<strlen(a);i++)
        if(a[i]>='A' && a[i]<='Z')
        {
            flag2 = 1;
            for(int j =0;j<count;j++)
                if(c[j]==a[i])
                    flag1 = 1;
                if(flag1 == 0)
                {
                    c[count]=a[i];
                    printf("%c",a[i]);
                    count++;
                }
                flag1 = 0;
        }
    if(flag2 == 0)
        printf("Not Found\n");
    return 0;
}