#include<stdio.h>
#include<string.h>
#include<stdlib.h>


////枚举
//enum Sex
//{
//    male=1,
//    female,
//    screat
//};
//
//int main()
//{
//    printf("%d",female);//2
//    return 0;
//}
//
////枚举增加代码可读性
////防止污染，封装
////define只能完成替换，比如说在计算的时候产生的问题
////便于调试，使用方便
//enum Option
//{
//    EXIT=1,
//    ADD,
//    DEL,
//    MUL
//};
//int main()
//{
//    int input;
//    scanf("%d",&input);
//    switch(input)
//    {
//        case ADD:
//            break;
//        case DEL:
//            break;
//    }
//}


////联合（共用体）
////这种类型定义的变量共用同一块内存空间
////联合体的大小至少是最大的变量的大小
//union Un
//{
//    int a;
//    char c;
//};
//
//struct St
//{
//    int a;
//    char c;
//};
//
//int main()
//{
//    union Un u;
//    printf("%d\n",sizeof(u));
//    //4
//    printf("%p\n",&u);
//    printf("%p\n",&(u.a));
//    //同一个地址
//
//
//    return 0;
//}


//动态内存管理
//malloc
//calloc
//realloc
//free

////malloc
////开辟内存块，
//#include<stdlib.h>
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int arr2[n];//变长数组，n可由输入控制
//
//    int arr[10]={0};//直接创建数组开辟空间
//    //动态内存开辟
//    int *p = (int *)malloc(40);
//    if(p==NULL)
//    {
//        printf("%s\n",strerror(errno));
//        //打印错误信息
//        return 1;
//    }
//    //开辟成功
//    //使用
//    int i = 0;
//    for(i=0;i<10;i++)
//    {
//        *(p+i) = i;
//    }
//    for(i=0;i<10;i++)
//    {
//        printf("%d ",*(p+i));
//    }
//    //没有free，但并不意味着内存空间不回收了
//    //当程序退出的时候，系统会自动回收内存空间
//    free(p);//不用了之后，释放掉为p开放的内存空间
//    p = NULL;
//    //释放掉为p开辟的空间，free，防止内存泄漏
//
//    return 0 ;
//}


//free只能释放动态内存，堆上的变量


////calloc
////
//int main()
//{
//    //开辟10个整型的空间
//    int *p = (int *)calloc(10,sizeof(int));
//    //calloc再开辟空间的时候，会把内存里初始化为0
//    //malloc不会进行初始化
//    //calloc = malloc + memset
//    if(p==NULL)
//    {
//        printf("%s\n",strerror(errno));
//        return 1;
//    }
//
//    int i =0;
//    for(i=0;i<10;i++)
//    {
//        printf("%d ",*(p+i));
//    }
//
//    free(p);
//    p = NULL;
//    return 0;
//}


////realloc
////修改空间大小
//
//int main()
//{
//    int *p =(int *)malloc(40);
//    if(NULL == p)
//    {
//        printf("%s\n",strerror(errno));
//        return 1;
//    }
//
//    int i =0;
//    for(i=0;i<10;i++)
//    {
//        *(p+i)=i+1;
//    }
//    //扩容
//    int *ptr =realloc(p,80);
//    if(ptr != NULL)
//    {
//        p = ptr;
//    }//需要考虑返回的是不是空，然后再赋值给p，不然会对原地址元素破坏
//
//    //原来有40个字节，在后续追加40个字节的空间
//   80是之后的空间大小
//    //返回的原来的空间地址
//
//    //如果后续追加内存不够，就再找一块空间追加
//    //并且把旧的空间的数据拷贝下来，返回的是新空间的地址
//    //旧的空间会被释放掉
//
//    for(i=0;i<10;i++)
//    {
//        printf("%d ",*(p+i));
//    }
//    free(p);
//    p = NULL;
//
//    return 0;
//}


//malloc不释放的话，一直申请会导致内存碎片出现
//内存池，首先向内存申请一块够用的内存池，在开辟



//动态的通讯录
//如果通讯录




































