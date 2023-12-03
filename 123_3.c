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
    Stu *node =(Stu *)malloc(sizeof(Stu));
    printf("plz input:\n");
    scanf("%d%f",&(node->id),&(node->score));
    node->next = NULL;
    (*tail)->next = node;
    *tail = node;

}

void printStu(Stu *head,Stu *head2)
{
    int i;
    Stu *p = head->next,*p2 = head2->next;
    while(p!=NULL)
    {
        p2 = head2->next;
        while(p2 != NULL)
        {
            if(p2->id == p->id)
                printf("%d\n",p->id);
            p2 = p2->next;
        }
        p = p->next;
    }
}

int main()
{
    int n = 3,m = 3;
    Stu *head = NULL,*tail = NULL;
    Stu *head2 = NULL,*tail2 = NULL;
    creatLink(&head,&tail);
    creatLink(&head2,&tail2);
    printf("input 1st list");
    printf("\n");
    while(n--)
        insert(&tail);
    printf("Input 2nd list:\n");
    while(m--)
        insert(&tail2);
    printStu(head,head2);
    return 0;
}





















