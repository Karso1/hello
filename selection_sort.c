/*
 * 选择排序是一种简单直观的排序算法，无论什么数据进去都是n2的时间复杂度
 * 所以用选择排序时，数据规模越小越好，唯一的好处就是不占用额外的内存空间
 *
 */

//首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置
//再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾
//重复第二部，直到所有元素均排序完毕

#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[],int len)
{
    int i,j;
    for(i=0;i<len-1;i++)
    {
        int min = i;
        for(j = i+1;j<len;j++)//走访未排序的元素
            if(arr[j]<arr[i])//找到目前最小值
            { min = j;//记录最小值
            }
        swap(&arr[min],&arr[i]);//交换
    }
}