/*
 * 平均状态下，nlogn
 * 最坏需要n2
 * 事实上，快速排序通常明显比其他的nlogn快，因为他的内部循环可以在大部分的架构上很有效率的实现
 * 快速排序使用分治法策略把一个串行，分为两个子串行
 * 快速排序又是一种分而治之的典型应用
 * 本质上，快速排序应该算是冒泡排序基础上的递归分治法
 *
 *
 * 从数列中跳出一个元素，称为基准
 * 重新排序数列，所有元素比基准值小的摆放在基准前面，所有元素比基准值大的摆放在基准后面
 * 在这个分区推出之后，该基准就处于数列的中间位置，这个叫分区操作
 * 递归的把小于基准值元素的子数列和大于基准值元素的子数列排序
 *
 *
 */

typedef struct _Range
{
    int start,end;
}Range;

Range new_Range(int s,int e)
{
    Range r;
    r.start = s;
    r.end = e;
    return r;
}

void swap(int *x,int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void quick_sort(int arr[],const int len)
{
    if(len<=0)
        return ;
    Range r[len];
    int p =0;
    r[p++] = new_Range(0,len-1);
    while(p)
    {
        Range range = r[--p];
        if(range.start >= range.end)
            continue;
        int mid = arr[(range.start + range.end)/2];
        int left = range.start,right = range.end;
        do {
            while(arr[left]<mid) ++left;
            while(arr[right]>mid) --right;
            if(left<=right)
            {
                swap(&arr[left],&arr[right]);
                left++;
                right--;
            }
        }while(left<=right);
        if(range.start <right)r[p++]= new_Range(range.start,right);
        if(range.end >left) r[p++]= new_Range(left,range.end);
    }
}



























