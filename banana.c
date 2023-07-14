/*
 * 有5只猴子，和一大堆香蕉
 * 第一只猴子醒来，把香蕉均分成5堆，还剩下一个，就吃掉并把自己的一份藏起来
 * 第二只猴子，把香蕉均分成5堆，还剩下2个，就吃掉，并藏起来自己的一份
 * 第三只猴子，把香蕉均分成5堆，还剩下3个，就吃掉并把自己的一份藏起来
 * 第四只猴子，把香蕉均分成5堆，还剩下4个，就吃掉并把自己的一份藏起来
 * 第五只猴子，把香蕉均分成5堆，正好一个不剩
 */

#include<stdio.h>
int main()
{
    int ban,i,find;
    //find是否找到合适数，ban是香蕉可能的数字，i是猴子分割香蕉
    for(ban=5;;ban++)//香蕉数量++,因为平均分成5份，所以最少ban就是5个，故定义5个
    {
        int b = ban;//b是将香蕉分给5个monkey
        for(i=1;i<5;i++)
            //分割中
            //i是分了之后多的香蕉
        {
            find = 0;//是否找到合适的香蕉总数
            if(b%5 == i && i!=5)//平均分5份后余数是否依次为1234
            {
                b = b-((b-i)/5);
                find = 1;//找到了
            }
            else if(i==5)
            {
                if(b%5 == 0)
                {
                    find = 1;//done
                    break;
                }
            }
            else
            {
                find = 0;//不符合条件&没找到
                break;
            }
        }
        if(find == 1)//如果5轮循环全部符合条件find就是1；
        {
            printf("the total number of banana is %d\n",ban);
            b = ban;
            for(i=1;i<=5;i++)//disturbe
            {
                if(i != 5)
                {
                    printf("第%d只猴子拿走%d个，剩下%d个\n",i,((b-i)/5),b-((b-i)/5));
                    b=b-((b-i)/5);
                }
                else if(i == 5)
                {
                    printf("第%d只猴子拿走%d个剩下%d个\n",i,((b-i)/5),b-((b-i)/5));
                }
            }
            break;

        }
    }
    return 0;
}