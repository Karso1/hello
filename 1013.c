#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]={'a','b','c','d','e','f'};
    printf("%d\n",sizeof(arr));
    //6，数组的大小，共有6个字节

    printf("%d\n",sizeof(arr+0));
    //4，数组首元素的地址

    printf("%d\n",sizeof(*arr));
    //1，*arr数组首元素，大小是1字节
    //*arr其实就是arr【0】，首元素
    //*（arr+0） == arr【0】
    printf("%d\n",sizeof(arr[1]));
    //1,第二个元素大小

    printf("%d\n",sizeof(&arr));
    //4，数组的地址

    printf("%d\n",sizeof(&arr+1));
    //4，指向数组的末尾，还是个地址

    printf("%d\n",sizeof(&arr[0]+1));
    //4，第二个元素的地址


    //strlen计算字符串长度
    //从给出的  地址  往后开始计算字符串总长度

    printf("%d\n",strlen(arr));
    //随机值，因为没有放\0，后续还有很多随机值，所以不知道字符串长度

    printf("%d\n",strlen(arr+0));
    //随机值，首元素地址加0还是首元素地址，从此处开始计算字符串长度还是不知道到哪里结束，没有结束符

    printf("%d\n",strlen(*arr));
    //报错，因为strlen需要的是地址，而不是一个具体的字符，
    // 此时给的是a，ASCII是97，相当于把97给strlen，相当于给的是一个野指针

    printf("%d\n",strlen(arr[1]));
    //相当于strlen（b），等同于上一个，传的野指针

    printf("%d\n",strlen(&arr));
    //随机值，并且和前面两个随机值一样，因为起始位置一样

    printf("%d\n",strlen(&arr+1));
    //随机值-6，跳过了此数组，也就是跳过了6个字节

    printf("%d\n",strlen(&arr[0]+1));
    //随机值-1，从第二个元素开始数，跳过了第一个元素，即跳过了1个字节



    char arr1[]="abcdef";//系统自己在最后加了\0
    printf("%d\n",sizeof(arr1));
    //7，加上\0一共七个字节

    printf("%d\n",sizeof(arr1+0));
    //4，首元素地址

    printf("%d\n",sizeof(*arr1));
    //1，首元素a是一个字符，一个字节

    printf("%d\n",sizeof(arr1[1]));
    //1，同上

    printf("%d\n",sizeof(&arr1));
    //4，数组的地址

    printf("%d\n",sizeof(&arr1+1));
    //4，跳过整个数组，仍是一个地址

    printf("%d\n",sizeof(&arr1[0]+1));
    //4，b的地址


    //strlen是求字符串长度的，关注的是字符串中的\0之前的
    //strlen是库函数，只针对字符串

    //sizeof是操作符
    //sizeof只关注占用空间的大小，不在乎内存里放的是什么，即使是\0也计算


    printf("%d\n",strlen(arr1));
    //6,首元素地址开始往后数，不数\0，前面一共6个字符

    printf("%d\n",strlen(arr1+0));
    //6，从首元素开始数

    printf("%d\n",strlen(*arr1));
    //err

    printf("%d\n",strlen(arr1[1]));
    //err，strlen需要的是地址不是具体元素
    printf("%d\n",strlen(&arr1));
    //6，求数组的字符串大小，取出的整个数组的地址也是从第一个元素开始的

    printf("%d\n",strlen(&arr1+1));
    //随机值，跳过整个数组，从这个数组最后开始往后数，不清楚具体情况

    printf("%d\n",strlen(&arr1[0]+1));
    //5，从第二元素开始数，后面共有5个




    char *p = "abcdef";//把首字符a的地址给到了指针变量p
    printf("%d\n",sizeof(p));
    //4,求指针变量的大小，也就是一个地址的大小
    printf("%d\n",sizeof(p+1));
    //4，指针后面的指针，也就是还是一个指针
    printf("%d\n",sizeof(*p));
    //1,访问的a的大小

    printf("%d\n",sizeof(p[0]));
    //1，求第一个元素a的大小

    printf("%d\n",sizeof(&p));
    //4，指针变量的地址还是个指针，二级指针的大小还是指针的大小

    printf("%d\n",sizeof(&p+1));
    //4，还是地址

    printf("%d\n",sizeof(&p[0]+1));
    //4，b的地址


    printf("%d\n",strlen(p));
    //6，从a的地址开始往后数，共有6个

    printf("%d\n",strlen(p+1));
    //5，从b的地址开始往后数，共5个

    printf("%d\n",strlen(*p));
    //err，传的具体元素，不是地址

    printf("%d\n",strlen(p[0]));
    //err，同上

    printf("%d\n",strlen(&p));
    //随机，指向指针p的地址，二级指针，此时的地址与此数组无关，故此时数到的字符串未知

    printf("%d\n",strlen(&p+1));
    //随机，同上，都是二级指针，与原数组的字符串个数无关
    // 但此时的随机值与上一个随机值无关，因为可能上一个二级指针后有\0，不确定和此时的二级指针连续相差这个数组的字符串个数


    printf("%d\n",strlen(&p[0]+1));
    //5，从第二个元素的地址开始往后数



    return 0;
}