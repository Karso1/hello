#include<stdio.h>
#include<string.h>
void fun(char *s1,char *s2,char *s3)
{
    int i,j,L2;
    L2 =strlen(s2);
    for(i=0,j=0;(s1[i]!='\0')&&(s2[i]!='\0');i++,j=j+2)
    {
        s3[j]=s1[i];
        s3[j+1]=s2[L2-1-i];
    }
    if(s1[i]!='\0')
        for(;s1[i]!='\0';i++,j++)
            s3[j]=s1[i];
        else if(s2[i]!='\0')
            for(;s2[i]!='\0';i++,j++)
                s3[j]=s2[L2-1-i];
            s3[j='\0';
}

int main()
{
    char s1[128],s2[128],s3[255];
    printf("Plz input string:\n");
    gets(s1);
    printf("plz input string22:\n");
    gets(s2);
    fun(s1,s2,s3);
    printf("string %s\n",s3);
    return 0;
}