//switch case,��·��֧
//�������ifelse���ֱ�һ��һ���жϣ��ܹ�ֱ�ӵ���Ҫ�����һ�����ܹ�ֱ�Ӻܶࡣ
//switch case������int�͡�

#include<stdio.h>
int main()
{
    int type;//�����û������
    scanf("%d",&type);

    switch(type)
    {
        case 1://caseָ���Ǵ����￪ʼ���У���case1�ǿյģ������������1�����Զ�����case2.ֻ������break�Ż������������е�case�����������
        //case�൱����ڣ�break�൱�ڳ���
            printf("���������1");
            break;
        case 2:
            printf("���������2");
            break;
        case 3://����������3
            printf("���������3");
            break;//break��ֹ������ֱ�����е����
        case 4:
            printf("���������4");
            break;
        default://����Ĳ�������ʱ
            printf("����������ֲ���0-4֮��");
            break;
    }
    return 0;
}