/*
 * �Ӽ�������4����num1��num2��num3��num4
 * �������num1��num2��������*num3+num4������Ҫ����num2Ϊ0�ͼ�������������
 * Ҫ������Ľ���У��������ֿ��Ϊ8������8ʱ��0���㣩С�����ֿ��Ϊ7.
 */
#include<stdio.h>
int main()
{
    int n1,n2;
    double n3,n4,jg;

    printf("������4������");
    scanf("%d %d %lf %lf",&n1,&n2,&n3,&n4);

    jg = (n1%n2)*n3+n4;

    printf("\n������Ϊ��%016.7f",jg);
    return 0;
}