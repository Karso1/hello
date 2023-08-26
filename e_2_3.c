/*
 * 函数fun，函数的功能是移动一维数组中的内容，
 * 若数组中有n个整数，要求把下标从0到p的数组元素平移到数组的最后
 */

/*
#include<stdio.h>
#define N 80
void sswap(int *w,int p,int n);
int main()
{
    int a[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i,p,n=15;
    printf("The original data:\n");
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
    printf("\nplz input p:");
    scanf("%d",&p);
    sswap(a,p,n);
    printf("\nThe data after moving:\n");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    printf("\n\n");
    return 0;
}
void sswap(int *w,int p,int n)
{
    int i=0,temp;
    for(i=0;i<=p;i++)
    {
        temp = w[i+n-p];
        w[i+n-p]=w[i];
        w[i] = temp;
    }
}
*/



#include<stdio.h>
#define N 80
void fun(int *w,int p,int n)
{
    int x,j,ch;
    for(x=0;x<=p;x++)
    {
        ch=w[0];//将第一个元素保存到ch
        for(j=1;j<n;j++)
        {
            w[j-1]=w[j];//然后把每一个元素依次往前挪一个，空出最后一个位置
        }
        w[n-1]=ch;//将最后一个位置赋值为ch
    }
}
int main()
{
    int a[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i,p,n=15;
    printf("The original data:\n");
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
    printf("\nplz input p:");
    scanf("%d",&p);
    fun(a,p,n);
    printf("\nThe data after moving:\n");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    printf("\n\n");
    return 0;
}
