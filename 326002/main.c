//千万不要忘记取地址符&&&&&
//&&&&&
//取完数字之后一定要由&！！！！
//326文件里的AMOUNT是大写是因为与前面的const int AMOUNT作出区分。326里面的表示是定量。
//const不变的，定值。是一个修饰符，加在int前面，表示int后面这个量是不变的
//这里的小写aomunt前面没有const，表示这不是定量。
#include<stdio.h>
int main()
{
    int price = 0;
    int amount = 0;//amount之所以不大写，是为了让客户能够输入这个常量

    printf("请输入金额：");
    scanf("%d",&price);//将上一行用户输入的数值给price，记得不要忘记&

    printf("请输入你支付的金钱数额：");
    scanf("%d",&amount);//与上同理，将客户输入的金钱数额的值给amount

    int change = amount - price;//给一个减法公式，告诉程序需要怎么算出应找回别人多少钱，这个钱用change表示

    printf("找您%d元",change);//最后输出需要找多少钱change

    return 0;
}