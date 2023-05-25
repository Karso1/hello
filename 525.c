/*
 * 栈溢出 是一种运行错误，不是c程序常见的错误
 * const常量，不可修改
 * debug被称为调试版本，程序调试找bug的版本
 * release称为发布版本，测试人员测试的release版本
 * debug版本包含调试信息，不做优化
 * release版本不可以调试
 *
 *
 */

//输入一个整数数组，实现一个函数
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分

/*
#include<stdio.h>

void move_odd_even(int arr[],int sz)
{
    int left = 0;
    int right = sz -1;

    while(left<right)
    {

        //从左网友找一个偶数，停下来
        while ((left < right) && (arr[left] % 2 == 1))
        {
            left++;
        }

        //从右往左找一个奇数，停下来
        while (((left < right)) && (arr[right] % 2 == 0))
        {
            right--;
        }
        //交换奇数偶数
        if (left < right)
        {
            int tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[10] = {0};
    //input
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for (i =0;i<sz;i++)
    {
        scanf("%d",arr+i);//读取元素，给到数组
    }
    //adjust
    //1 2 3 4 5 6 7 8 9 10
    //1 3 5 7 9,2 4 6 8 10
    move_odd_even(arr,sz);

    for (i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    //output
}*/


/*输入两个升序排列的序列，将两个序列合并为一个有序序列并输出
 *
 * /
 * 输出为一行，输出长度位n+m的升序序列
 * 即长度位n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列组合
 */

#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int arr1[n];
    int arr2[m];

    //输入n个整数
    int i = 0;
    for(i =0;i<n;i++)
    {
        scanf("%d",arr1[i]);
    }

    //输入m个整数
    for(i = 0; i < m ;i++)
    {
        scanf("%d",&arr2[i]);
    }

    //合并打印
    int j = 0;
    int k = 0;
    while(j<n && k<m)
    {
        if(arr1[j]<arr2[k])
        {
            printf("%d",arr1[j]);
            j++;
        }
        else
        {
            printf("%d",arr2[k]);
            k++;
        }
    }
    if(j<n)
    {
        for(;j<n;j++)
        {
            printf("%d",arr1[j]);
        }
    }
    else
    {
        for(;k<m;k++)
        {
            printf("%d",arr2[k]);
        }
    }
    return 0;
}