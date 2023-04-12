/* 'w'是一个字符。
 * 1.字面常量
 * 2.const修饰的常变量。const int a=10.  这个a是常量等于10，后续不能在对a重新赋值。具有常量属性的变量，常变量
 * 3.define定义的标识符常量。    在int main之前，#define MAX = 100，后续用到MAX，实际上就都是用的100
 * 4，枚举常量。  int main之前，enum color{RED GREEN BLUE}。这三个三原色就是枚举常量
 */

/*字符串
 * char 字符类型
 * “asdwad”字符串
 * c语言中没有字符串类型，用双引号引起来的就是字符串，比如说“Hello World”
 * char arr1[4]="123"//[]之内的数字不能小于后面数组里包含的内容，也可以省略这个数字
 * 字符串的末尾是\0，字符串的结束标志，自动隐藏了
 * char arr2[3]={'1','2','3'}   //用大括号加单引号单独输入的数组，不会自动加后面的\0数组结束标志
 *
 * 打印的时候用s  printf("%s\n",arr1）。    注意如果打印的arr1会正常打印123
 * 但是如果打印的没有结束标志\0的arr2，那么则会打印出123加上内存条上123后面的\0以前的所有内容
 * 所以说如果是单独引用，需要在最后主动加一个\0 ,,{'1','2','2','\0'}
 *
 *  strlen，string length是求字符串长度的函数，求得是\0之前的长度  //strlen的头文件是 string.h
 */

#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="\0";
    printf("请输入一串数字\n");
    gets(a);
   int len = strlen(a);//scanf是读取单个的数字，gets是读取到输入的多个数组的数字，自己发现的区别，后面学到了在仔细区分其定义
    printf("您输入的数字长度为：%d",len);
   return 0;
}
//其实就是把scanf换成了gets，但是要注意gets（a）不需要引号，另外strlen（a）里面也不需要引号。