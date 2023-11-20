#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAXSIZE 100
void init(int arr[],int length)
{
    srand((unsigned)time(NULL));
    for(int i = 0;i<length;i++)
    {
        arr[i] = rand()%100;
    }
}

void Swap(int *a,int *b)
{
    int *temp = a;
    a = b;
    b = temp;
}

void Show(int arr[],int length)
{
    for(int i =0;i<length;i++)
    {
        printf("%d ",arr[i]);
    }
}

void SelSort(int arr[],int length)
{
    for(int i=1;i<length;i++)
    {
        int min = i;
        for(int j = i;j<length;j++)
        {
            if(arr[min]>arr[j])
                min = j;
        }
        Swap(&arr[min],&arr[i]);
    }
}

int main()
{
    int arr[MAXSIZE] = {0};
    init(arr,MAXSIZE);

    printf("befor sort:");
    Show(arr,MAXSIZE);
    printf("\n");

    printf("after sort:");
    SelSort(arr,MAXSIZE);
    Show(arr,MAXSIZE);
    printf("\n");

    return 0;
}