/*
 * 输入一个学生的三科成绩，用数组存储起来，并输出该生3门课程的平均分，总分
 *
 */
/*
#include<stdio.h>
int zongfen(int a,int b,int c)
{
    return a+b+c;
}
int average(int a,int b,int c)
{
    return (a+b+c)/3;
}
int main()
{
    int arr1[3],a,b,c;
    int arr2[3];
    int *p;
    printf("plz input the grade:\n");
    int i;

    for(i=0;i<3;i++)
    {
        scanf("%d",&arr1[i]);
    }


   // scanf("%d",&arr1[0,2]);
    for(i=0;i<3;i++)
    {
        *p=arr1[i];
        arr2[i]=*p;
    }
    a=arr2[1];b=arr2[2];c=arr2[3];
    printf("the total goal is:%d\n", zongfen(a,b,c));
    printf("the average goal is:%d\n",average(a,b,c));
    return 0;
}
*/


//v2使用数组函数
#include<stdio.h>
#include<string.h>
int total(int arr[])
{
    //v1暴力求解
    int i, total = 0;
    //数组长度
    int n = sizeof(arr)/sizeof(int);
            //通过sizeof求数组长度，比如arr里有10个整型，则分子为40，分母是首元素4，得到长度为10
    for(i=0;i<n;i++)
    {
        total = total + arr[i];
    }
    return total;
}
int division(int a,int b)
{
    return a/b;
}
int average(int arr)
{
    int *p,i,n,sum,average;
    n = sizeof(arr)/sizeof(int);
    for(i=0;i<n;i++)
    {
        *p = arr[i];
        sum = sum+*p;
    }
    return average = division(sum,3);
}
int main()
{
    int arr[3];
    printf("plz input 3 number:\n");
    scanf("%d",&arr[1,3]);
    return 0;
}