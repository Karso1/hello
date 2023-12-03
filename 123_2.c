#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int id;
    float score;
    struct student *next;
}Stu;

Stu *head = NULL,*tail = NULL;

void creatLink()
{
    Stu *s = (Stu *)malloc(sizeof(Stu));
    head = s;
    tail = s;
    s->next = NULL;
}

void insert()
{
    Stu *node = (Stu *)malloc(sizeof(Stu));
    printf("plz input info:\n");
    scanf("%d%f",&(node->id),&(node->score));
    node->next = NULL;
    tail->next = node;
    tail = node;
}

void printStu(Stu *head)
{
    int i;
    Stu *p = head ->next;
    while(p!=NULL)
    {
        printf("number:%d score:%d\n",p->id,p->score);
        p = p->next;
    }
}

int main()
{
    int n= 3;
    creatLink();
    while(n--) insert();
    printStu(head);
    return 0;
}



















