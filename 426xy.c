/*
 * 函数递归与迭代，循环就是一种迭代
 *  用递归容易栈溢出，当层次太深，i=1， i《10000，i++
 * 斐波那契数列：1 1 2 3 5 8 13 21
 * n = 1，n<=2 。n-1 + n-2
 */
//迭代方法：
/*#include<stdio.h>
int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 0;

    while(n >= 3)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main()
{

    int n = 0;
    scanf("%d",&n);
    int ret = Fib(n);
    printf("%d\n",ret);
    return 0;
}*/

/*
 * if语句中0表示假的，非零表示真123456
 * switch语句中default子句可以放在任意位置，case后的表达式只能是整形表达式
 */
/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            if(c>b)
            {
                printf("%d %d %d",a,c,b);
            }
            else
            {
                printf("%d %d %d",a,b,c);
            }
        }
        else
        {
            printf("%d %d %d",c,a,b);
        }
    }
    else
    {
        if(b>c)
        {
            if(c>a)
            {
                printf("%d %d %d",b,c,a);
            }
            else
            {
                printf("%d %d %d",b,a,c);
            }
        }
        else
        {
            if(a<c)
            {
                printf("%d %d %d", c, b, a);
            }
            else
            {
                printf("%d %d %d",b,a,c);
            }
        }

    }
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int tmp = 0;
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a<c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b<c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}*/

#include<stdio.h>
void Swap(int *px,int *py)
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}
int main()
{
    int tmp = 0;
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        Swap(&a,&b);
    }
    if(a<c)
    {
        Swap(&a,&c);
    }
    if (b<c)
    {
        Swap(&b,&c);
    }
    printf("%d %d %d",a,b,c);
    return 0;
}

/*
 * 函数调用后不一定带返回值
 * 形参和实参可以同名
 * 函数间的数据传递可以使用全局变量
 * 主调函数和被调函数可以不在同一个文件里
 *
 *
 */