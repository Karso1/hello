/*
 * 从键盘读入cBegin和iCount，输出《=cBegin的iCount个字符
 */

#include<stdio.h>
int main()
{
    int m,i;
    char cb;

    printf("plz input a char and a number:");
    scanf("%c %d",&cb,&i);

    m = cb - i ;

    printf("Result:");

    for(;cb > m ; cb --)
    {
        printf("%c",cb);
    }
    putchar('\n');
    return 0;
}