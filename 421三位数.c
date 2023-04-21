//由1，2，3，4能组成的三位数
//个位十位百位不能有重复的数字
//输出所有满足要求的三位数，并且一个数字占一行
//同时输出所有满足条件的数字的个数是多少

#include <stdio.h>

int main()
{
	int count = 0;
	int g, s, b; //个位十位百位
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