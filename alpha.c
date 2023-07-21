/*
 * 函数int_my_isalpha（char c）的功能时返回字符的种类，大写字母返回1，小写字母-1.其他0
 * 函数void a（）调用my_isalpha()，根据其返回值决定输出是大写字母输出*，小写#，其他？
 */

#include<stdio.h>
void main()
{
    a();
}
int my_isalpha(char c)
{
    if(c>='A'&&c<='Z') return 1;
    else if(c>='a'&&c<='z') return -1;
    else return 0;
}
void a()
{
    char ch;
    int sort;
    printf("plz input ur singal:\n");
    do
    {
        ch = getchar();
        if(ch!='\n')
        {
            sort = my_isalpha( ch);
            switch(sort)
            {
                case 1:printf("%c",'*');break;
                case -1:printf("%c",'#');break;
                case 0:printf("%c",'?');
            }
        }
    }
    while(ch != '\n');
    printf("%c",'\n');
}