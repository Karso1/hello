/*
 * ��дһ���򵥼���������
 * �����ʽΪdata1 op data2������data1��data2�ǲμ��������������ֻ�ܶ���Ϊint
 * ����������ӿ��ܳ���int���ܱ�ʾ�ķ�Χ��opΪ�������������+-*%/
 */

#include<stdio.h>
int main()
{
    int data1,data2;
    char op;
    printf("Plz input��");
    scanf("%d %c %d",&data1,&op,&data2);
    switch(op)
    {//��������Ҫ�õ��������ǵý����������㻰��double��
        case '+':
            printf("\n%d+%d=%.0lf\n",data1,data2,(double)data1+(double)data2);
            break;
        case '-':
            printf("\n%d+%d=%.0lf\n",data1,data2,(double)data1-(double)data2);
            break;
        case '*':
            printf("\n%d*%d=%.0lf\n",data1,data2,(double)data1*(double)data2);
            break;
        case'/':
            if(data2 == 0)
            {
                printf("\nerror!\n");
            }
            else
            {
                printf("\n%d/%d=%lf\n",data1,data2,(double)data1/(double)data2);
            }
            break;
        case'%':
            if(data2 == 0)
            {
                printf("\nerror\n");
            }
            else
            {
                printf("\n%d %% %d=%ld\n",data1,data2,data1%data2);
            }//������long��ld�����
            //%d������������������ֵ
            //%%d   ���%%  ��  d ����%%��ʾ���һ��%������%%d��ʾ���%d
            //%%%d  %%��%d��ʾ�����һ���ַ�%�ٽ������%d��Ҳ����˵�Ժ����%d����ȡ������
            //%��ת���ַ�������������%dһ����ֵĺ������ݻ�ת��

            break;
        default:
            printf("\nerror\n");
    }
    return 0;
}