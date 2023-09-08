//在字符串的最前端假如n个*号，形成新串并将原串覆盖
#include<stdio.h>
#include<string.h>
void fun(char s[],int n)
{
    char a[80],*p;
    int i;
    p = s;
    for(i=0;i<n;i++)
        a[i]='*';
    do {
        a[i]=*p;
        i++;
    }
    while(*p++);
    a[i]=0;
    strcpy(s,a);
}
int main()
{
    int n;
    char s[80];
    printf("\nEnter a string:\n");
    gets(s);
    printf("\nThe string %s\n",s   );
    printf("\nEnter n number of*:\n");
    scanf("%d",&n);
    fun(s,n);
    printf("\nThe string after insert:%s\n",s);
    return 0;
}