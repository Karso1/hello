#include<stdio.h>
#include<string.h>
void fun(char *s1,char *s2,char *s3)
{
    int i,j,k=0;
    for(i=0;i<strlen(s2);i++)
    {
        for(j=0;j<strlen(s1);j++)
            if(s2[i]==s1[j])
                break;
            if(j<strlen(s1))
                s3[k++]=s2[i];
    }
    s3[k]='\0';
}

void main   ()
{
    char s1[128],s2[128],s3[128];
    printf("plz input string:\n");
    gets(s1);
    printf("plz input string2:\n");
    gets(s2);
    fun(s1,s2,s3);
    printf("%s\n",s3);

}