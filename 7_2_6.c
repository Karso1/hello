//杨辉三角

#include<stdio.h>
void printSymmetry(int i,int j);//递归进行对称打印
void printYangHui(double n);//打印杨辉三角，默认从第一层开始
double calculate(double start,double num);//计算分子，start*start-1*start-2……
double findFactorial(double num);//计算分母，返回一个数的阶乘
int main()
{
    printf("plz input the n:");
    int n = 0;
    scanf("%d",&n);
    printf("result:\n");
    printYangHui(n);
    return 0;
}

double findFacutorial(double num)//计算分母
{
    double result = 1;
    for( ; num >1 ;num--)
    {
        result *= num;
    }
    return result;
}
double calculate(double start,double num)//计算分子
{
    double result = 1;//保存结果
    double tempstart = start;
    for( ;start>tempstart-num;start--)
    {
        result *= start;
    }
    return result;
}
void printSymmetry(int i,int j)//利用递归进行对称打印
{
    double temp = calculate(i,j) / findFactorial(j);
    printf("%0.1f  ",temp);//三角形的左边输出
    if(j< i/2)
    {
        printSymmetry(i,j+1);
    }
    if(2*j != i)//判断情况，三角的右边输出
    {
        printf("%0.1f  ",temp);
    }
}
void printYangHui(double n)
{
    if(n==0)
    {
        return;//如果要第零层则打印空
    }
    for(double i = 0;i<n;i++)//C00=1，即第一行为1
    {
        printSymmetry(i,0);//调用上面的递归函数，对称打印
        printf("\n");
    }
}