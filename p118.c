/*
 * 从命令行输入两个实数
 * 格式为：P118 数1 数2，输出数1的平方-数二平方的差除以6，并保留3位小数
 */

#include<stdlib.h>
#include<stdio.h>
int main(int argc,char *argv[]  )
{
    double x1,x2,jg;
    if(argc  != 3 )
    {
        printf(" usage:P118 num1 num2\n")   ;
        return 103;
    }
    x1= atof(argv[1]);
    x2 = atof(argv[2]);
    jg = (x1 *x1 - x2 * x2)/ 6;
    printf("(%.3f*%.3f-%.3f*%.3f)/6 = %.3f\n",x1,x1,x2,x2,jg);
    return 0;
}
