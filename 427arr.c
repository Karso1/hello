/*
 * 二维数组 arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
 *                  前一个【】表示多少行，行里的数字可以省略
 *                  后一个【】表示多少列，不可省略，倘若不够，则自动补充为0
*
 */
/*
#include<stdio.h>
int main()
{
    int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
    int i = 0;

    for (i = 0;i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4;j++)
        {
            printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
        }
    }
    return 0;
}*/
//打印出这个二位数组arr[3][4]  = {1,2,3,4,2,3,4,5,3,4,5,6}的地址
/*二维数组在内存中和一维数组在内存中都是连续存放的，每个数字占四个字节，每个数之间相差4个字节
 */

//int arr[3][4] = {{1,2,3,4}.{2,3,4,5},{3,4,5,6}}
//计算数组大小：int sz = sizeof(arr) / sizeof(arr[0]);  40/4 = 10.
/*
 * 数组传参的时候，形参有两种写法：1.数组。2.指针。
 */

#include<stdio.h>
void bubble_sort(int arr[],int sz)//地址是应该用指针来接受，这里的arr看似是数组，实则是指针bianliang
//趟数
{
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for(i=0; i <sz-1;i++)
    {
        //一趟冒泡排序
        int j = 0;
        for(j = 0;j<sz-1-j;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //交换
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    //数组
    //把数组的数据拍成升序
    int arr[]={1,2,3,4,5,6,7,8,9};
    //         0 1 2 3 4 5 6 7 8
    //冒泡排序的算法，对数组进行排序
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, sz);
    //冒泡排序的核心思想：两个相邻的元素进行比较
    //一趟冒泡排序让一个数据来到它最终应该出现的位置上
    int i = 0;
    for (i=0;i<sz;i++)
    {
        printf("%d",arr[i]);

    }
    return 0;
}