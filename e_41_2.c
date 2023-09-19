#include<stdio.h>
typedef struct list
{
    int data;
    struct list *next;
} LIST;

int fun(LIST *h)
{
    LIST *p;
    int t=0;
    p=h;
    while(p)
    {
        t = t+p->data;
        p=(*p).next;
    }
    return t;
}
int main()
{
    LIST a,b,c,*h;
    a.data = 34;
    b.data=51;
    c.data=87;
    c.next='\0';
    h=&a;
    a.next=&b;
    b.next = &c;
    printf("%d\n",fun(h))   ;
    return 0;
}