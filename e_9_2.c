/*
 * 判断一个正整数n师傅等于某个连续正整数序列之和，若是输出所有可能的序列
 */

#include<stdio.h>
void fun(int n)
{
    int j,b,c,m,flag = 0;
    for(b=1;b<=2/n;b++)
    {
        m=n;
        c=b;
        while(m!=0 && m>=c)
        {
            m = m-c;
            c++;
        }
        if(m==0)
        {
            printf("%d=",n);
            for(j=b;j<c-1;j++)
                printf("%d+",j);

            printf("%d\n",j);
            flag =1;
        }
    }
    if(flag == 0)
        printf("can not division\n  ");
}

int main()
{
    int n;
    printf("plz enter a interger:\n");
    scanf("%d",&n);
    fun(n);
    return 0;
}