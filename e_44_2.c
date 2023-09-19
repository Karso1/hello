#include<stdio.h>
#include<string.h>
#define N 5
#define M 81
char *fun(char (*sq)[M])
{
    int i;
    char *sp;
    sp = sq[0];
    for(i=0;i<N;i++)
        if(strlen(sp)<strlen(sq[i]))
            sp=sq[i];
        return sp;
}

int main()
{
    char str[N][M],*longest;
    int i;
    printf("Enter %d lines :\n",N);
    for(i=0;i<N;i++)
        gets(str[i]);
    printf("\nThe N string:\n",N);
    for(i=0;i<N;i++)
        puts(str[i]);
    longest=fun(str);
    printf("\nThe longest string:\n");
    puts(longest);
    return 0;
}