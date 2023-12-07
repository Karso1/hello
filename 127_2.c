#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int id;
    float score;
    struct student *next;
}Stu;

void CreatLink(Stu **head,Stu **tail)
{
    Stu *s = (Stu *)malloc(sizeof(Stu));
    *head = s;
    *tail = s;
    s->next = NULL;
}

void insert(Stu **tail)
{
    Stu *node = (Stu *)malloc(sizeof(Stu));
    printf("plz input info:\n");
    scanf("%d %f",&(node->id),&(node->score));
    node->next = NULL;
    (*tail)->next = node;
    *tail = node;

}

void insert2(Stu **tail,Stu *p)
{
    Stu *node = (Stu *)malloc(sizeof(Stu));
    node ->id = p->id;
    node ->score = p->id;
    node ->next = NULL;
    (*tail)->next = node;
    *tail = node;
}

void FunUnion(Stu *head,Stu *head2,Stu **tail3)
{
    Stu *p = head->next,*p2 =head2->next;
    while(p != NULL && p2 != NULL)
    {
        if(p->id > p2->id)
            p2 = p2->next;
        else if(p->id < p2->id)
            p = p->next;
        else
        {
            insert2(tail3,p);
            p = p->next;
            p2 = p2->next;
        }
    }
}

void printStu(Stu *head)
{
    int i;
    Stu *p = head->next;
    while(p != NULL)
    {
        printf("id:%d score:%g\n",p->id,p->score);
        p = p->next;
    }
}

int main()
{
    int n=3,m=3;
    Stu *head = NULL,*tail = NULL;
    Stu *head2 = NULL,*tail2 = NULL;
    Stu *head3 = NULL,*tail3 = NULL;
    CreatLink(&head,&tail);
    CreatLink(&head2,&tail2);
    CreatLink(&head3,&tail3);
    printf("input the 1st linklist:\n");
    while(n--)
        insert(&tail);
    printf("input the 2nd linklist:\n");
    while(m--)
        insert(&tail2);
    FunUnion(head,head2,&tail3);
    printStu(head3);
    return 0;
}
















