/*
 * 键盘输入mn，（mn均《=1000且为整数）
 * 输出介于m和n之间的能被3整除且至少有位数字是5的数字
 */

#include<stdio.h>
int main() {
    int m, n, zj, i, gw, sw, bw;
    printf("input m,n:");
    scanf("%d %d", &m, &n);
    if (n > m) {
        zj = m;
        m = n;
        n = zj;
    }
    printf("\nresult:");
    for (i = n; i <= m; i++)
    {
        gw = i%10;
        bw = i/100;
        sw = (i -bw * 100)/10;
        if((i%3 == 0)&&(gw == 5 || sw == 5 ||bw == 5))
        {
            printf(" %d",i);
        }
    }
    return 0;
}