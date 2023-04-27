/*
 * 输入一个正整数，判断是否同时为5和7的整倍数，若是输出yes，否则输出No
 */

#include<stdio.h>
int main()
{
    int i;
    printf("Please input an integer:");
    scanf("\n%d",&i);
    if(i/5 == 0 && i/7 == 0)
    {
        printf("No.");
    }
    else
    {
        printf("Yes.");
    }
    return 0;
}