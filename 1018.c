#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>

//
////strstr
////查找子串的函数，在一个字符串里找另外一个字符串
//int main()
//{
//    char email[]="abcdef";
//    char substr[]="bc";
//    char *ret = strstr(email,substr);
//    if(ret == NULL)
//    {
//        printf("字串不存在\n");
//    }
//    else
//    {
//        printf("%s\n",ret);
//        //返回的是一个指针，所以打印会打印出后续的多于字符
//    }
//
//    return 0;
//}

////模拟实现
//
//char *my_strstr(const char*str1,const char* str2)
//{
//    assert(str1 && str2);
//    const char *s1 = str1;
//    const char *s2 = str2;
//    const char *p = str1;
//    while(*p)
//    {
//        s1 = p;
//        s2 = str2;
//        while(*s1!='\0' && *s2!='\0' && *s1 == *s2)
//        {
//            s1++;
//            s2++;
//        }
//        if(*s2 == '\0')
//        {
//            return 0;
//        }
//        p++;
//
//    }
//}
//int main()
//{
//    char email[]="abcdef";
//    char substr[]="bcd";
//    char *ret = my_strstr(email,substr);
//    if(ret == NULL)
//    {
//        printf("字串不存在\n");
//    }
//    else
//    {
//        printf("%s\n",ret);
//
//    }
//    return 0;
//}

//
////strtok
////切割字符串
////
//
//int main()
//{
//    const char *sep = "@.";
//    char email[]="karso1101@gmail.com";
//    char cp[30]={0};
//    strcpy(cp,email);
//
//    char *ret = strtok(cp,sep);
//    printf("%s\n",ret);
//
//    ret = strtok(NULL,sep);
//    printf("%s\n",ret);
//
//    ret = strtok(NULL,sep);
//    printf("%s\n",ret);
//
//    ret = strtok(NULL,sep);
//    printf("%s\n",ret);
//
//    return 0;
//}


////strerror
////返回错误码所对应的错误信息
////c语言库函数再执行失败时都会设置错误码，但是这些0123这些错误码无法看懂
////所以需要strerror
//
//int main()
//{
//    printf("%s\n",strerror(0));
//    printf("%s\n",strerror(1));
//    printf("%s\n",strerror(2));
//    printf("%s\n",strerror(3));
//    printf("%s\n",strerror(4));
//    printf("%s\n\n\n",strerror(5));
//
//    //errno--c语言设置的一个全局的错误码存放的变量
//
//    FILE *pf = fopen("test.txt","r");
//    if(pf == NULL)
//    {
//        printf("%s\n",strerror(errno));
//        return 1;
//    }
//    else
//    {
//        //
//    }
//
//
//    return 0;
//
//
//
//}

//是否为：
//
//iscntrl,任何控制字符
//isspace，空白字符，空格，换页\f,换行，回车\r,制表符\t,垂直制表符\v
//isdigit，是否是0-9
//isxdigit，16进制
//islower，a-z
//isupper，大写A-Z
//isalpha，所有字母
//isalnum，字母或者数字
//ispunct，标点符号，任何不属于数字或者字母的图形字符，可以打印的
//isgraph，任何图形字符
//isprint，任何可打印字符，包括圆形字符和空白字符

//#include<ctype.h>
//int main()
//{
//    int a = isspace("w");
//    printf("%d\n",a);//0,可以通过这种方式，查找出是否是空格，数字，字母
//    return 0;
//}




//memcpy
//cong source的位置开始向后复制num个字节数据到dstination的位置
//遇到'\0'不会停下来
//int main()
//{
//    int arr1[]={1,2,3,4,5,6,7};
//    int arr2[10]={0}    ;
//    memcpy(arr2,arr1,28);
//
//
//    float arr3[5]={1.0,2.5,3.0,5.0,6.0};
//    float arr4[10]={0.0}  ;
//    memcpy(arr4,arr3,20);
//
//
//
//
//
//
//    return 0;
//}


//模拟实现memcpy
void* my_memcpy(void *dest,const void* src,size_t num)
{
    assert(dest && src);
    void *ret = dest;
    while(num--)
    {
        *(char*)dest = *(char *)src;
        dest = (char *)dest+1;
        src=(char *)src+1;
    }

    return ret;

}

int main()
{
    int arr1[]={1,2,3,4,5,6,7};
    int arr2[10]={0}    ;
    my_memcpy(arr2,arr1,28);


    float arr3[5]={1.0,2.5,3.0,5.0,6.0};
    float arr4[10]={0.0}  ;
    my_memcpy(arr4,arr3,20);



    return 0;
}













