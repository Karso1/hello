/*
 * 从键盘输入两个实数，分别保存到变量numA和numB中，调用函数swap（）实现两数的交换
 * 并在main函数中输出交换后的两数
 */
#include<stdio.h>
void swap(float *a1,float *a2)
{
    float b1;
    b1 = *a1;
    *a1 = *a2;
    *a2 = b1;
}
int main()
{
    float numA,numB;
    printf("plz input numA,numB:");
    scanf("%f,%f",&numA,&numB);
    swap(&numA,&numB);
    printf("\nnumA=%.3f,numB=%.3f\n",numA,numB);
    return 0;
}

