/*
 * 通过结果提变量存储学生学号，姓名，和3门成绩
 * fun将形参a所指的结构体变量s中的数据进行修改，并把a中地址作为函数值返回zhuhanshu
 */

#include<stdio.h>
#include<string.h>
struct student
{
    long sno;
    char name[10];
    float score[3];
};

struct student *fun(struct student *a)
{
    int i;
    a->sno = 10002;
    strcpy(a->name,"LiSi");
    for(i=0;i<3;i++) a->score[i]+=1;
    return a;
}
int main()
{
    struct student s={10001,"ZhangSan",95,80,88}, *t;
    int i;
    printf("\nThe original data:\n");
    printf("\nNo:%ld Name:%s\nscore:",s.sno,s.name);
    for(i=0;i<3;i++)
        printf("%6.2f",s.score[i]);
    printf("\n");
    t = fun(&s);
    printf("\nThe data after modified:\n");
    printf("\nNo:%ld Name:%s\nscore: "t->sno,t->name);
    for(i=0;i<3;i++)
        printf("%6.2f",t->score[i]);
    printf("\n");
    return 0;
}