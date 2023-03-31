//if语句，通过比较年龄是否小于18岁，如果小于就说他很年轻。

#include<stdio.h>
int main()
{
    const int MINOR = 18;//定义最大的年轻人年龄为18。定量const
    int age = 0;
    printf("请输入您的年龄：");
    scanf("%d",&age);

    printf("您的年龄是%d岁",age);

    if (age<MINOR){
        printf("年轻是最美好的");
    }
    printf("年龄决定了您的精神世界，好好珍惜时间吧！\n");
    return 0 ;
}