/*
 * 从键盘读入10个数存入数组中，找出并显示最小元素及其在数组中的位置
 */

#include<stdio.h>
int main()
{
    int num[10],i,MinVal,MinPos;
    //MinVal是数组中的最小元素，MinPos是该数在数组中的下标位置
    //因为要存入10个数，故定一个一个整型数组【10】

    printf("input 10 integers:");
    scanf("%d",&num[0,9]);//直接将数字依次按位置放到数组中
    /*
    //用循环一个一个把数字放到数组中
    for(i=0;i<=10;i++)
    {
        scanf("%d",&num[i]);
    }
    */
    //将输入的10个数依次放到定义的数组中

    MinVal = FindMin(num,10,&MinPos);//执行功能函数
    printf("\nMinVal=%d MinPos = %d\n",MinVal,MinPos);
    return 0;
}

//定义功能函数，定义数组名，定义比较中间量（数值的个数n），定义指针m
int FindMin(int num[],int n,int *m)
{
    int i,x1=0,minx = num[0];
    //定义minx最小值为数组中第一个元素，后续进行比较
    //x1为最小值的下标值
    for(i=0;i<n;i++)
        //n辅助i将数组中的数字全部取出来，在main函数中调用时，已经告知n为10，也就是数组的个数
        // 由于下标会小一个，所以i<n刚好可以让i将数组中的数字全部全部取一遍
    //i代表数组中的第几个数组，先从第一个数字也就是下标为0开始
    {
        if(num[i]<minx)
        //如果数组中的第i个元素小于minx，则进入循环体将此数值赋给minx
        //并且将该数值的下标值i赋给x1
        {
            minx = num[i];
            x1 = i;
        }
    }
    *m = x1;//将此时最小值的下标值赋给指针*m
    return minx;
    //返回返回最小值
}