#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int num;
    float score;
    struct Student *next;
};
int n;
struct Student *creat()
{
    n=0;
    struct Student *head;
    struct Student *p1,*p2;
    p1 = p2 = (struct Student*)malloc(sizeof(Student));
    scanf("%d %f",&p1->num,&p1->score);
    head = NULL;
    while(p1->num != 0)
    {
        n=n+1;
        if(n==1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct Student *)malloc(sizeof(Student));
        scanf("%d %f",&p1->num,&p1->score);
    }
    return head;
};

void print(struct Student *head)
{
    struct Student *p;
    printf("Total %d Students.\n",n);
    p = head;
    while(p != NULL)
    {
        printf("%d %.2f\n",p->num,p->score);
        p = p->next;
    }
}

int main()
{
    struct Student *head;
    head = creat();
    print(head);
    return 0;
}