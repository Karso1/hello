//����ƽ����
//���û�����һϵ�е���������������
//��ʼ��sum�ۼӺͺ�count����Ϊ0
//����number
//���number����-1����number����sum������count��1���ص�2
//���number��-1�������ʹ�ӡ��sum/count��ע�⻻�ɸ�������

#include<stdio.h>
int main()
{
    int number = 0;
    int sum = 0;
    int count = 0;
    do//Ҳ���Բ���dowhileѭ����ֱ����while
    {
        {
        }
        scanf("%d", &number);
        if (number != -1) {
            sum += number;
            count++;
        }
    }while (number != -1);
    printf("%f",1.0*sum/count);
    return 0;

}