#include<stdio.h>
int fun(int x,int y);
int main()
{
    int *p[5];//指针数组，存放指针的数组
    int (*p1)[5];//数组指针，指向数组的指针

    int (*pf)(int ,int) = &fun;//函数指针用什么存储起来
    //前面的int是返回类型，（）内表明此函数的形参

    //调用函数
    int ret = fun(2,3);
    int ret1 = pf(2,3);
    //pf和fun等价，当然也可以用（*pf）（2，3）。此时要解引用pf大括号。否则先进入函数，得到结果在对结果进行解引用


}