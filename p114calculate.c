/*
 * 编写一个简单计算器程序
 * 输入格式为data1 op data2，其中data1和data2是参加运算的两个数，只能定义为int
 * 但是两者相加可能超出int所能表示的范围，op为运算符，可以是+-*%/
 */

#include<stdio.h>
int main()
{
    int data1,data2;
    char op;
    printf("Plz input：");
    scanf("%d %c %d",&data1,&op,&data2);
    switch(op)
    {//整型运算要得到浮点数记得将整型数浮点话（double）
        case '+':
            printf("\n%d+%d=%.0lf\n",data1,data2,(double)data1+(double)data2);
            break;
        case '-':
            printf("\n%d+%d=%.0lf\n",data1,data2,(double)data1-(double)data2);
            break;
        case '*':
            printf("\n%d*%d=%.0lf\n",data1,data2,(double)data1*(double)data2);
            break;
        case'/':
            if(data2 == 0)
            {
                printf("\nerror!\n");
            }
            else
            {
                printf("\n%d/%d=%lf\n",data1,data2,(double)data1/(double)data2);
            }
            break;
        case'%':
            if(data2 == 0)
            {
                printf("\nerror\n");
            }
            else
            {
                printf("\n%d %% %d=%ld\n",data1,data2,data1%data2);
            }//长整型long用ld输出。
            //%d按整型输出后面给出的值
            //%%d   拆成%%  和  d 看，%%表示输出一个%。所以%%d表示输出%d
            //%%%d  %%和%d表示，输出一个字符%再接着输出%d。也就是说对后面的%d进行取余运算
            //%是转义字符！！！！，和%d一起出现的后面内容会转义

            break;
        default:
            printf("\nerror\n");
    }
    return 0;
}