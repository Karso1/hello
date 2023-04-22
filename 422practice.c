/*
 * goto语句可以跳转
#include<stdio.h>
int main()
{
    again:
    printf("123\n");
    goto again;
    return 0;
}
跳转到again：后继续运行
 goto不能跨函数运行
 多个for循环，如果要跳出，用break需要一个一个跳出来，用goto可以直接goto到外部

 //关机程序
 1，电脑运行起来后，一分钟内关机
 2，如果输入：我是猪，就取消关机
 */

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20] = {0};
    system("shutdown -s -t 60");
again:
    printf("请注意，你的电脑将在60秒后关机\n如果输入：“我是猪”\n就取消关机\n");
    scanf("%s",input);
    if(strcmp(input,"我是猪")==0)
    {
        system("shutdown -a");//-a停止计时，取消关机
    }
    else
    {
        goto again;
    }
    return 0;
}
