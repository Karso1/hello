//����Ա��Ӧ�����ʣ����й���Ҫ��40h������һСʱ����Ϊ8.25
//if��else��������Բ��Ӵ����ţ�ֱ�������Ҫ�Ķ��������Ƿֺű�����������ɹ������д

#include<stdio.h>
int main()
{
    const double RATE = 8.25;
    const int STANDARD = 40;
    double pay = 0.0;
    int hours;//һСʱ����8.25������Ϊ�����������׼����ʱ��40h������������Ҫ֧���Ĺ���pay���Ǹ�������������������int���塣���幤��ʱ��hours

    printf("�����빤����Сʱ����");
    scanf("%d",&hours);

    if (hours>STANDARD)
        pay = STANDARD*RATE+(hours-STANDARD)*(RATE*1.5);
    else
        pay = hours*RATE;//if else��䣬���Բ��ô����ţ�ֱ�ӽ���Ҫ�����ֵ�����

    printf("Ӧ�����ʣ�%f\n",pay);

    return 0;
}