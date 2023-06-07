/*
 * 从键盘读入一行字符，《=127字节，统计冰输出其中字母数字空格和其他符号
 *
 */

#include<stdio.h>
int main()
{
    int i,zm = 0,sz = 0,kg = 0,qt = 0;
    char a1[128];
    printf("plz input string:");
    gets(a1);
    for(i = 0;a1[i] != '\0';i++)
    {
        if((a1[i]>='A'&&a1[i]<='Z') || (a1[i]>='a'&&a1[i]<='z'))
        {
            zm ++;
        }
        else if(a1[i]>='0'&&a1[i]<='9')
        {
            sz ++;
        }
        else if(a1[i] == 32)//空格为a1==32
        {
            kg ++;
        }
        else
        {
            qt++;
        }
    }
    printf("\nzimu=%d,shuzi=%d,kongge=%d,qita=%d\n",zm,sz,kg,qt);
    return 0;
}