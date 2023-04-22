/*
 * 电脑产生一个随机数1-100
 *
 */

//定义game函数，生成随机数rand（）
/*
 * time函数返回时间戳
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
    printf("**************\n");
    printf("****1.play****\n");
    printf("****0.exit****\n");
    printf("**************\n");
}

void game()
{
    int guess = 0;//生成随机数，0-99 -->1-100
    // 生成随机数
    int ret = rand()%100+1;//生成随机数的函数；

    while(1)
    {
        printf("plz guess the number:\n");
        scanf("%d",&guess);
        if(guess < ret)
        {
            printf("too small\n");
        }
        else if(guess>ret)
        {
            printf("too big\n");
        }
        else
        {
            printf("bingo!\n");
            break;
        }
    }
}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do
    {
        menu();
        printf("plz choose mode\n ");
        scanf("%d", &input);
        switch (input)
        {
            case 1:
                game();//进入猜数字的整个逻辑
                break;
            case 0:
                printf("game exit\n");//退出游戏
                break;
        }
    }
    while (input);
    return 0;
}