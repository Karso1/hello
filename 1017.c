#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//c语言没有字符串的类型，所以需要一系列的函数进行相关操作

//strlen
//求一个字符串的长度
//int main()
//{
//    char arr[]={'b','i','t'};//求这个数组字符串的长度不知道，因为没有放\0
//    //strlen要一直找到\0之前的所有字符
//    //char arr[]="abcdef";//abcdef\0
//    int len = strlen(arr);
//    printf("%d\n",len);
//    //6.不算\0
//
//    return 0;
//}

//int main()
//{
////    if(strlen("abc")-strlen("abcedef")>0)//strlen返回的是无符号整型
////        //3-6=-3
////        //-3的补码是一个相当大的正数
//if(strlen("abc")>strlen("abcdef"))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<=\n");
//    }
//    return 0;
//}
//
//
////模拟实现strlen
//
////1，计数器的方法
//size_t my_strlen(const char *str)//使得长度不被修改
//{
//    //int count=0;
//    size_t count = 0;
//    assert(str);//断言指针不为空
//    while(*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    //此时count里记录了字符个数
//    return count;
//}
////2，指针-指针的方法
////3，递归的方法
//int main()
//{
//    char arr[]="abcdef";
//    size_t n = my_strlen(arr);//size_t表示无符号整型，因为长度不会是负数所以没必要用int有符号整型
//    return 0;
//}


//strcpy
//int main()
//{
//      char name[20]={0};
////    strcpy(name,"zhangsan");//把二拷贝到1里去
////    //当2的位置上提前有了\0，那么拷贝会提前结束
////    //name = "zhangsan"//404,name是数组名的地址，地址是一个常量值，不能修改不能被赋值
////    //name[0]="zhangsan";//404
////
//    char arr[]={'b','i','j'};
//    strcpy(name,arr);//无法拷贝，因为此时数组里没有\0,不知道拷贝到哪里结束
//
//
//    printf("%s",name);
//}


//my_strcpy(char *x,char *y)
//{
//    int i=0,j=0;
//    while(y[i])
//    {
//        x[j]=y[i];
//        j++;
//        i++;
//    }
//}

//创造实现，并不是模拟实现
//void my_strcpy(char *dest,const char *src)
//{
//    assert(dest);
//    assert(src);//判断是否为空指针，如果是就报错
//    while(*src)
//    {
//        *dest++ = *src++;
//    }
//    *dest = *src;//\0
//}

//char *my_strcpy(char *dest,const char *src)
//{
////    assert(dest);
////    assert(src);
//assert(dest&&src);
//  char *ret = dest;
////    while(*src)
////    {
////        *dest++=*src++;
////    }
////    *dest=*src;
//while(*dest++= *src++)
//{
//    ;
//}
//    return ret;
//}
//int main()
//{
//    char arr1[]="abcdef";
//    char arr2[20]={0};
//    my_strcpy(arr2,arr1);
//    printf("%s\n",arr2);//abcdef
//
//    return 0;
//}


//字符串追加

//int main()
//{
//    char arr1[20]="hello";
//    strcat(arr1,"world");
//    //把world链接到arr1后面
//    printf("%s\n",arr1);
//    //源字符串里必须有\0 ,且容得下需要连接的地址，还可以修改
//}
//
////模拟strcat
//char *my_strcat(char *dest,const char* src)
//{
//    char *ret=dest;
//    assert(dest&&src);
//    //1,找到目标空间的末尾，也就是\0的位置
//    while(*dest !='\0')
//    {
//        dest++;
//    }
//    //拷贝字符串
//    while(*dest++=*src++)
//    {
//        ;
//    }
//    return ret;
//}
//
////不能自己给自己追加，因为\0会被覆盖，因此会一直复制下去，不会结束循环
//int main()
//{
//    char arr1[20]="hello";
//    my_strcat(arr1,"world");
//    printf("%s\n",arr1);
//    return 0;
//}

//
//int main()
//{
//    char arr1[20]="zhangsan";
//    char arr2[]="zhangsanfeng";
//    //比较一下两个字符是否相等
//    //arr1是数组名，数组名是数组首元素的地址
//    //arr2是数组名，数组名是首元素的地址
//    if(arr1 == arr2)
//    {
//        printf("==\n");
//    }
//    else
//    {
//        printf("!=\n");
//    }
//    //这样比较的话，只是比较这两个数组首元素的地址是否相同，也就是说这两个数组中的z是否相同
//    //显然，不同
//    //此处比较的是两个地址，不是两个数组的内容
//
//    //两个字符串比较相等，需要使用
//    //strcmp;
//    return 0;
//
//
//}

//比较字符串是否相等，用strcmp
//int main()
//{
//    char arr1[20]="zhangsan";
//    char arr2[]="zhangsanfeng";
//    int ret = strcmp(arr1,arr2);
//    //strcmp通过返回值的正负，判断大小
//    //实际上是比较这两个字符串的同样位置上的大小
//    //不在乎长度，只在乎从最开始位置往后的每一个位置上的大小关系
//
//    if(ret<0)
//    {
//        printf("<\n");
//
//    }
//    else if(ret == 0)
//        printf("==\n");
//    else
//        printf(">\n");
//
//}

//模拟实现strcmp

//int my_strcmp(const char *str1,const char *str2)//只负责比较他们指向的内容，安全起见加上const
//{
//    assert(str1 &&str2);
//
//   while(*str1 == *str2)
//   {
//       if(*str1=='\0')
//       {
//           return 0;
//       }
//       str1++;
//       str2++;
//   }
//   if(*str1>*str2)
//   {
//       return 1;
//   }
//   else
//   {
//       return -1;
//   }
//}
//int main()
//{
//    char arr1[20]="zhangsan";
//    char arr2[]="zhangsanfeng";
//    int ret = my_strcmp(arr1,arr2);
//    //strcmp通过返回值的正负，判断大小
//    //实际上是比较这两个字符串的同样位置上的大小
//    //不在乎长度，只在乎从最开始位置往后的每一个位置上的大小关系
//
//    if(ret<0)
//    {
//        printf("<\n");
//
//    }
//    else if(ret == 0)
//        printf("==\n");
//    else
//        printf(">\n");
//
//}


//长度受限制的字符串函数
// 操作的时候需要考虑要拷贝或者链接比较多少个字节
//相对比较安全

//strncpy
//strncat
//strncmp

//int main()
//{
//    char arr1[20]="abcdef";
//    char arr2[]="hello bit";
//    //strcpy(arr1,arr2);
//    strncpy(arr1,arr2,5);
//    //第三个参数就是要拷贝几个字节
//    printf("%s\n",arr1);
//    return 0;
//}

//int main()
//{
//    //strncat
//    char arr1[20]="hello";
//    char arr2[]="world";
//    strncat(arr1,arr2,3);
//    //此处将wor追加到了arr1后，
//    //后面的\0再追在之后自动补\0
//    //如果追加的3变成6，不会多补\0，会提前停止
//
//    printf("%s\n",arr1);
//    return 0;
//}

int main()
{
    char arr1[]="abcdef";
    char arr2[]="abc";
    int ret = strncmp(arr1,arr2,4);
    //第三个数字4表示的是比较的个数
    //如果传的是负数，负数补码非常大，而且当成了无符号整型
    if(ret == 0)
        printf("==\n");
    else if(ret<0)
    {
        printf("<\n");
    }
    else
        printf(">\n");
    return 0;
}