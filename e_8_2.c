//将b数组逆序排序，然后将ab数组交叉合并到c数组
#include<stdio.h>
#include<string.h>
void fun(char *a,char *b,char *c)
{
    int i,j;
    char ch;
    i=0;
    j=strlen(b)-1;
    while(i<j)
    {
        ch = b[i];
        b[i]=b[j];
        b[j]=ch;
        i++;
        j--;
    }
    while(*a||*b)
    {
        if(*a)
        {
            *c=*a;
            c++;
            a++;
        }
        if(*b)
        {
            *c=*b;
            c++;
            b++;
        }
    }
    *c=0;
}

int main()
{
    char s1[100],s2[100],t[200];
    printf("Enter s1 string:");
    scanf("%s",s1);
    printf("\nEnter s2 string:\n");
    scanf("%s",s2);
    fun(s1,s2,t);
    printf("The result is:%s\n",t);
    return 0;
}