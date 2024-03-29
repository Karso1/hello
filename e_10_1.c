/*
 * fun的功能是将不带头结点的单向链表结点数据与中的数据从小到大排序
 *
 */

#include<stdio.h>
#include<stdlib.h>
#define N 6
typedef struct node
{
    int data;
    struct node *next;
}NODE  ;
void fun(NODE *h)
{
    NODE *p,*q;
    int t;
    p = h;
    while(p)
    {
        q = p->next;
        while(q)
        {
            if(p->data > q->data)
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
            q = q->next;
        }
        p = p->next;
    }
}
NODE *creatlist(int a[])
{
    NODE *h,*p,*q;
    int i;
    h = NULL;
    for(i=0;i<N;i++)
    {
        q=(NODE *)malloc(sizeof(NODE));
        q->data = a[i];
        q->next = NULL;
        if(h == NULL)
            h = p = q;
        else
        {
            p->next = q;
            p = q;
        }
    }
    return h;
}

void outlist(NODE *h)
{
    NODE *p;
    p = h;
    if(p == NULL)
        printf("The list is NULL!\n");
    else
    {
        printf("\nHead ");
        do {
            printf("->%d",p->data);
            p = p->next;
        }
        while(p!=NULL);
        printf("->End\n");
    }
}

int main()
{
    NODE *head;
    int a[N]={0,10,4,2,8,6};
    head = creatlist (a);
    printf("\nThe original list:\n");
    outlist(head);
    fun(head);
    printf("\nThe list after inverting:\n");
    outlist(head);
    return 0;
}