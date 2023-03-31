//计算平均数
//让用户输入一系列的正整数，最后输出
//初始化sum累加和和count个数为0
//读入number
//如果number不是-1，则将number加入sum，并将count加1，回到2
//如果number是-1，则计算和打印出sum/count（注意换成浮点数）

#include<stdio.h>
int main()
{
    int number = 0;
    int sum = 0;
    int count = 0;
    do//也可以不用dowhile循环，直接用while
    {
        {
        }
        scanf("%d", &number);
        if (number != -1) {
            sum += number;
            count++;
        }
    }while (number != -1);
    printf("%f",1.0*sum/count);
    return 0;

}