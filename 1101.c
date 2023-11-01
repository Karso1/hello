#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>

////对空指针的解引用操作
//int main()
//{
//    int *p = (int *)malloc(40);
//    //对于这这开辟空间的指针需要判断是否为空指针
//    if(p==NULL)
//    {
//        return 1;
//    }
//    *p = 20;
//    free(p);
//    p = NULL;
//
//    return 0;
//}
//
////对动态开辟空间的越界访问
//int main()
//{
//    int *p = (int *)malloc(40);
//    if(p==NULL)
//    {
//        printf("%s\n",strerror(errno));
//        return 1;
//    }
//    int i = 0;
//    for(i=0;i<=10;i++)
//    {
//        p[i] = i;
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}

////不能对非动态开辟内存使用free释放
//int main()
//{
//    int a = 10;
//    int *p = &a;
//    free(p);
//    p = NULL;
//    //free只能释放动态开辟的空间，他们在堆上
//    //变量的在栈上
//    return 0;
//}


////4，使用free释放一块动态开辟内存的一部分
//int main()
//{
//    int *p = (int *)malloc(40);
//    if(p == NULL)
//    {
//        return 1;
//    }
//    //使用
//    int i = 0;
//    for(i=0;i<10;i++)
//    {
//        *p = i;
//        p++;
//    }
//    //释放
//    free(p);
//    p = NULL;
//    //此时p并不是放在起始位置，进行释放，不能完成
//    //释放必须从头开始
//
//    return 0;
//}

////对同一块动态内存多次释放
//int main()
//{
//    int *p = (int *)malloc(40);
//    free(p);
//    //此时已经释放过，此块内存空间已经还给操作系统
//    p = NULL;
//    //但是如果赋值p为空指针， 此时后续的free能够执行
//
//
//    free(p);
//
//
//    return 0;
//}

//动态开辟内存忘记释放，会导致内存泄露
//有时候由于for或者return等原因使得free无法执行，故无法释放

//void GetMemory(char *p)
//{
//    p = (char *)malloc(100);
//    //由于p是局部变量，出了这个函数之后就会被销毁
//    //但是这块内存空间仍然存在，也没有free，
//    // 最终会内存泄漏
//}
void GetMemory(char **p)
{
    *p = (char *)malloc(100);
}
void Test(void)
{
    char *str = NULL;
    //GetMemory(str);
    GetMemory(&str);
    strcpy(str,"hello world");
    //此时str仍然是空指针，不能直接把字符串放到空指针
    printf(str);
    free(str);
    str = NULL;
}

int main()
{
    Test() ;
    return 0;
}

















