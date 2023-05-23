/*
 * 从键盘读入一个整数Num，按从小到大的顺序输出所有满足条件的三位数
 * 该数字的各位数字的立方和等于Num
 */

#include<stdio.h>
int main()
{
    int i,j,gw,sw,bw,num,n= 0;
    printf("plz input a number:");
    scanf("%d",&num);
    printf("\nResult:");

    for(i = 100;i<= 900; i++)
    {
        j = i;
        gw = j%10;
        j = j/10;
        sw = j%10;
        bw = j/10;

        if(gw*gw*gw+ sw*sw*sw +bw*bw*bw == num)
        {
            printf("%5d",i);
            n = 1;
        }

    }
    if(n == 0)
    {
        printf("not Find!\n");
    }
    putchar('\n');
    return 0;
}