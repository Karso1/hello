/*
 * 从键盘输入5个字符串，
 * 每个字符串字符数<=80字节，并对其进行升序排序并输出
 */
#include<string.h>
#include<stdio.h>
int main()
{
    int i,j;
    char a1[5][81],zj[81];
    printf("input 5 strings:\n");
    for(i=0;i<5;i++)
    {
        gets(a1[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(a1[i],a1[j])>0)
            {
                strcpy(zj,a1[j]);
                strcpy(a1[i],a1[j]);
                strcpy(a1[j],zj);
            }
        }
    }
    printf("-----------------\n");
    for(i=0;i<5;i++)
    {
        puts(a1[i]);
    }
    return 0;
}