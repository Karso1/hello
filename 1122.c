#include<stdio.h>

void bubble_sort(int arr[],int len)
{
    int i,j,temp;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
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

    for(i = 0;i<len-1;i++)
    {
        int min = i;
        for(j = i+1;j<len;j++)
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
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}





























