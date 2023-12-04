#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int id;
    float score;
    struct student *next;
}Stu;

void creatLink(Stu **head,Stu **tail)
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
    scanf("%d%f",&(node->id),&(node->score));
    node->next = NULL;
    (*tail)->next = node;
    *tail = node;
}

void delStu(Stu *head,Stu *head2)
{
    int i,flag = 0;
    Stu *p = head,*p2 = head2,*t;
    while(p->next != NULL)
    {
        if(p2->next->id == p->next->id)
        {
            t = p->next;
            p->next = p->next->next;
            free(t);
            flag = 1;
            break;
        }
        p2 = p2->next;
    }
    if(flag ==0)
        p = p->next;
}

void printStu(Stu *head)
{
    int i;
    Stu *p = head->next;
    while(p != NULL)
    {
        printf("%d %g\n",p->id,p->score);
        p = p->next;
    }
}

int main()
{
    int n =3,m=3;
    Stu *head = NULL,*tail = NULL;
    Stu *head2 = NULL,*tail2 = NULL;
    creatLink(&head,&tail);
    creatLink(&head2,&tail2);
    printf("first\n");
    while(n--)
        insert(&tail);
    while(m--)
        insert(&tail2);
    delStu(head,head2);
    printStu(head);
    return 0;
}






















