#include<stdio.h>
#include<string.h>
#define N 5
#define M 15
void fun(char (*ss)[M],char * substr)
{
    int i,find =0;
    for(i=0;i<N;i++)
    {
        if(strstr(ss[i],substr)!=NULL)
        {
            find =1;
            puts(ss[i]);
            printf("\n");
        }
    }
    if(find ==0)
        printf("\nDon't found!\n");


}

int main()
{
    char x[N][M]={"dajda","dasijw","ADIJq","dij","daijw"},str[M];
    int i;
    printf("\nThe original string:\n");
    for(i=0;i<N;i++)
        puts(x[i]);
    printf("\n");
    printf("\nEnter a string for search :");
    gets(str);
    fun(x,str);
    return 0;
}