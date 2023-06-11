/*
 * 从键盘读入若干个整数，读到-1或读满16个数均为结束读入
 * 然后倒序输出这些数
 */

#include<stdio.h>
int main()
{
    int a1[16],i,count = 0,sz;
    printf("plz input some number:");
    for(i = 0;i<16;i++)
    {
        scanf("%d",&sz);
        if(sz == -1)
        {
            break;
        }//从第一个数字开始读入，判断每个数字是否为-1
        else
        {
            a1[i]= sz;
            count ++;
        }//不是-1则放到数组里
    }
    printf("\nzhexieshudaoxu：");
    for(i = count -1;i>=0;i--)
    {
        printf("%d",a1[i]);
    }
    return 0;
}