#include<stdio.h>
#include<string.h>
#define maxn 81
int main()
{
    char c[maxn],ch[maxn] = {'\0'},temp;
    int flag = 1,index = 0;
    gets(c);

    for(int i = 0;i<strlen(c);i++)
    {
        for(int j =0;j<strlen(ch);j++)
        {
            if(c[i]==ch[j])
                flag = 0;
        }
        if(flag)
        {
            ch[index] = c[i];
            index++;
        }
        flag = 1;
    }

    //sort
    for(int i =0;i<strlen(ch);i++)
    {
        for(int j = i;j<strlen(ch);j++)
        {
            if(ch[i>ch[j]])
            {
                temp = ch[i];
                ch[i] = ch[j]   ;
                ch[j]=temp;
            }


        }
    }
    puts(ch);
    return 0;
}