#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,n,t=0,a;
    //s为随机数，n为猜测最大次数，t为猜的次数，a为用户每次输入的数
    scanf("%d %d",&s,&n);
    for(int i=1; ; i++)
    {
        scanf("%d",&a);
        t++;
        if(t>n)
        {
            printf("Game Over\n");
            exit(0);
        }
        if(a<0)
        {
            printf("Game Over\n");
            exit(0);
        }
        if(a>s)
            printf("Too big\n");
        else if(a<s)
            printf("Too small\n");
        else
            break;
    }
    if(t == 1)
        printf("bingo!\n");
    else if(t>1 && t<=3)
        printf("Lucky you!\n");
    else if(t>3 && t<=n)
        printf("Good Guess!\n");
    return 0;
}