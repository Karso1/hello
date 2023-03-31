//猜数游戏
//计算机随机生成一个数，设计rand函数（随机生成）,生成随机数
//利用do while，用户输入数字，直到计算机检测到输入的数字相同，则停止循环

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int number = rand()%100+1;//对100取余，比如说10002，就是2+1=3.目的是为了使得这个随机数在0——99内，方便猜到。
    int count = 0;
    int a = 0;
    printf("我已经想好了一个1到100内的数字。");
    do
    {
        printf("请猜一猜这个数字是多少：");
        scanf("%d",&a);//读取用户输入的数字并赋值给a
        count ++;//猜的次数
        if(a>number)
        {
            printf("你猜的数太大了！");
        }
            else if(a < number);
        {
                printf("你猜的数太小了！");
        }
    }while(a !=number);
    printf("恭喜你只用了%d次就猜对了！",count);
    return 0;
}