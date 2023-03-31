#include <stdio.h>

int main() {
	int math = 0;
	printf("输入被100减的数:");
	scanf("%d", &math);

	int change = 100 - math;
	printf("结果为%d。\n", change);

}