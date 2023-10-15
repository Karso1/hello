#include<stdio.h>
#include<string.h>
int main()
{
    int a[3][4]={0};
    printf("%d\n",sizeof(a));
    //48,二维数组的数组名单独放在sizeof内部，表示整个二维数组的大小，3*4*4=48

    printf("%d\n",sizeof(a[0][0]));
    //4，第一个元素


    printf("%d\n",sizeof(a[0]));
    //16，第一行的元素总大小，4*4=16

    printf("%d\n",sizeof(a[0]+1));
    //4，第一行第二个元素的地址
    //因为此时a【0】作为第一行数组名并没有单独放在sizeof内，表示a【0】【0】
    //此时&a【0】【0】+1，表示第一行第二个元素的地址


    printf("%d\n",sizeof(*(a[0]+1)));
    //1,第一行第二个元素的大小，同上对这个元素的地址解引用，得到这个元素


    printf("%d\n",sizeof(a+1));
    //4
    //a虽然是二维数组的地址，但是并没有单独放在sizeof内部，也没有取地址
    //a表示首元素 的地址，二维数组的首元素是他的第一行
    //a就是第一行的地址，a+1表示第二行的地址，地址大小是4


    printf("%d\n",sizeof(*(a+1)));
    //16，第二行元素的大小
    //对第二行地址解引用，访问第二行的所有元素，大小位4*4
    //*（a+1）== a【1】

    printf("%d\n",sizeof(&a[0]+1));
    //4，第二行的地址大小
    //对第一行数组名取地址，拿出第一行的地址，+1得到第二行的地址

    printf("%d\n",sizeof(*(&a[0]+1)));
    //16，第二行所有元素大小
    //同上对第二行地址解引用，计算第二行的元素大小
    printf("%d\n",sizeof(*a));
    //16，此时a表示第一行地址，*a解引用，计算第一行所有元素的大小
    printf("%d\n",sizeof(a[3]));
    //16，第四行元素的大小等价于a【0】，访问的是这个类型，这个一维数组的大小



    int a[5]={1,2,3,4,5};
    int *ptr = (int *)(&a+1);
    //&a+1，跳过整个数组，指向数组最后，并且int*进行强制类型转换
    //ptr也指向该数组最后

    printf("%d,%d",*(a+1),*(ptr-1));
    //*(a+1),首元素地址+1，第二个元素的地址解引用，得到2
    //ptr指向数组最后，-1指向最后一个元素， 解引用得到5
    //2  5



    return 0;
}


struct Test
{
    int Num;
    char *pcName;
    short sData;
    char cha[2];
    short sBa[4];
} * p = (struct Test*)0x100000;
//假设p的值是0x100000，如下表达式的值分别为多少
//已经直到在x86环境下，结构体Test类型的变量大小是20个字节

int main()
{
    printf("%p\n",p + 0x1);
    //原来是0x100000，+1一个结构体大小，一个结构体大小是20个字节
    //0x100014，加了20，用16进制表示

    printf("%p\n",(unsigned long)p+0x1);
    //转换成了无符号长整型在加1
    //1，048，576+1--》1，048，577
    //0x100001
    printf("%p\n",(unsigned int*)p+0x1);
    //0x100000+4---》0x100004
    //整型加1



    int a[4]={1,2,3,4}  ;
    int *ptr1 =(int *)(&a+1);
    //取到数组的地址，+1跳过整个数组，ptr1指向数组最后
    int *ptr2=(int *)((int)a +1);
    //对数组首元素地址强制转换成int类型，此时+1，地址就直接加数字1，
    //在小端存储模式下，指向的地址与a只差一个字节
    printf("%x,%x",ptr1[-1],*ptr2);
    //ptr1[-1] == *(ptr1+(-1)) == *(ptr1-1)
    //所以打印00 00 00 04
    //和2 00 00 00
    //就是4和2000000


    int a[3][2]={(0,1),(2,3),(4,5)};
    //正确初始化应该是用{}表示，
    //这里中间用的（），其实相当于逗号表达式，所以依次是，1，3，5
    //存储的 0 1 ， 2 3 ，4 5实际上是
    //      1 3 ， 5 0 ，0 0
    int *p;
    p = a[0];//a【0】表示首元素的地址，就是a【0】【0】的地址
    printf("%d",p[0]);
    //访问的就是1，第一个元素



    int a[5][5];
    int (*p)[4];//数组指针，指向数组地址的指针
    p = a;
    printf("%p,%d\n",&p[4][2] - &a[4][2],&p[4][2]-&a[4][2]);

    return 0;
}
