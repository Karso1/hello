//注意将大括号另起一行，这样思绪清晰，方便看到底是哪里出错了。
//如果不加大括号，else总是会和最近的匹配，容易出错。
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("请输入三个数比较大小：");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            max = a;
        }else
        {
            max = c;
        }
    }else
    {
        if(b>c)
        {
            max = b;
        }else
        {
            max = c;
        }
    }
    printf("The max is %d\n",max);
    return 0;
}