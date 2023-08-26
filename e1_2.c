/*
 * 将字符串a的所有字符复制到字符串b中
 * 要求每复制三个字符之后插入一个空格
 */

#include<stdio.h>
void fun(char *p,char *b);
int main()
{
    char a[80],b[80];
    printf("Enter a string:");
    gets(a);
    printf("The original string:");
    puts(a);
    fun(a,b);
    printf("\nThe string after insert space:");
    puts(b);
    printf("\n\n");
    getchar();
    return 0;
}
void fun(char *p,char *b)
{
    int i,k=0;
    while(*p)
    {
        i=1;
        while(i<=3 && *p)
        {
            b[k]=*p;
            k++;
            p++;
            i++;
        }
        if(*p)
            b[k++] = ' ';
    }
    b[k]= '\0';
}