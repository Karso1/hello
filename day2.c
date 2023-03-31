#include <stdio.h>

int main() {
	int r, t, c, m;

	printf("请按顺序输入您的存款利率，存款时间以及存入本金:");
	scanf("%d %d %d", &r, &t, &c);
	m = r      * t * c;

	printf("你最终的余额为:% d", m);
	return 0;



}