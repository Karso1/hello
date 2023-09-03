//求出2*M数组中的最大元素值
#include<stdio.h>
#define M 4
int fun(int a[][M])
{
    int i,j,max;
    max = a[0][0];
    for(i=0;i<2;i++)
        for(j=0;j<M;j++)
            if(max<a[i][j])
                max = a[i][j];
            return max;
}
int main()
{
    int arr[2][M]={4,4,2,1,2,4,6,83};
    printf("max = %d\n",fun(arr));
    return 0;
}