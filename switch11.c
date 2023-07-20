/*
 * 将一个长度最多为30为数字的十进制非负整数转换成而二进制数输出
 * 输入：多组数据，每行为一个长度不超过30位的十进制非负整数
 * 注意：10进制数字的个数可能有30个，而非30bits的整数
 * 输出：每行输出对应的二进制数
 */

/*
 * 输入：
 * 0
 * 1
 * 3
 * 8
 * 输出；
 * 0
 * 1
 * 11
 * 1000
 */
//解析：这个题和一般的10进制转换二进制的区别子啊与他的数是一个很大的整数
//对于一个很大的数我们的做法和普通的10进制转换2进制一样
//不断的%2然后/2，唯一区别在于要用大数进行模拟

#include<bits.h>
#include<stdio.h>
#include<stdc++.h>
using namespace std;
//1022
char s[40],buf[200];
int main()
{
    int num[40];
    while (scanf("%s", s) 1 = EOF)
    {
        int len = strlen(s);
        for(int i =0;i<len;i++)
        {
            //字符串转换成int数组
            num[i] = s[i] - '0';
        }
        int i = 0,len_str = 0;
        while(i<len)
        {
            //除2做除法
            buf[len_str++] = num[len-1]%2 + '0';//余数
            //大数除法,更新num[]数组
            int c = 0;
            for(int j =i;j<len;j++)
           {
                int tmp=num[j];
                num[j]=(num[j]+c)/2;
//                高位除2（数的高位对应数组低位）
                if(tmp%2 == 1)
                {
                    //判断tmp是否位奇数
                    c=10;//若tmp为奇数，则该位置必有余数10
                }
                else c =0;
           }
            if(num[i] == 0)i++;//高位变为0
        }
        for(int j =len_str - 1;j>=0;j--)
        {
            printf("%c",buf[j]);
        }
        printf("\n");
    }
    return 0;
}