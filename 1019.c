#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//memcpy,拷贝多少个字节的元素字符串到一的位置

//int main()
//{
//    int arr1[]={1,2,3,4,5,6,7,8,9,10};
//    int arr2[20]={0};
//    memcpy(arr2,arr1,20);
//    //arr2需要拷贝到的目标起始地址，arr1需要拷贝元素的地址，20，前五个元素一共20个字节
//    for(int i=0;i<5;i++)
//    {
//    printf("%d ",arr2[i]);
//    }
//}

#include<assert.h>

////模拟实现
//void* my_memcpy(void *dest,const void *src,size_t num)
////void *是泛型通用类型，
//{
//    assert(dest && src);
//    void *ret = dest;
//    while(num--)
//    {
//        *(char *) dest = *(char *) src;
//        dest = (char *) dest + 1;
//        src = (char *) src + 1;
//    }
//    return ret;
//}
//
////memcpy函数不用来处理重叠的内存之间的数据拷贝
////memmove用来拷贝重叠内存的数据
//int main()
//{
//    int arr1[]={1,2,3,4,5,6,7,8,9,10};
//    int arr2[20]={0};
//    my_memcpy(arr2,arr1,20);
//    //arr2需要拷贝到的目标起始地址，arr1需要拷贝元素的地址，20，前五个元素一共20个字节
//    for(int i=0;i<5;i++)
//    {
//        printf("%d ",arr2[i]);
//    }
//}


//
////模拟实现memmove
//void *my_memmove(void *dest,const void *src,size_t num)
//{
//    assert(dest && src);
//    void *ret=dest;
//    if(dest<src)
//    {
//        //从前往后
//        while(num--)
//        {
//            *(char *)dest = *(char *)src;
//            dest = (char *)dest+1;
//            src = (char *)src+1;
//        }
//    }
//    else
//    {
//        //从后往前
//        while(num--)
//        {
//            *((char*)dest+num)=*((char *)src+num);
//        }
//    }
//    return ret;
//}
//
//
//void test3()
//{
//    int arr1[]={1,2,3,4,5,6,7,8,9,10};
//    my_memmove(arr1+2,arr1,20);
//    int i =0;
//    for(i=0;i<10;i++)
//    {
//        printf("%d ",arr1[i]);
//    }
//}
//
//int main()
//{
//    test3();
//    return 0;
//}



//int main()
//{
//    int arr1[]={1,2,3,4,5};
//    int arr2[]={1,3,2};
//    int ret = memcmp(arr1,arr2,12);
//    printf("%d\n",ret);
//
//    return 0;
//}


int main()
{
    char arr[]="hello bit";
    memset(arr,'x',5);
    printf("%s\n",arr);
    //xxxxxbit

    int arr[10]={0};
    memset(arr,1,40);
    int i =0;
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}














