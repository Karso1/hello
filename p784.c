/*
 * 将三位学生4门课成绩读入存储在二维数组score中
 * 然后输出第N个（N<=2)个学生的成绩
 * 要求对元素和数组的访问必须用指针实现，即自定义函数头和函数体中不得出现数组下标形式的表示法
*/

#include<stdio.h>
//编写查找函数
//通过用户输入的n，从而查找到第n个学生的成绩，并输出
void search(float (*pp)[4],int n)
{
    int i;
    printf("\nthe score of No %d are:",n);
    //打印前缀第n个学生的分数是：
    for(i=0;i<4;i++)
    {
        printf("%6.1f",*(*(pp+n)+i));
        //逐个使用指针将此学生成绩输出
    }
}
int main()
{
    int n,i;
    float score[3][4];//定义二维数组存储三名学生的四门课
    printf("input student's score:\n");
    for(i=0;i<=2;i++)
    {
        printf("student %d:",i);
        scanf("%f %f %f %f",&score[i][0],&score[i][1],&score[i][2],&score[i][3]);
    }
    //第一次循环，让用户输入学生成绩，然后i为1，也就是将第一个学生的成绩依次读入到第一行里
    //第二次，i为2，用户输入的学生成绩依次放到第二行
    printf("\ninput student No:");
    //要求输出第n个学生的成绩，故打印让用户输入第几个
    scanf("%d",&n);
    //读取需要输出的学生的代号放到n
    search(score,n);//进入循环，完成函数所需要的要求
    return 0;
}
