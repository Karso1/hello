/*
 * 对顺序读入的n个整数，顺次计算后项减前项之差，并按每行三个元素的格式输出结果
 * 第一行：给出正整数N，（1<n<=10)
 * 第二行：给出n个整数，期间以空格分隔
 * 输出：顺次计算后项减前项只差，并按每行三个元素的格式输出结果，数字间空一格，行末不得有多余空格
 */

#include<stdio.h>
int main()
{
    int x,i,n,a[10],count = 1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d",a[1]-a[0]);//顶格输出第一个数字
    for(i=1;i<n-1;i++)
    {
        printf(" %d",a[i+1]-a[i]);
        count ++;
        if(count == 3)
        {
            putchar('\n');
            if(i+1 != n-1)
            {
                printf("%d",a[i+2] - a[i+1]);
                count = 1;
            }
            i++;
        }
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    int i, n, a[10] = { 0 }, count = 1;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("%d",a[1]-a[0]);
    for (i = 1; i < n-1; i++)
    {
        printf(" %d", a[i + 1] - a[i]);
        count++;
        if (count == 3)
        {
            putchar('\n');
            if(i + 1 != n-1)
            {
                printf("%d", a[i + 2] - a[i + 1]);
                count=1;
            }
            i++;
        }
    }

    return 0;
}*/