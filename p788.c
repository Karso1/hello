/*
 * 先从main函数中输入数组长度n（n<=20），再调用自定义函数scanfArr
 * 完成数组中的每个元素读入，然后分别调用自定义函数maxArr，aver
 * 计算数组中最大值，平均值。
 * 最后输出数组中的最大值，平均值
 */

#include<stdio.h>
void scanfArr(int *pp,int n);
//定义读取数组元素函数
int maxArr(int *pp,int n);
//找到数组中最大元素函数
double aver(int *pp,int n);
//算出数组平均值函数
int main()
{
    int Data[20],n,max;
    double average;
    printf("plz input the number n:\n");
    //输入元素的个数
    scanf("%d",&n);
    printf("plz input the array elements:\n");
    //输入数组的元素
    scanfArr(Data,n);
    //调用函数读取输入的数字

    max = maxArr(Data,n);

    average = aver(Data,n);

    printf("max = %d\naverage = %.2f\n",max,average);
    return 0;
}

void scanfArr(int *pp,int n)
{
    //读取数字的函数
    //定义指针和元素个数，通过指针逐个加一，指针首次指向的是第一个元素，然后依次获取到所有元素
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",pp+i);
    }
}

int maxArr(int *pp,int n)
{
    //找到元素中的最大值
    //定义最大值为指针所指的数，然后通过指针逐个加1，比较其大小
    int maxx = *pp,i;
    for(i=0;i<n;i++)
    {
        if(maxx<*(pp+i))
        {
            maxx = *(pp+i);
            //若后一个数大于目前的maxx，则进行赋值
        }
    }
    return maxx;//返回最大值
}

double aver(int *pp,int n)
{
    //算出数组中元素的平均值的函数
    //首先通过指针将所有元素取到然后全部加起来，再除以元素的个数，得到平均值
    int i;
    double sum = 0;
    for(i=0;i<n;i++)
    {
        sum = sum + *(pp+i);
    }
    sum = sum / n;
    return sum;
}