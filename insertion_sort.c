//插入排序的代码实现虽然没有冒泡排序和选择排序那么简单粗暴，但它的原理最容易理解
//就像是打扑克牌
//通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到乡音位置并插入
//插入排序和冒泡排序一样，也有一种优化算法，叫折半插入

//将第一待排序序列第一个元素看作一个有序序列，把第二个元素到最后一个元素当成是未排序序列
//从头到尾依次扫描未排序序列，将扫描到的每个元素插入有序序列的适当位置
//如果待插入的元素与有序序列中的某个元素相等，则将待插入元素插入到想等元素的后面

void insertion_sort(int arr[],int len)
{
    int i,j,key;
    for(i=1;i<len;i++)
    {
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}