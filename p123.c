/*
 * �Ӽ��̼���4������num1��num2��num3��num4
 * �����num1+��num2��num3��������*num4��Ҫ���������ֿ��Ϊ7��С�����ֿ��Ϊ5
 */

#include<stdio.h>
int main()
{
    int num2,num3;
    double num1,num4,sum;
    printf("������4������");
    scanf("%lf %d %d %lf",&num1,&num2,&num3,&num4);
    sum = num1 + (num2 % num3)*num4;
    printf("%013.5f",sum);
    return 0;
}