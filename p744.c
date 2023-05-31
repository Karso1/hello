/*
 * 从键盘输入一个百分制成绩，如果超出范围则要求重新输入
 * 按顺序输出abcde
 */

#include<stdio.h>
int main()
{
    int m;
    char dj;
    float fs;

    do
    {
        printf("plz input the score:");
        scanf("%f",&fs);
    }
    while(fs>100||fs<0);
    m = (int)fs/10;
    switch(m)
    {
        case 10:
        case 9:
            dj = 'A';
            break;
        case 8:
            dj = 'B';
            break;
        case 7:
            dj = 'C';
            break;
        case 6:
            dj ='D';
            break;
        default:
            dj = 'E';

    }

    printf("\nscore=%.1f,grade=%c\n",fs,dj);

    return 0;
}