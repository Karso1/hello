/*
 * 已知某公司员工的保底薪水500，某月所接工程的利润profit与利润提成的关系如下
 *
 */


#include<stdio.h>
int main()
{
    int n,m = 500;
    double gz;
    printf("Input profit:");
    scanf("%d",&n);

    if(n<= 1000)
    {
        gz = m;
    }
    else if(n>1000&&n<=2000)
    {
        gz = m + n * 0.1;
    }
    else if (n>2000&&n<=5000)
    {
        gz = m + n*0.15;
    }
    else if(n>5000&& n  <= 10000)
    {
        gz = m + n * 0.2;
    }
    else
    {
        gz = m + n * 0.25;
    }
    printf("\nsalary=%.2f\n",gz);
    return 0;
}