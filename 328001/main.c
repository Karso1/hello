//ע�⽫����������һ�У�����˼�����������㿴��������������ˡ�
//������Ӵ����ţ�else���ǻ�������ƥ�䣬���׳���
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("�������������Ƚϴ�С��");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            max = a;
        }else
        {
            max = c;
        }
    }else
    {
        if(b>c)
        {
            max = b;
        }else
        {
            max = c;
        }
    }
    printf("The max is %d\n",max);
    return 0;
}