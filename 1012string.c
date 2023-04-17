//输入一行字符，分别统计出其中的英文字母，数字，空格和其他字符的个数

//了解ASCII表，那些字符在哪些，用那些字符对应数字，也可以不用了解，直接用字符
/*要表明4个变量分别记录题目（字母，数字，空格，其他字符）的要求和数量，和一个字符变量利用getchar（）获得赋值
 * 用getchar（）利用while循环读取字符，while循环利用if else嵌套给对应的字符数加一
 * 利用printf（）输出
 */
/*#include<stdio.h>
int main(void)
{
    int letter = 0, number = 0, space = 0, other = 0;
    char ch;

    while((ch = getchar()) !=  '\n')//这里的\n不能换成EOF，要不就把换行符输入进来当其它字符处理
    {
        if((ch >= 'A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    letter += 1; //字母数量
    else
        if(ch== ' ')
            space +=1;//空格数量
            else if
                (ch>='0'&&ch<='9')
                number +=1;//数字数量
                else
                    other += 1;//其它字符数量
    }
    printf("%d %d %d %d",letter,number,space,other);
    return 0;
}*/


/*先声明一个数组用于gets（）来存储输入，声明 4个变量来存储对应的字符数
 * strlen（）获取输入的长度，用于后面的for循环
 * 利用for循环计算各个字符数
 *
 */
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];//先声明一个数组用于存储输入的字符
    int letter = 0, number = 0,space = 0,other = 0,n;

    gets(str);//获取输入并存储到数组里，gets会把输入的换行符\n丢弃
    n = strlen(str);//获取输入的字符长度

    for(int i = 0;i<n;i++)//for循环可以声明变量同时初始化，多个声明用，逗号隔开
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            letter +=1;
        if(str[i]==' ')
        space += 1;
        if(str[i]>='0'&&str[i]<='9')
            number +=1;
    }
    other = n - space - number - letter;//用整个字符串长度减去字母数，空格，数字，得出其他字符的数量
    printf("%d %d %d %d",letter,number, space,other);
    return 0;
}