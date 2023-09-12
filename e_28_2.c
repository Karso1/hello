#include<stdio.h>
#include<string.h>
void fun(char *str,int *c0,int *c1)
{
    int k;
    *c0=*c1=0;
    for(k=0;k<strlen(str);k++)
    {
        if((str[k]>='A')&&(str[k]<='Z'))
            (*c0)++;
        if((str[k]>='a')&&(str[k]<='z'))
            (*c1)++;
    }
}
int main()
{
    char str[100];
    int c0,c1;
    printf("input string:\n");
    scanf("%s",str);
    fun(str,&c0,&c1);
    printf("c0 = %d,c1=%d",c0,c1);
    return 0;
}