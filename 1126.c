#include<stdio.h>
#include<stdlib.h>

void Bubble_Sort(int arr[],int len)
{
    int flag = 1;
    for(int i=0;i<len-1&&flag == 1;i++)
    {
        flag = 0;
        for(int j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag = 1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
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

void select_sort(int arr[],int len)
{
    int i,j;
    for(i=0;i<len-1;i++)
    {
        int min = i;
        for(j = i+1;j<len;j++)
        {
            if(arr[j]<arr[min])
                min = j;
        }
        swap(&arr[i],&arr[min]);
    }
}

void insert_sort(int arr[],int len)
{
    int i,j,key;
    for(i = 1;i<len;i++)
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

void shell_sort(int arr[],int len)
{
    int gap,i,j,temp;
    for(gap = len>>1;gap>0;gap>>=1)
    {
        for(i = gap;i<len;i++)
        {
            temp = arr[i];
            for(j = i-gap;j>=0&&arr[j]>temp;j-= gap)

                arr[j+gap]= arr[j];
            arr[j+gap] = temp;
        }
    }
}

int min(int x,int y)
{
    return x<y?x:y;
}
void merge_sort(int arr[],int len)
{
    int *a = arr;
    int *b = (int *)malloc(sizeof(int)*len);
    int seg,start;

    for(seg = 1;seg<len;seg += seg)
    {
        for(start = 0;start<len;start+= seg*2)
        {
            int low = start,mid =min(start +seg,len),high = min(start+seg*2,len);
            int k = low;
            int start1 = low,end1 = mid;
            int start2 = mid,end2 = high;
            while(start1 <end1 &&start2<end2)
                b[k++]=a[start1]<a[start2]?a[start1++]:a[start2++];
            while(start1 <end1)
                b[k++] = a[start1++];
            while(start2<end2)
                b[k++] = a[start2++];
        }
        int *temp = a;
        a = b;
        b = temp;
    }
    if( a != arr)
    {
        int i;
        for(i=0;i<len;i++)
            b[i] = a[i];
        b = a;
    }
    free(b);
}

void quick_sort_recursive(int arr[],int start,int end)
{
    if(start >= end)
        return ;
    int mid = arr[end];
    int left = start,right = end-1;
    while(left<right)
    {
        while(arr[left]<mid && left<right)
            left++;
        while(arr[right]>= mid&&left<right)
            right--;
        swap(&arr[left],&arr[right]);
    }
    if(arr[left]>= arr[end])
        swap(&arr[left],&arr[end]);
    else
        left++;
    if(left)
        quick_sort_recursive(arr,start,left-1);
    quick_sort_recursive(arr,left+1,end);
}
void quick_sort(int arr[],int len)
{
    quick_sort_recursive(arr,0,len-1);
}






















