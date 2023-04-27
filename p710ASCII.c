/*
 * 输入一个小写英文字母，首先输出他以及其ASCII码，然后输出其对应的大写字母及其ASCII码
 */

#include<stdio.h>
int main()
{
    char a,A;
    printf("Input a lowercase letter:");
    scanf("%c",&a);
    printf("%c(%d)\n",a,a);
    A = a-32;//A = a - ('a'-'A');
    printf("%c(%d)",A,A);
    return 0;

}