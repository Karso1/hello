#include <stdio.h>
#include<stdlib.h>
#include<time.h>


void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Bubble_Sort(int arr[],int length)
{
    while(length--)
    {
        for(int i=0;i<length-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
            }
        }
    }
}

int main()
{
    int arr[20]={0};
    srand((unsigned)time(NULL));
    for(int i =0;i<20;i++)
    {
        arr[i] = rand()%20;
    }
    for(int i =0;i<20;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    Bubble_Sort(arr[20],20);

    for(int i=0;i<20;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}