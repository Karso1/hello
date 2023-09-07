#include<stdio.h>
#include<string.h>
void fun(char *sp,int *ct)
{
    int i;
    ct[0]=0;
    ct[1]=0;
    ct[2]=0;
    for(i=0;sp[i];i++)
    {
        if(sp[i]=='e'&&sp[i+1]=='a') ct[0]++;
        if(sp[i]=='o'&&sp[i+1]=='u')    ct[1]++;
        if(sp[i]=='i'&&sp[i+1]=='u')    ct[2]++;
    }
}
int main()
{
    char txt[200]="abasiodaskdjaleaeuesodueueeuasojdc";
    int c[3];
    fun(txt,c);
    printf("%d,%d,%d\n",c[0],c[1],c[2]);
    return 0;
}