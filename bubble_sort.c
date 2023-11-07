/*
 *  重复的走访过要排序的数列，一次比较两个元素
 *  如果它们的顺序不符合要求就交换
 *  走访数列的工作是重复的进行直到没有在需要交换
 *  也就是说该数列已经完成
 *  这个算法的名字来自与越小的元素会有交换浮到数列的顶端
 *
 *
 */

//bubble_sort

//比较相邻的元素，如果第一个比第二个大，就交换他们两个
//对每一对相邻元素作同样的工作，从开始第一队到结尾的最后一对
//这样做完之后，最后的元素是最大的数
//针对所有元素重复以上的操作，除了最后一个
//持续每次对越来越少的元素重复上面的步骤，直到没有一对数字需要比较

//当输入的数据是正序时候，最快
//当输入的数据是反序时，最慢

#include<stdio.h>
void bubble_sort(int arr[],int len)
{
    int i,j,temp;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={22,34,3,32,82,55,89,50,37,5,63,123};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,len);
    int i=0;
    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}