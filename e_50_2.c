#include<stdio.h>
#include<stdlib.h>
typedef struct dat
{
    char deleted;
    int data;
    struct dat* next;
} MYDATA;
void list(MYDATA *h)
{
    MYDATA *p;
    p = h->next;
    while(p!=NULL)
    {
        if(p->deleted==0)
        {
            printf("%d",p->data);

        }
        p = p->next;
    }
}
void creat (MYDATA *h,int *d,int n)
{
    MYDATA  *p,*q;
    int i=0,del;
    q = h;
    while(n>0)
    {
        p=(MYDATA *)malloc(sizeof(MYDATA));
        del = rand()%2;
        p->data=d[i];
        p->deleted=del;
        p->next=q->next;
        q->next=p;
        q=p;
        n--;
        i++;
    }
}
void main()
{
    MYDATA  *head   ;
    int n=10,dd[]={1,2,3,4,5,6,7,8,9,10}    ;
    head = (MYDATA *)malloc(sizeof(MYDATA));
    head ->next = NULL;
    creat(head,dd,n);
    list(head);
}