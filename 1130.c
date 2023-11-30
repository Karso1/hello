#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void BubbleSort(int arr[],int len)
{
    int flag = 1;
    for(int i =0;i<len-1&&flag == 1;i++)
    {
        flag = 0;
        for(int j = len-1;j>0;j--)
        {
            //从后往前遍历
            if(arr[j-1]>arr[j])
            {
                flag = 1;
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void SecSort(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        int min = i;
        for(int j = i+1;j<len;j++)
        {
            if(arr[j]<arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[ i ]= arr[min];
        arr[ min] = arr[i];
    }
}

void InsertSort(int arr[],int len)
{
    for(int i =0;i<len;i++)
    {
        int temp  = arr[i];
        for(int j = i+1;j<len;j++)
        {
            if(arr[j]<temp)
            {
                arr[j-1] = arr[j];
            }
        }
    }
}

int BinarySearch(int arr[],int len,int a)
{
    int left,high,mid;
    left = 0;
    high = len - 1;
    for(int i =0;i<len;i++)
    {
        mid = (left+high)/2;
        if(a >arr[mid])
            left = mid +1;
        else if(a<arr[mid])
            high = mid -1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[20] = {0};
    for(int i =0;i<20;i++)
    {
        arr[i] = rand()%20;
    }


    //SecSort(arr,20);
    BubbleSort(arr,20);
    for(int j = 0;j<20;j++)
    {
        printf("%d ",arr[j]);
    }

    printf("\n\n");
    int a = BinarySearch(arr,20,5);
    printf("%d",a);

    return 0;
}