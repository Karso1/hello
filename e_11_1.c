//计算数字小写字母大写字母个数
#include<stdio.h>
void fun(int *cd,int *cu,int *cs)
{
    char c;
    printf("enter is mean done!\n");
    while((c=getchar()) != '\n')
    {
        if(c>='0' && c<='9')
            ++*cd;
        if(c>'A' && c<='Z')
            ++*cu;
        if(c>='a' && c<= 'z')
            ++*cs;
    }
}
int main()
{
    int cd,cu,cs;
    cd = cu = cs = 0;
    fun(&cd,&cu,&cs);
    printf("shuzi:%d\n",cd);
    printf("daxie:%d\n",cu);
    printf("xiaoxie:%d",cs);
    return 0;
}