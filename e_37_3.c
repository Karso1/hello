#include<stdio.h>
#include<stdlib.h>
#define M 14
void fun(char (*t)[M],int *a,int *c)
{
    int i,j;
    *a=0;
    *c=0;
    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
        {
            if(t[i][j]==67)
            {
                *c=*c+1;
            }
            else if(t[i][j]==65)
            {
                *a=*a+1;
            }
            else
                continue;
        }
    }
}
void get(char (*s)[M])
{
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
        {
            s[i][j]=65+rand()%12;
            printf("%c",s[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char a[M][M];
    int x,y;
    get(a);
    fun(a,&x,&y);
    printf("A=%d C=%d\n",x,y);
    return 0;
}