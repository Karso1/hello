/*
 * 从命令行输入两个实数，格式：p117 数1 数2
 * 输出  （数1-数2）*3且保留3位小数
 *
 * 库函数提示：atof
 * 当命令行格式不正确，报错
 * 程序返回值，（即由main函数的return的值和程序使用exit终止运行时的返回的值，也称为退出代码
 * 1：正常运行结束，返回0；
 * 2：命令行格式不对返回76
 *
 */

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]  )
{
    double x1,x2,jg;
    if(argc != 3)
    {
        printf("  usage:P117 num1 num2\n");
        return 76;
    }
    x1 = atof(argv[1]);
    x2 = atof(argv[2]);
    jg = (x1-x2)*3;
    printf("(%.3f - %.3f)*3 = %.3f\n",x1,x2,jg);
    return 0;
}