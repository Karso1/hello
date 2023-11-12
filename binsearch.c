#include<stdio.h>
int Binsearch(int arr[],int len,int key)
{
    int low = 0;
    int high = len-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2 ;
        if(key == arr[mid])
            return mid;
        else if(key>arr[mid])
            low = mid+1;
        else
            high = mid -1;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,34,5,6,55,6,1,3,431,421,};
    printf("%d \n", Binsearch(arr,(sizeof(arr)/sizeof(arr[0])),7));
    return 0;
}