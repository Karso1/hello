#include<stdio.h>

char *strcopy(char *s1,char *s2)
{
    int i;
    char *res = s1;
    for(i=0;s2[i] != '\0';i++)
        s1[i] = s2[i];
    s1[i] = '\0';
    return res;
}

int main()
{
    char ch1[25];
    strcopy(ch1,"12adsaj");
    puts(ch1);


    char ch[5][100] = {"fasdh","asdais","dasidj","daidazj","oiafoj"};
    char *p[5] = {ch[0],ch[1],ch[2],ch[3],ch[4]};
    char *t;
    int n,m,i;
    for(n=0;n<5;n++)
    {
        for(m=n+1;m<5;m++)
        {
            if(strcmp(p[n],p[m])>0)
            {
                t = p[n];
                p[n] = p[m];
                p[m] = t;
            }
        }
    }
    for(i=0;i<5;i++)
        puts(p[i]);
    return 0;



    return 0;
}

#include<string.h>

