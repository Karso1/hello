#include<stdio.h>
typedef struct
{
    int nums[20];
    int length;
}Nums,*PNums;

int search(PNums,int);

int main()
{
    Nums numbers = {{0},0};
    printf("plz input numbers:\n");
    int temp = 0,key = -1;
    while(-1)
    {
        scanf("%d",&temp);
        if(temp == -1 ||numbers.length == 20)
            break;
        numbers.nums[numbers.length++]=temp;
    }
    printf("plz input the number u want to search");
    printf("\n");
    scanf("%d",&key);

    int result = search(&numbers,key);
    if(result != -1)
        printf("the address %d\n",result+1);
    else
        printf("dont found!\n");



}


int search(PNums numbers,int key)
{
    int index = -1;
    int left = 0,right = numbers->length-1,mid = 0;
    int count = 0;
    while(left<=right)
    {
        count ++;
        mid = (int )((left+right)/2);
        if(key == numbers->nums[mid])
        {
            index = mid;
            break;
        }
        else if(key<numbers->nums[mid])
        {
            right = mid -1;
        }
        else
            left = mid +1;
    }
    printf("compared %d numbers",count);
    return index;
}
















