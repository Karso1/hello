//建立一个带头结点的单向链表，并用随机函数为给节点赋值
//函数fun将单向链表结点数据域为偶数的值累加起来，作为函数值返回

#include<stdio.h>
#include<stdlib.h>
typedef struct aa
{
    int data;
    struct aa *next;
}NODE;
NODE *creatlink(int n);//创建单链表
outlink(NODE *h,FILE *pf);//输出单链表
outresult(int s,FILE *pf);//输出单链表的结果
int fun(NODE *h);//将结点数据域为偶数的值累加起来

NODE *creatlink(int n)
{
    NODE *h,*p,*s;
    int i;
    h = p = (NODE *)malloc(sizeof(NODE));
    for(i=1;i<=n;i++)
    {
        s=(NODE *)malloc(sizeof(NODE));
        s->data=rand()%16;
        s->next=p->next;
        p->next=s;
        p=p->next;
    }
    p->next = NULL;
    return h;
}
outlink(NODE *h,FILE *pf)
{
    NODE *p;
    p = h->next;
    fprintf(pf,"\n\nTHE LIST :\n\n HEAD");
    while(p)
{
        fprintf(pf,"->%d",p->data);
        p = p->next;
        fprintf("pf","\n");
}
}

outresult(int s,FILE *pf)
{
    fprintf(pf,"\nThe sum of even numbers:%d\n",s);
}

int fun(NODE *h)
{
    int sum=0;
    NODE *p;
    p = h->next;
    while(p)
    {
        if(p->data %2==0)
            sum+=p->data;
        p=p->data;
    }
    return sum;

}
int main()
{
    NODE *head;
    int even;
    head = creatlink(12);
    head -> data = 9000;
    outlink(head,stdout);
    even = fun(head);
    printf("\nThe result :\n");
    outresult(even,stdout);
    return 0;
}