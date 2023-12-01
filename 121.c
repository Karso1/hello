#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

void bubble_sort(int arr[],int len)
{
    for(int i =0;i<len-1;i++)
    {
        for( int j = len-1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp  = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}