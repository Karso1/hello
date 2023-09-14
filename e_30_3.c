#include<stdio.h>
#include<string.h>
#define M 3
#define N 20
void fun(char a[M][N],char *b)
{
    int i,j,d=0;
    for(i=0;i<100;i++)
        b[i]=0;
    for(i=0,d=0;i<3;i++)
        for(j=0;*(a[i]+j);j++)
        {
            *(b+d)=*(a[i]+j);
            d++;
        }
}
int main()
{
    char w[M][N] = {"AAAA","BBBBBBB","CC"},a[100];
    int i;
    printf("The string:\n");
    for(i=0;i<M;i++)
        puts(w[i]);
    printf("\n");
    fun(w,a);
    printf("The A string:\n");
    printf("%s",a);
    printf("\n\n");
    return 0;
}