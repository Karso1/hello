/*
 * fun�������β�c��ָ����Ӣ����ĸ��˳���ӡ�����ɺ��������ĸ�������ĸ�Ĵ�Сд���β�һ��
 * �������β�dָ��
 * �������ĸ����Z��z����Ӧ��A��a��ʼ������֪�����ָ����������ĸ
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

