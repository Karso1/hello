#include<stdio.h>
#include<string.h>
#include<ctype.h>
int fun(char *s)
{
    char *lp,*rp;
    lp=s;
    rp = s+strlen(s)-1;
    while((toupper(*lp)==toupper(*rp)) && (lp<rp))
    {
        lp++;rp--;}
        if(lp<rp) return 0;
        else return 1;

}
int main()
{
    char s[81];
    printf("Enter a string: ");
    scanf("%s",s);
    if(fun(s))
        printf("\n%s is\n",s);
    else printf("%s is not ",s);
    return 0;
}