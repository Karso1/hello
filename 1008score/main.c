/*1051  a/=b 就是a=a/b
 *      switch遇到break才会跳出循环，否则一直执行接下来的循环
 *1060  ++i，在运算之前加1。    i++，运算之后加1
 */

//给出一百分制成绩，要求输出成绩等级,ABCDE，90及以上为A，80-89为B,70-79C,60-69D,60以下E

/*#include<stdio.h>
int main()
{
    int a;
    printf("plz type ur score:\n");
    scanf("%d",&a);
    switch(a/10)
    {
        case 10:
        case 9:printf("A");break;
        case 8:printf("B");break;
        case 7:printf("C");break;
        case 6:printf("D");break;
        default:printf("E");break;

        return 0;
    }

    return 0;
}*/

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>=90)
    {
        printf("A");
    }
    else if  (a>=80&&a<=89)
    {
        printf("B");
    }
    else if  (a>=70&&a<=79)
    {
        printf("C");
    }
    else if  (a>=60&&a<=69)
    {
        printf("D");
    }
    else printf("E");
    return 0;
}