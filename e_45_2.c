#include<stdio.h>
#include<string.h>
char *fun(char *s1,char *s2,char *r)
{
    int len,cy=0,md;
    char *p,*q,*t;
    len = strlen(s1);
    p = s1+len-1;
    q=s2+len-1;
    t=r+len;
    *(t+1)='\0';
    while(p>=s1)
    {
        md=*p+*q-'0'*2+cy;
        if(md>=10)
            cy=1;
        else cy=0;
        *t = md%10+'0';
        p--;
        q--;
        t--;
    }
    if(cy==1)
        *t='1';
    else
    {
        while(*r++ = *++t)

    }
    return r;
}

void main()
{
    char s1[100],s2[100],s3[101];
    strcpy(s1,"65411");
    strcpy(s2,"81921");
    fun(s1,s2,s3);
    printf("%s+%s=%s\n",s1,s2,s3);

}