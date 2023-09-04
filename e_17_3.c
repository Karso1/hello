//输出一个浮点数的整数部分和小数部分
#include<stdio.h>
void fun(double aa,int *x,int *y)
{
    *x = (int )aa;
    *y = aa-*x;
}
int main()
{
    double aa,b;
    int a;
    printf("plz input a double number:\n");
    scanf("%lf",&aa);
    fun(aa,&a,&b);
    printf("%d %d %d",aa,a,b);
    return 0;

}