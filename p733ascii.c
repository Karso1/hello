/*
 * 从键盘读入一个任意字符，输出该字符ASCII的十六进制值
 */

#include<stdio.h>
int main()
{
    char i;
    printf("Input a character:");
    scanf("%c",&i);
    printf("Ascii('%c') = %#x",i,i);
    return 0;
}
//#o表示将变量a以8禁止形式输出
/*
 * #x表示以16进制输出
 * #表示输出八进制和十六进制前面的前导符，八进制前导符是0，16进制是0x
 * %x中的X大写表示将对金的十六进制中的字母大写
 */