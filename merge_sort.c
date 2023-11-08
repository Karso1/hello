/*
 * 建立在归并操作上的一种有效的排序算法，该算法时分治法的一个非常典型的应用
 * 作为一种典型的分而治之思想的算法应用，归并排序的实现由两种方法：
 * 1，自上而下的递归（所有的递归方法都可以用迭代重写，也就是第二种）
 * 2，自下而上的迭代
 *
 * 和选择排序一样，归并排序的性能不受输入数据的影响，但表现比选择排序好得多，因为始终都是nlogn的时间复杂度
 * 代价是需要额外的内存空间
 *
 *
 * 1，申请空间，使其大小为两个已经排序序列之和，该空间用来存放合并后序列
 * 2，设定两个指针，最初位置分别为两个已经排序序列的起始位置
 * 3，比较两个指针所指向的元素，选择相对小的元素放入到合并空间，并移动指针到下一位置
 * 4，重复操作3直到某一指针到达序列尾
 * 5，将另一序列剩下的所有元素直接复制到合并序列尾
 *
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int min(int x,int y)
{
    return x<y ? x:y;
}
void merge_sort(int arr[],int len)
{
    int *a = arr;
    int *b = (int *)malloc(len *sizeof(int));
    int seg,start;
    for(seg = 1;seg<len;seg+=seg)
    {
        for(start = 0;start<len;start += seg*2)
        {
            int low = start,mid = min(start+seg,len),high = min(start+seg*2,len);
            int k =low;
            int start1=low,end1=mid;
            int start2=mid,end2=high;
            while(start1<end1 &&start2<end2)
                b[k++]=a[start1]<a[start2]?a[start1++]:a[start2++];
            while(start1<end1)
                b[k++]=a[start1++];
            while(start2<end2)
                b[k++]=a[start2++];

        }
        int *temp =a;
        a = b;
        b = temp;

    }
    if(a!= arr)
    {
        int i;
        for(i=0;i<len;i++)
            b[i]=a[i];
        b = a;
    }
    free(b);












}