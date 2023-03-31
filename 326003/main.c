//这个是区分与前面常写的加减法计算器的一个案例。这个主要是将多个读取的量，写在一起
//也就是说少打一写printf，scanf之类的函数，而是将多个%d全写在一个函数里面。

#include<stdio.h>
int main()
{
    int a,b;
    printf("plz write two numbers:");
    scanf("%d %d",&a,&b);//将这两个读取到的值给a和b一次性，不再分开写。

    printf("%d+%d=%d",a,b,a+b);//这里的%d+%d=%d其实也可以用字母c代替，也就是说把a+b用字母c代替。但是注意在前面要int c。
    //注意按顺序对上面的三个%d分别解释
    //这种不用c代替的方法，直接输出的是一个加法算式，而不是一个单独的结果。
    return 0;
}

