#include<stdio.h>
#include<string.h>


void rever(char *p)
{
    int i =0,f=0;
    if(p[i]=='-')
    {
        f = -1;
        i++;
    }
    else
        f = 1;

    while(*p)
    {
        int a = 0;
        a = f*10+*p;
        p++;
    }
}

int main()
{
    char a[5]={0};
    for(int i=0;i<5;i++)
    {
        scanf("%s",&a[i]);
    }
    rever(a);
    for(int j =0;j<5;j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}


void Bubble(int arr[],int len)
{
    for(int i =0;i<len-1;i++)
    {
        for(int j =0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }






}


void sel(int arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        int min = i;
        for(int j=i;j<len;j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[ i ]= temp;
    }
}

void insert(int arr[],int len)
{
    for(int i=1;i<len;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}





























