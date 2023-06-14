/*
 * 程序运行时读入一组整数，读入的书为-888终止
 * 从小到大排序
 * 输出结果
 */

#include<stdio.h>
int main() {
    int a1[100], i, j, zj, sz, n = 0;
    printf("input:");
    for (i = 0; i < 100; i++) {
        scanf("%d", &sz);
        if (sz == -888) {
            break;
        } else {
            a1[i] = sz;
            n++;
        }
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a1[i] > a1[j]) {
                zj = a1[i];
                a1[i] = a1[j];
                a1[j] = zj;
            }
        }
    }
    printf("result:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d",a1[i]) ;
    }
    return 0;
}