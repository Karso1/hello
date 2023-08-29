/*
 * 在p所指的字符串中找出ASCII码最大的字符，将其放啊在第一个位置上，并将该字符前的元字符向后顺序移动
 */


#include<stdio.h>
void fun(char *p)
{
    char max,*q;
    int i=0;
    max = p[i];
    q=p;
    while(p[i]!=0)
    {
        if(max<p[i])
        {
            max = p[i]
                    q =p+i;
        }
        i++;
    }
    while(q>p)
    {
        *q=*(q-1);
        q--;
    }
    p[0]=max;
}
int main()
{
    char str[80];
    printf("enter a string:");
    gets(str);
    printf("\nThe original string:");
    puts(str);
    fun(str);
    printf("\nThe string after moving:");
    puts(str);
    printf("\n");
    return 0;
}