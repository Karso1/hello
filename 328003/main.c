//���������ж�����һ������λ�����֡�
//if while��䡣ֱ��

#include<stdio.h>
int main()
{
    int x;//���������
    int n=0;

    scanf("%d",&x);

    n++;//nÿ�μ�1������

    x/=10;
    while(x>0)
    {
        n++;
        x/=10;
    }

    printf("%d\n",n);
    return 0;
}