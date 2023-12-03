#include<stdio.h>

const int N  = 10;

struct student
{
    int id;
    char name[20];
    int age;
    struct student *next;
}stu[10];

void add()
{
    int stu_num;
    for(stu_num = 0;stu_num <N; stu_num++)
    {
        printf("input the No student info:\n",stu_num++);
        scanf("%d\n%s\n%d",&stu[stu_num].id,stu[stu_num].name,&stu[stu_num].age);
        if(stu_num != 9)
            stu[stu_num].next = &stu[stu_num+1];
        else
            stu[stu_num].next = NULL;
    }
    return;
}

void printStu(struct student *head)
{
    int i;
    struct student *p = head;
    for(i=0;i<N;i++)
    {
        printf("xuehao:%d  name:%s  age:%d\n",p->id,p->name,p->age);
        p->next;
    }
}

int main()
{
    int i;
    struct studen *head = &stu[0];
    add();
    printStu(head);
    return 0;
}

























