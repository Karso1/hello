/*
 * goto��������ת
#include<stdio.h>
int main()
{
    again:
    printf("123\n");
    goto again;
    return 0;
}
��ת��again�����������
 goto���ܿ纯������
 ���forѭ�������Ҫ��������break��Ҫһ��һ������������goto����ֱ��goto���ⲿ

 //�ػ�����
 1����������������һ�����ڹػ�
 2��������룺��������ȡ���ػ�
 */

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20] = {0};
    system("shutdown -s -t 60");
again:
    printf("��ע�⣬��ĵ��Խ���60���ػ�\n������룺��������\n��ȡ���ػ�\n");
    scanf("%s",input);
    if(strcmp(input,"������")==0)
    {
        system("shutdown -a");//-aֹͣ��ʱ��ȡ���ػ�
    }
    else
    {
        goto again;
    }
    return 0;
}
