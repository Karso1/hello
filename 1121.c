#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void Bubble_Sort(int arr[],int length)
{
    while(length--)
    {
        for(int i =0;i<length;i++)
        {
            if(arr[i]>arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

}

void Sel_Sort(int arr[],int length)
{
    for(int i =0;i<length;i++)
    {
        int min = i;
        for(int j=i;j<length;j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min]= arr[i];
        arr[i]= arr[min];
    }
}
int main()
{
    int arr[20] = {0};
    srand((unsigned)time(NULL));
    for(int i =0;i<20;i++)
    {
        arr[i] = rand()%20;
    }

    Sel_Sort(arr,20);
    for(int i =0;i<20;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}