//建立一个带头结点的单向链表，并用随机函数为给节点数据域赋值
//函数fun时求出单向链表节点数据域中 的最大值

#include<stdio.h>
#include<stdlib.h>
typedef struct aa
{
    int data;
    struct aa *next;
}NODE;
int fun(NODE *h)
{
    int max= -1;
    NODE *p;
    p = h->next;
    while(p)
    {
        if(p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}
outresult(int s,FILE *pf)
{
    fprintf(pf,"\nThe max in link : %d\n",s);
}

NODE *creatlink(int n,int m)
{
    NODE *h,*p,*s   ;
    int i;
    h = p = (NODE *)malloc(sizeof(NODE));
    h -> data = 9999;
    for(i=1;i<=n;i++)
    {
        s = (NODE*)malloc (sizeof(NODE));
        s->data = rand()%m;
        s->next = p->next;
        p->next = s;
        p=p->next;
    }
    p->next = NULL;
    return h;
}

outlink(NODE *h,FILE *pf)
{
    NODE *p;
    p = p->next;
    fprintf(pf,"\nTHE LIST :\n\n HEAD");
    while(p)
{
        fprintf(pf,"->%d",p->data);
        p = p->next;
        fprintf(pf,"\n");
}

}

int main()
{
    NODE *head;
    int m;
    head =creatlink(12,100);
    outlink(head,stdout);
    m = fun(head);
    printf("\nTHE RESULT :\n");
    outresult(m,stdout);
    return 0;
}