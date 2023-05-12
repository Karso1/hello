/*
 * 从键盘读入一个字符cBegin和iCount
 * 要求输出》=cBegin的iCount个字符
 */

#include<stdio.h>
int main()
{
    int i,m;
    char cb;
    printf("plz input a char and a number:");
    scanf("%c %d",&cb,&i);
    m = cb +i;

    printf("\nresult:");

    for(;cb<m;cb++)
    {
        printf("%c",cb);
    }
    putchar('\n'
            );
    return 0;

}