#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a,int *b)
{
    int temp  = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int arr[],int len)
{
    int i=0,j=0;
    for(i = 0;i<len-1;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}

void select_sort(int arr[],int len)
{
    int i,j,min;
    for(i=0;i<len-1;i++)
    {
        min = i;
        for(j=i+1;j<len;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}
void insert_sort(int arr[],int len)
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
        arr[j+1]= key;
    }
}

int  BinSearch(int arr[],int len,int key)
{
    int low = 0;
    int high = len-1;
    int mid;
    while(low <= high)
    {
        mid = (high+low)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid]<key)
            low = mid +1;
        else
            high = mid -1;
    }
    return -1;
}




int main()
{
    int i=0,j=0;
    int arr[20] = {0};
    srand((unsigned)time(NULL));
    for( i =0;i<20;i++)
    {
        arr[i] = rand()%20;
    }

    //bubble_sort(arr,20);
    //select_sort(arr,20);
    //insert_sort(arr,20);
    int pos = BinSearch(arr,20,10);
    printf ("%d",pos);
    printf("\n");

    for(j=0;j<20;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}