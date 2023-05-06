/*
 * 从键盘输入3个整数，输出绝对值最大的数
 */

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    double max,x,y,z;

    printf("input 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    x = fabs(a);
    y = fabs(b);
    z = fabs(c);
    if(x>y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    if(max == x)
    {
        printf("\nthe max is %d\n",a);
    }
    else if (max == y)
    {
        printf("\nthe max is %d\n",b);
    }
    else if(max == z)
    {
        printf("\nthe max is %d\n",c);
    }
    return 0;
}