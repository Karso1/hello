/*
 * 从键盘输入两个字符cBegin和cEnd
 * 要求输出<=cBegin&&>=cEnd的所有字符
 *
 */

#include<stdio.h>
int main()
{
    char cb,cg;

    printf("plz input two char:");
    scanf("%c%c",&cb,&cg);
    printf("\nResult:");
    for (;cb >= cg; cb --)
    {
        printf("%c",cb);
    }
    putchar('\n');
    return 0;
}