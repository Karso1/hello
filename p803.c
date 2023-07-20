/*
 * 从键盘输入两个整数，分别保存到变量numA和numB中，调用swap（）实现numA和numB的交换
 * 并在main函数中输出交换后的numA和numB
 */

#include<stdio.h>
void swap(int *a1,int *a2)
int main()
{
    int numA,numB;
    printf("plz input A,B:");
    scanf("%d,%d",&numA,&numB);
    swap(&numA,&numB);
    printf("\nnumA=%d,numB=%d\n",numA,numB);
    return 0;
}
void swap(int *a1,int *a2)
{
    int b1;
    b1 = *a1;
    *a1 = *a2;
    *a2 = b1;//注意要定义指针变量，因为要取到用户输入的两个地址
}