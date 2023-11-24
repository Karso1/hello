#include<stdio.h>
void BubbleSort(int arr[],int len);

int main()
{
    int arr[] = {22,34,3,32,82,55,89,50,37,5,64,35,9,70};
    int len = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,len);
    int i;
    for(i = 0;i<len;i++)
        printf("%d ",arr[i]);
    return 0;
}

void BubbleSort(int arr[],int len)
{
    int i,j,temp,flag = 1;
    for(i = 0 ;i<len-1&&flag==1;i++)
    {
        flag = 0;
        for(j = 0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag = 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

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
        for(j=i+1;j<len;j++)
        {
            if(arr[j]<arr[min])
                min = j;
        }
        swap(&arr[min],&arr[i]);
    }
}

void insertion_sort(int arr[],int len)
{
    int i,j,key;
    for(i=1;i<len;i++)
    {
        key = arr[i];
        j = i-1;
        while((j>=0)&&(arr[j]>key))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}