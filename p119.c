/*
 * 从命令行输入三个数，格式为：P119 数1 数2 数3
 * 输出“数1+（数2+数3）/2”并保留三位小数
 * 看函数体是：atoi atof
 * 当命令格式不正确（参数不足4，则报错
 * 程序的返回值规定为：正常结束返回0，命令行格式不对返回8
 */

#include<stdio.h>
int main(int argc,char *argv[])
{
    double x1,x2,x3,jg;
    if(argc != 4)
    {
        printf("usage:P119 num1 num2 num3\n");
        return 8;
    }
    x1= atof(argc[1]);
    x2= atof(argv[2]);
    x3= atof(argv[3]);

    jg = x1 +(x2+x3)    /2;
    printf("%.0f +(%.3f+%.3f)/2=%.3f\n",x1,x2,x3,jg);
    return 0;
}