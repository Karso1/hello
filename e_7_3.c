//在形参指针所指的4个整数中找出最大值和最小值
//最大值放在a中，最小值放在d中

#include<stdio.h>
void fun(int *a,int *b,int *c,int *d) {
    int max, min;
    max = *a;
    min = *d;
    if (*b > max) { max = *b; }
    if (*c > max) { max = *c; }
    if (*d > max) { max = *d; }
    if (*a < min) { min = *a; }
    if (*b < min) { min = *b; }
    if (*c < min) { min = *c; }
    *a = max;
    *d = min;
}
int main()
{
    int a,b,c,d;
    printf("enter 4 number:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("enter 4:%d,%d,%d,%d\n",a,b,c,d);
    fun(&a,&b,&c,&d);
    printf("max=%d,min=%d\n",a,d);
    return 0;
}