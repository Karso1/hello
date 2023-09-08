#include<stdio.h>
#include<ctype.h>
void fun(char ch)
{
    char t[3];
    int i;
    t[1]=ch;
    if(ch=='Z')
    {
        t[2]='A';
        t[0]='Y';
    }
    else if(ch =='A')
    {
        t[2]='B';
        t[0]='Z';
    }
    else
    {
        t[0]=ch-1;
        t[2]=ch+1;
    }
    for(i=0;i<3;i++)
        putchar (t[i]);
    putchar('\n');
}
int main()
{
    char c;
    do {
        printf("enter a upper letter:");
        c= getchar();
        getchar();
    }
    while(!isupper(c));
    fun(c);
    return 0;
}