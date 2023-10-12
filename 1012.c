#include<stdio.h>
#include<string.h>
int main()
{
    int a[]={1,2,3,4};

    printf("%d\n",sizeof(a));
    //直接放一个数组名，这时的数组名表示整个数组，计算整个数组大小，单位字节，16

    printf("%d\n",sizeof(a+0));
    //4，32位,此时a表示数组首元素地址，a+0还是首元素地址

    printf("%d\n",sizeof(*a));
    //4.*a是对首元素地址解引用，首元素1，大小位4个字节

    printf("%d\n",sizeof(a+1));
    //4.2第二个元素的大小

    printf("%d\n",sizeof(a[1]));
    //4.2第二个元素的大小

    printf("%d\n",sizeof(&a));
    //4.&a取出的是数组的地址，数组的地址还是个地址

    printf("%d\n",sizeof(*&a));
    //16.解引用数组的地址，得到数组本身，计算数组大小。同时*和&可以抵消

    printf("%d\n",sizeof(&a+1));
    //4.&a拿到数组的地址，地址+1跳过一个数组，到达此数组的最后位置，还是计算一个地址的大小，是4


    printf("%d\n",sizeof(&a[0]));
    //4.第一个元素地址的大小

    printf("%d\n",sizeof(&a[0]+1));
    //4.第二个元素地址的大小
    return 0;
}