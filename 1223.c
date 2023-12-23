#include<stdio.h>
struct node
{
    int pi=0;
    int wi=0;
    int pwr=0;
}goods[10];
int main()
{
    struct node Change;
    for(int i=0;i<10;i++)
    {
        goods[i].pwr-goods[i].pi/goods[i].wi;
    }

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(goods[j].pwr<=goods[j+1].pwr)
            {
                Change = goods[j];
                goods[j] = goods[j+1];
                goods[j+1] = Change;
            }
        }
    }
    int i;
    for(i=0;i<10;i++)
    {
        if(goods[i].wi<=M)
        {
            M-=goods[i].wi;
            Max_price+=goods[i].pi;
        }
        else
        {
            break;
        }
    }
    if(i<10)
        Max_price+=M*goods[i].pwr   ;

    return 0;
}