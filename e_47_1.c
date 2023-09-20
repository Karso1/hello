#include<stdio.h>
#include<string.h>
#define N 5
#define M  10
void fun(char (*ss)[M],int k)
{
    int i=0;
    while(i<N)
    {
        ss[i][k]='\0';
        i++;
    }
}

int main()
{
    char x[N][M]={"creat","zhan","sorta","asdaj","delete"};
    int i;
    printf("\nThe original string\n");
    for(i=0;i<N;i++)
        puts(x[i]);
    printf("\n");
    fun(x,4);
    printf("\nThe string after deleter:\n");
    for(i=0;i<N;i++)
        puts(x[i]);
    printf("\n");
    return 0;
}