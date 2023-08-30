//第k行和第0行元素互换

#include<stdio.h>
#define N 3
#define M 4
void fun(int (*a)[N],int k)
{
    int i,temp;
    for(i=0;i<N;i++)
    {
        temp = a[0][i];
        a[0][i] = a[k][i];
        a[k][i] = temp;
    }
}

int main()
{
    int x[M][N] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}},i,j;
    printf("the array before moving:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
            printf("%3d",x[i][j]);
        printf("\n");
    }
    fun(x,2);
    printf("the array after moving:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
            printf("%3d",x[i][j]);
        printf("\n");
    }
    return 0;
}