//通过函数对形参b所指结构体变量中的数据进行修改，再主函数中输出修改后的数据

#include<stdio.h>
#include<string.h>
struct student
{
    long sno;
    char name[10];
    float score[3];
};

void fun(struct student *b);
int main()
{
    struct student t={10002,"ZhangQi",93,85,87};
    int i;
    printf("\nThe original data :\n");
    printf("\nNo:%ld Name: %s\nScores: ",t.sno,t.name);
    for(i=0;i<3;i++)
        printf("%6.2f ",t.score[i]);
    printf("\n");

    fun(&t);
    printf("\nThe data after modified:\n");
    printf("\nNo:%ld Name:%s\nScores: ",t.sno,t.name);
    for(i=0;i<3;i++)
        printf("%6.2f",t.score[i]);
    printf("\n");
    return 0;
}
void fun(struct student *b)
{
    b->sno = 10004;
    strcpy(b->name,"LiJie");
}