//��1��2��3��4����ɵ���λ��
//��λʮλ��λ�������ظ�������
//�����������Ҫ�����λ��������һ������ռһ��
//ͬʱ��������������������ֵĸ����Ƕ���

#include <stdio.h>

int main()
{
	int count = 0;
	int g, s, b; //��λʮλ��λ
	for (g = 1; g <= 4; g++)
	{
		for (s = 1; s <= 4; s++)
		{
			for (b = 1; b <= 4; b++)
				if (g != s &&	g != b	&& 	s != b)
				{
					printf("%d%d%d\n", b, s, g);
					count++;
				}
		}
	}
	printf("%d", count);
	return 0;
}