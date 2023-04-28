/*
 * 输入xy两个整数，输出其中较大的数
 */
#include<stdio.h>
int main()

{
    int x,y;
    printf("please input x,y:");
    scanf("%d,%d",&x,&y);
    printf("\n%d is bigger",x>y?x:y);
    return 0;
}