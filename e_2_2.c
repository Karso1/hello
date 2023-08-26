/*
 * Creatlink创建带头结点的单向链表，并为各结点数据域赋0到m-1
 */
#include<stdio.h>
#include<stdlib.h>
typedef struct aa
{
    int data;
    struct aa *next;
}NODE;
NODE *Creatlink(int n,int m)
{
    NODE *h = NULL,*p,*s;
    int i;
    p = (NODE*)malloc(sizeof(NODE));
    h = p;
    p->next=NULL;
    for(i=1;i<n;i++)
    {
        s=(NODE *)malloc(sizeof(NODE));
        s->data = rand()%m;     s->next = p->next;
        p->next = s;            p = p->next;
    }
    return h;
}

outlink(NODE *h)
{
    NODE *p;
    p=h->next;
    printf("\nTHE LIST:\nHEAD");
    while(p)
{
        printf("->%d",p->data);
        p = p ->data;
}
    printf("\n");
}

int main()
{
    NODE *head;
    head = Creatlink(8,22);
    outlink(head);
    return 0;
}