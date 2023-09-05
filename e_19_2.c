//将两个字符串合并
#include<stdio.h>
#include<string.h>
void fun(char *s1,char *s2,char *s3)
{
    int i,j;
    for(i=0,j=0;(s1[i]!='\0') && (s2[i]!='\0');i++,j=j+2)
    {
        s3[j]=s1[i];
        s3[j+1]=s2[i];
    }
    if(s2[i]!='\0')
    {
        for(;s2[i]!='\0';i++,j++)
            s3[i]=s2[i];
    }
    else if(s1[i] != '\0')
    {
        for(;s1[i]!='\0';i++;j++)
            s3[j]=s1[i];
    }
    s3[j]='\0';
}
void main()
{
    char s1[128],s2[128],s3[255];
    printf("plz input string1:\n");
    gets(s1)    ;
    printf("plz input string2:\n");
    gets(s2);
    fun(s1,s2,s3);
    printf("string:\n",s3);
}