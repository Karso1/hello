//1031  当student是结构名stu是其变量，则用“.”应用。如果是其指针，则用->
//1032  data是结构体变量，a是其成员，引起引用a域的方法是：data.a。取其地址赋值给指针变量p：p=&data.a
/*1033  typedef：给定义的结构体取别名
 * 1034 int*p：p是指向int型数据的指针
 * 1035 int *p=&i，i；等价于int *p=i；int i；。表示i在定义了p之后，系统报错没有定义过i
 * 1036 int *p=&a取到的地址是数组指针，也就是说&a其实类型是数组指针，应该在后面加上【
 * 1037 int a【5】，*p=a，对数组元素的正确引用；*（p+2）
 * 1038 不能把整型变量的值赋给指针
 * 1039 *p+=9相当于第一个位置的元素自加9，*（p+8）是取数组里的第9个数值
 * 1040 \n换行        空   \0作为字符串结束标志
 */
//输入三个整数abc，输出其中最大值

//同时满足a>b和a>c。&&
/*include<stdio.h>
 * int main()
 * {
 * int a,b,c;
 * scanf("%d%d%d",&a,&b,&c);
 * if(a>b&&a>c)printf("%d",a);
 * if(b>a&&b>c)printf("%d",b);
 * if(c>a&&c>b)printf("%d",c);
 * return 0;
 }*/
//只需要求最大值，不需要排序，所以先两个数比较，第三个数只要跟前两个数重大的相比就行
/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(c>a)printf("%d",c);
        if(c<a)printf("%d",a);
    }
    if(b>a)
    {
        if(c>b)printf("%d",c);
        if(c<b)printf("%d",b);
    }
    return 0;
}*/

//在二的思路上进行改进，也就是擂台法，多定义一个d。谁大谁是d
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) d=a;
    else d=b;
    if(c>d) d=c;
    printf("%d",d);
    return 0;
}