/*
 * 制作一个计算器
 * 1需要计算的内容从命令行输入，格式为： P115 数1 op 数2.当命令行格式不正确报错
 * 2.数1和数2均为整数int，op为+-*时不考虑运算结果超出int的表示范围
 * op为/%时，不考虑除数为0的情况，op为/时保留两位小数
 * 3.程序的返回值（即由main和return的值和程序使用exit终止运行时返回的值，也叫退出代码）规定为；
 * A,正常运行结束时，返回0；B，命令行格式不对返回1 ；C，op超出范围返回2
 */

#include<stdlib.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
    int x1,x2;
    char op;
    if(argc != 4)
    {
        printf("  usage:P115 num1 op num2\n");
        return 1;
    }
    x1 = atoi(argv[1]);
    x2 = atoi(argv[3]);
    op = *argv[2];
    switch(op)
    {
        case'+':
            printf("%d+%d=%d\n",x1,x2,x1+x2);
            break;
        case'-':
            printf("%d-%d=%d\n",x1,x2,x1-x2);
            break;
        case'*':
            printf("%d *%d = %d\n",x1,x2,x1*x2);
            break;
        case'/':
            printf("%d/%d=%.2f\n",x1,x2,(double)x1/x2);
            break;
        case'%':
            printf("%d %% %d = %d\n",x1,x2,x1 %x2);
            break;
        default:
            printf("  op(%c)Error!\n",op);
            return 2;
    }
    return 0;
}