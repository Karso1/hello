/*
 * fun：根据形参c中指定的英文字母按顺序打印出若干后继相邻字母，输出字母的大小写与形参一致
 * 数量有形参d指定
 * 若输出字母中有Z或z，则应从A或a开始继续，知道输出指定数量的字母
 *
 *
 */

/*
#include  <stdio.h>
void fun(char c, int d) {
    int i;
    char A[26], a[26], *ptr;

    for (i=0; i<26; i++) {
        A[i] = 'A' + i;
        a[i] = 'a' + i;
    }

    if ((c >= 'a') && (c <= 'z')) ptr = a;
    else   ptr = A;

    for (i=1; i<=d; i++) printf("%c", ptr[(c-ptr[0]+i) % 26] );
}
int main( ) {
    char c; int d;
    printf("please input c & d:\n");
    scanf("%c%d", &c, &d);
    fun(c, d);
}
 */



#include<stdio.h>
void fun(char c,int d)
{
    int i;
    char A[26],a[26],*ptr;
    for(i=0;i<26;i++)
    {
        A[i] = 'A' + i;
        a[i] = 'a' + i;
    }

    if((c>='a')&& (c<='z'))
        ptr = a;
    else ptr = A;

    for(i=1;i<=d;i++)
        printf("%c",ptr[c-ptr[0]+i] % 26);
}
int main()
{
    char c;
    int d;
    printf("plz input c & d:\n");
    scanf("%c%d",&c,&d);
    fun(c,d);

}

