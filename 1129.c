#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAXSIZE 30

void swap(int *a,int *b)
{
    int temp  = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[],int len)
{
    int i,j;
    for(i=0;i<len-1;i++)
    {
        for(j = len-1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
                swap(&arr[j],&arr[j-1]);
        }
    }
}

void SelectSort(int arr[],int len)
{
    int i,j,min;
    for(i=0;i<len;i++)
    {
        min = i;
        for(j=i+1;j<len;j++)
        {
            if(arr[j]<arr[min])
                min = j;
        }
        swap(&arr[min],&arr[i]);
    }
}

int main()
{
    int arr[MAXSIZE] = {0};
    srand((unsigned)time(NULL));
    for(int i = 0;i<MAXSIZE;i++)
    {
        arr[i] = rand()%100;
    }

    //BubbleSort(arr,MAXSIZE);

    SelectSort(arr,MAXSIZE);

    for(int j=0;j<MAXSIZE;j++)
    {
        printf("%d ",arr[j]);
    }

    return 0;
}