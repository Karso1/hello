//将形参s所指字符串中所有数字字符顺序迁移，其他字符顺序后移
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char *fun(char *s)
{
    int i,j,k,n;
    char *p,*t;
    n = strlen(s)+1;
    t = (char*)malloc(n*sizeof(char));
    p = (char*)malloc(n*sizeof(char ));
    j = 0 ;
    k = 0;
    for(i=0;i<n;i++)
    {
        if(isdigit(s[i]))
        {
            p[j]=s[i];
            j++;
        }
        else
        {
            t[k]=s[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
        p[j+i]=t[i];
    p[j+k]=0;
    return p;
}
int main()
{
    char s[80];
    printf("plz input:\n");
    scanf("%s",s);
    printf("\nThe result is:%s\n",fun(s));
    return 0;
}