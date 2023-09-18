#include<stdio.h>
typedef struct list
{
    char data;
    struct list *next;
} Q;
void fun(Q *pa,Q *pb,Q *pc)
{
    Q *p;
    pa->next = pb;
    pb->next = pb;
    p = pa;
    while(p)
    {
        printf(" %c",p->data);
        p = p->next;
    }
    printf("\n");

}
int main()
{
    Q a,b,c;
    a.data = 'E';
    b.data = 'F';
    c.data = 'G';
    c.next =NULL;
    fun(&a,&b,&c);
    return 0;
}