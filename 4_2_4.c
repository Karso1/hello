#include<stdio.h>
int main()
{
    int x,total = 0,count = 0;
    //x为零钱数额，total为硬币总数量，count为换法个数
    int a,b,c;
    scanf("%d",&x);
    for(a=x/5;a>0;a--)
        for(b=x/2;b>0;b--)
            for(c=x;c>0;c--)
                if(a*5+b*2+c == x)
                {
                    count++;
                    printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n",a,b,c,a+b+c);
                }
    printf("count = %d",count);
                return 0;
}