//对称数
//输入一个整型数，判断是否对称，如果是输出yes，否则输出no。不用考虑整型数过大，int类型存不下，不用考虑负值
//例如12321是对称数，输出yes，1231不是，输出no
//练习循环，并将整型数逆置，判断是否与最初值相等

#include<stdio.h>
int main()
{
    int a,b=0,backup_a;
    scanf("%d",&a);//读取a
    backup_a=a;//备份a的值
    while(a)
    {
        printf("%d\n",a%10);
        b=b*10+a%10;
        a=a/10;
    }
    if(b==backup_a)
    {
        printf("yes\n");
    }else
    {
        printf("no\n");
    }
    return 0;
}