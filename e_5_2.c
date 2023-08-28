#include<stdio.h>
int my_isalpha(char c)
{
    if(c>='A'&&c<='Z')
        return 1;
    else if(c>='a'&&c<='z')
        return -1;
    else return 0;
}
void a()
{
    char ch;
    int sort;
    printf("input the string:\n");
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
    while(ch!='\n');
        printf("%c",'\n');
}
void main()
{
    a();
}