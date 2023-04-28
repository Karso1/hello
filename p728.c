/*
 * 已知某产品单价是30，输入其数量是num，输出其总价
 */
#include<stdio.h>
int main()
{
    int num;
    printf("please input num:");
    scanf("%d",&num);

    printf("\ntotal = %d",num*30);
    return 0;
}