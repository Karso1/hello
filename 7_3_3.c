#include<stdio.h>
#include<string.h>
int main()
{
    char c[81];
    int count = 0;
    gets(c);
    for(int i =strlen(c)-1;i>=0;i--)
        if(c[i]>='A' && c[i]<='Z')
            if(c[i]!='A' && c[i]!='E' &&c[i]!='I'&&c[i]!='0'&&c[i]!='U')
                count++;
            printf("%d",count);
            return 0;
}