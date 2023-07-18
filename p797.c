/*
 * 从键盘读入5行9列整数保存到二维数组，调用用户自定义函数查找数组中最大元素
 * 以及其所在位置的行列下标
 */

#include<stdio.h>
int main()
{
    int arr[5][9],i,j,max,maxRow,maxCol;
    printf("input matrix:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    max= max1(arr,&maxRow,&maxCol);
    printf("The max is %d,row-sub is %d,col-sub is %d\n",max,maxRow,maxCol);
    return 0;
}

int max1(int a1[5][9],int *maxi,int *maxj)
{
    int i,j,x1=0,y1=0,maxx=a1[0][0];
    for(i=0;i<5;i++)//i代表行的下标，小于5进入循环，在循环中依次对每一行的列查找

    {
        for(j=0;j<9;j++)
        //for代表列，在i行的循环体内进行列的查找，当此行的9列数据全部查找完毕
            //则退出循环，i++，重新进入循环在第二行进行列的查找
        {
            if(a1[i][j]>maxx)
            //如果此时取到的元素大于已有的最大元素maxx，初始为第一行第一列
            {
                maxx=a1[i][j];
                //将大的此数据赋值给maxx
                x1=i;
                //将此数据的行i给x1
                y1=j;
                //列j给j
            }
        }
    }
    *maxi=x1;
    *maxj=y1;
    return maxx;
}