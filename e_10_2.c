//y依次取出字符串中所有数字字符，形成新的字符串，并取代原字符串

#include<stdio.h>
void fun(char *s)
{
    int i,j;
    for(i=0,j=0;s[i]!='\0';i++)
        if(s[i]>='0'&&s[i]<='9')
            s[j++]=s[i];
        s[j]='\0';
}

int main()
{
    char item[80];
    printf("\nEnter a string:\n");
    gets(item);
    printf("\nThe string is :\"%s\"\n",item);
    fun(item);
    printf("\nThe string of changing is:\"%s\"\n",item);
    return 0;
}