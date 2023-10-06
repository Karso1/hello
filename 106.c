/*
 * 指针就是个变量，用来存放地址，地址唯一标识一块内存空间
 * 指针大小固定4个字节
 * 指针式有类型的，指针的类型决定了指针的+-整数的步长，指针解引用操作时候的权限
 */

//字符指针char *p
#include<stdio.h>
#include<string.h>
int main()
{
    char ch = 'w';
    char * pc;
    pc = &ch;
    *pc = 'b';
    printf("%c\n",ch);

    char *p = "abcdef";
    printf("%s\n",p);//abcdef
    //把字符串首字母a的地址，赋值给了p
    //当打印p所指的字符串时，即abcdef
    char arr[]="abcdef";//将abcdef字符串放到字符串数组里
    printf("%s\n\n\n",&arr);


    char *p1 = "abcdef";
    char *p2 = "abcdef";

    char arr1[]="abcdef";
    char arr2[]="abcdef";

    if(p1==p2)
        printf("p1==p2\n");//相等
        //因为p1和p2指针都是存放的abcdef
    else
        printf("p1!=p2\n");
    if(arr1==arr2)
        printf("arr1 == arr2\n");
    else
        printf("arr1 != arr2");
    //不相等，因为arr1和2是两个数组，创立了两个独立不同的内存空间
    //这两个空间的起始地址不同，arr1和2数组名代表首元素的地址，所以比较首元素的地址
    printf("\n\n\n");


    //指针数组
    //存放指针的数组
    int arr3[10];//整型数组
    char ch3[5];//字符数组

    int *arr4[6];//存放整型指针的数组
    char *arr5[5];//存放字符指针的数组

    int ar1[]={1,2,3,4,5};
    int ar2[]={2,3,4,5,6};
    int ar3[]={3,4,5,6,7};

    int *parr[3] = {ar1,ar2,ar3};
    //模拟了一个指针数组，里面存放了三个地址，也就是三个指针变量，分别代表，1，2，3

    int i=0;
    for(i=0;i<3;i++)
        printf("%d\n",*parr[i]);

    int m =0;
    for(m=0;m<3;m++)
    {
        int n=0;
        for(n=0;n<5;n++)
        {
            //*(p+i)==p[i];
           // printf("%d ",*(parr[m]+n));
            printf("%d ",parr[m][n]);
        }
    }

    printf("\n\n\n")    ;


    //c语言实现简单数据结构
    //指针+结构体+动态内存管理


    //数组指针
    //数组指针是指向数组的指针


    int *pp1[10];//指针数组，存放10个int指针变量的数组
    int (*pp2)[10];//数组指针，指向数组的指针。可以指向一个数组，该数组由10个元素，每个元素是int类型


    //在此讨论数组名
    int arrr[10]={0};
    printf("%p\n",arrr);//数组名是首元素地址
    printf("%p\n",&arrr[0]);//首元素的地址
    printf("%p\n",&arrr);//整个数组的地址
    //数组的地址也是从首元素地址开始
    //所以三个值一样
    //但是
    printf("%p\n",arrr+1);//与首元素地址相差4
    printf("%p\n",&arrr[0]+1);//与首元素地址相差4
    printf("%p\n",&arrr+1);//与数组地址开始地址差4*10=40个字节
    //跳过了整个数组，指向了此数组的末尾

    int sz=sizeof(arrr);
    printf("%d\n",sz);//40..此时arr的字节大小并不是4
    //数组名通常表示的都是数组的首元素地址
    //但是有两个例外
    //1。sizeof内部单独放一个数组名时（arr+0）不算单独放一个数组名，这里的数组名表示整个数组，计算的是整个数组的大小
    //2.&数组名，&arr这里的数组名表示的依然是整个数组，所以此时取出的时整个数组的地址
    return 0;
}