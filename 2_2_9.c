//输入两个四位正整数，分别表示火车出发时间和到达时间
//计算中间相差的时间差，用xx小时：xx分钟表示
/*
#include<stdio.h>
int main()
{
    int str,end,str_h,str_m,end_h,end_m;
    scanf("%d %d",&str,&end);
    str_h = str/100;
    str_m = str%100;
    end_h = str/100;
    end_m = str%100;
    if(end_m - str_m < 0)
        printf("%02d:%02d",end_h - str_h-1,60-str_m+end_m);
    else
        printf("%02d:%02d",end_h - str_h,end_m-str_m);
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int str, end, str_h, str_m, end_h, end_m;
    scanf("%d %d", &str, &end);
    str_h = str / 100; str_m = str % 100;
    end_h = end / 100; end_m = end % 100;
    if (end_m - str_m < 0)
        printf("%02d:%02d", end_h - str_h - 1, 60 - str_m + end_m);
    else
        printf("%02d:%02d", end_h - str_h, end_m - str_m);

    return 0;
}