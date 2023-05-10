/*
 * 从键盘输入两个字符cBegin和cEnd的所有字符
 * 要求输出>=cBegin且<=cEnd的所有字符
 */

#include<stdio.h>

int main(void)
{
    char cb, cg;

    printf("Please Input two char: ");
    scanf("%c%C", &cb, &cg);

    printf("\nResult: ");

    for (; cb <= cg ; cb ++)
    {
        printf("%c", cb);
    }
    putchar('\n');

    return 0;
}

