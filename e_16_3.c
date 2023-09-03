/*
 * 移动字符串中的内容
 * 将第1个到第m个字符平移到字符串的最后哦，把第m+1到最后的字符移动到字符串的前部
 *
 */

#include<stdio.h>
#include<string.h>
#define N 80
void fun1(char *w)//将字符串中字符循环左移一个位置
{
    int i;
    char t;
    t=w[0];
    for(i=0;i<(int)strlen(w)-1;i++)
    {
        w[i] = w[i+1];
    }
    w[strlen(w)-1]=t;
}
void fun(char *w,int m)
{
    int i=0,x,j;
    char ch;
    for(j=0;w[j];j++)
        i++;
    for(x=0;x<m;x++)
    {
        ch = w[0];
        for(j=1;j<i;j++)
        {
            w[j-1]=w[j] ;
        }
        w[i-1]=ch;
    }
}

int main()
{
    char a[N]="ABCDEFGHIJK";
    int m;
    printf("The original string:\n");
    puts(a);
    printf("\nEnter m:");
    scanf("%d",&m);
    fun(a,m);
    printf("\nThe string after moving:\n");
    puts(a) ;
    return 0;
}