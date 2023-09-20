#include<stdio.h>
int isleap(int year)
{
    int leap;
    leap = (year%4 ==0 && year%100!=0 || year%400==0)
            return leap;
}

int fun(int year,int month,int day)
{
    int table[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int days=0,i;
    for(i=1;i<month;i++)
        days=days+table[i];
    days=days+day;
    if(isleap(year) && month>2)
        days=days+1;
    return days;
}
int main()
{
    int year,month,day,days;
    printf("plz input year month day\n");
    scanf("%d%d%d",&year,&month,&day);
    days=fun(year,month,day);
    printf("%dyear%dmonth%dday de di %dday\n",year,month,day,days);
    return 0;

}