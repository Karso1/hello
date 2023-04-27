/*
 *
 * 数组名
 */
/*
#include<stdio.h>
int main()
{
    int arr[10];
    printf("%p\n",arr);
    printf("%p\n",&arr[0]);
    int n = sizeof(arr);
    printf("%d",n);

    return 0;
}*/
/*
 * 数组名确实能表示首元素的地址
 * 但是有两个例外：
 * 1，sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
 * 2，&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
 */

/*
 * 二维数组的数组名的理解
 *
 */

#include<stdio.h>
int main()
{
    int arr[3][4];
    arr;//二维数组的数组名也表示数组首元素的地址，表示的是第一行的大小，而不是第一行第一列

}