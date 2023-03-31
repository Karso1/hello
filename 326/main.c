#include<stdio.h>
int main()
{
    int price = 0;
    const int AMOUNT = 100;//定义100为常量,不定义常量，直接写一个100，别人难以理解，称这个数为magic number，const是一个修饰符，放在int之前。const（不变的）
//const不能再次被赋值
    printf("请输入金额（元）:");
    scanf("%d",&price);//千万不要忘记取地址符号&，把获得的这个%d输入值，给price
    int change = AMOUNT - price;//定义change一个计算公式
    printf("找您%d元.\n",change);//找您%d，不要忘记是%d。先要把这个值取出来，然后给change这个数

    return 0;

}