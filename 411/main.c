//char 字符数据类型
/*short 短整型
 * int  整型
 * long 长整型
 * long long    更长的整型
 * float    单精度浮点数
 * double   双精度浮点数
 */
#include<stdio.h>
int main()
{
    printf("%zu\n",sizeof(char));
    printf("%zu\n",sizeof(double ));//sizeof表示输出后面这个所占的字节
    return 0;
}
/*bit   byte    kb  mb  gb  tb  pb,每个之间相差1024倍.除了1字节等于8bit
 * 大括号内定义的变量时局部变量。大括号之外的是全局变量
 * 全局变量和局部变量名字可以相同，当相同的时候，局部优先
 * /


//变量的作用域：局部变量，全局变量。这个变量能在那个范围内用。在括号内定义的变量，其作用域在对应的括号内部
//声明来自外部的符号。来自于其他文件定义的变量。比如说在另一个文件定义了一个全局变量a，在另外一个文件里需要定义：extern int a；
 //生命周期：进入作用域生命周期开始，离开作用域（括号）生命周期结束
