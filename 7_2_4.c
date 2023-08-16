/*
 * 输入在一行中 按照 yyyy/mm/dd 给出日期
 * 在一行中输出日期是该年中的第几天
 */

#include<stdio.h>
int main()
{
    int y,m,d,i;
    scanf("%d/%d/%d",&y,&m,&d);
    if((y%4==0&&y%100!=0) || (y%400==0))
    {
        //is a run year
        for(i=0;i<m;i++)
        {
            switch(i)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                    d += 31;
                    break;
                case 2:
                    d += 29;
                    break;
                case 4:
                case 6:
                case 9:
                case 10:
                case 11:
                    d += 30;
                    break;
            }
        }
    }
    else
    {
        for(i=0;i<m;i++)
        {
            switch(i)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                    d += 31;
                    break;
                case 2:
                    d += 28;
                    break;
                case 4:
                case 6:
                case 9:
                case 10:
                case 11:
                    d += 30;
                    break;
            }
        }
    }
    printf("%d",d);
        return 0;
}