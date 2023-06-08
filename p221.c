/*
 * 从键盘读入一个字符串，要求《=127字节，检查该字符串是否为回文
 * 所谓回文就是正向与方向拼写相同
 */

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,m = 1;
    char a1[128];//定义字符串a1，根据题目要求<=127，输入128，因为还有\0
    printf("plz input string:");
    gets(a1);//将各个输入的数据给到数组a1中，用gets（）
    n = strlen(a1);//将数组a1的长度给到n
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    //i从左边开始，j从右边开始，比较左右是否相同
    {
        if(a1[i] != a1[j])
        {
            m = 0;
            break;
        }
    }
    if(m == 1)
    {
        printf("\n%s shi hui wen.",a1);
    }
    else
    {
        printf("\n%s bu shi hui wen.",a1);
    }
    return 0;
}