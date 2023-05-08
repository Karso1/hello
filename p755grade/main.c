/*
 * 从键盘输入一个等级成绩，输出对应的百分制，A->95,B->85,C75D65E55F45G35H25I15J0
 * 如果输入的成绩不是A-J，则输出error
 *
 */

#include<stdio.h>
int main()
{
    int a[] = {95,85,75,65,55,45,35,25,15,0},fs;
    char dj;

    printf("plz input the grade:");
    scanf("%c",&dj);

    if(dj >='A' && dj <= 'J')
    {
        fs = a[dj-'A'];
        printf("\ngrade = %c,score = %d\n",dj,fs);
    }
    else
    {
        printf("\ngrade = %c Error\n",dj);
    }
    return 0;
}