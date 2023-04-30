/*
 * 已知某银行整存整取存款不同期限的年息利率分别为：3.15%期限一年，，3.63期限二年，4.02期限三年
 * 4.69期限五年，5.36期限八年
 * 从键盘上输入存钱的本金，求到期能从银行得到的利息
 */

#include<stdio.h>
int main()
{
    int n;
    long bj;
    double lx;
    printf("Plz input benjin,cunqi:");
    scanf("%ld %d",&bj,&n);//长整型long，用%ld

    switch(n) {
        case 1:
            lx = bj * 0.0315 * 1;
            break;

        case 2:
            lx = bj * 0.0363 * 2;
            break;

        case 3:
            lx = bj * 0.0402 * 3;
            break;

        case 5:
            lx = bj * 0.0469 * 3;
            break;

        case 8:
            lx = bj * 0.0536 * 8;
            break;

        default:
            printf("plz input benjin,cunqi:");
    }
    printf("\nlixi = %.2f yuan\n",lx);
    return 0;
}