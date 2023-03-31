//switch case,多路分支
//相比于用ifelse来分别一步一步判断，能够直接到需要输出那一步，能够直接很多。
//switch case必须是int型。

#include<stdio.h>
int main()
{
    int type;//定义用户输入的
    scanf("%d",&type);

    switch(type)
    {
        case 1://case指的是从哪里开始运行，当case1是空的，但是输入的是1，则自动运行case2.只有遇到break才会让你跳出所有的case，到程序最后。
        //case相当于入口，break相当于出口
            printf("你输入的是1");
            break;
        case 2:
            printf("你输入的是2");
            break;
        case 3://输入的情况是3
            printf("你输入的是3");
            break;//break终止，程序，直接运行到最后
        case 4:
            printf("你输入的是4");
            break;
        default://输入的不是数字时
            printf("你输入的数字不在0-4之间");
            break;
    }
    return 0;
}