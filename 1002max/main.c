//题目描述
//编写一个程序，输入a、b、c三个值，输出其中最大值。
//输入格式
//一行数组，分别为a b c
//输出格式
//a b c其中最大的数

//if嵌套
#include<stdio.h>
int main()
{
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            max = a;
        else
            max = c;
    }
    else
    {
        if (b > c)
            max = b;
        else
            max = c;
    }
    printf("%d\n", max);
    return 0;
}

//三目运算符
//#include<stdio.h>
//
//int main()
//{
//    int a, b, c, max;
//    scanf("%d%d%d", &a, &b, &c);
//    max = a > b ? a : b;
//    max = max > c ? max : c;
//    printf("%d\n", max);
//    return 0;
//}


//妙用中间变量
//#include<stdio.h>
//
//int main()
//{
//    int a, b, c, m;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a > b)
//        m = a;
//    else
//        m = b;
//    if (c > m)
//        m = c;
//    printf("%d", m);
//    return 0;
//}


//巧用赋值
//#include<stdio.h>
//
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b)
//        a = b;
//    if (a < c)
//        a = c;
//    printf("%d", a);
//    return 0;
//}

//运用子函数
//#include<stdio.h>
//
//int max(int x, int y)
//{
//    return x > y ? x : y;
//}
//
//int main()
//{
//    int a, b, c, m;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("%d", max(max(a, b), c));
//    return 0;
//}

//（补充）任意个数求最大值（假设10个数）
//      运用for循环，遍历对比数组，假定中间量为最大值。
//
//#include<stdio.h>
//
//int main()
//{
//    int i = 0;
//    int arr[10] = {0};
//    int max = 0;  //定义变量max用来作比较
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);    //输入整数
//    }
//    for (i = 0; i < 10; i++)
//    {
//        if (max < arr[i])
//            max = arr[i];
//    }
//    printf("最大值为%d\n", max);
//    return 0;
//}