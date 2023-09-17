/*
 * N名学生的成绩已放在主函数中放入一个带头结点的链表结构中
 * h指向链表的头节点
 * fun：找出学生的最高分，有函数值返回
 */

#include<stdio.h>
#include<stdlib.h>
#define N 8
struct slist
{
    double s;
    struct slist *next;
};
typedef struct slist STREC;
double fun(STREC *h)
{
    STREC *c;
    double max;
    c = h->next;
    max = c->s;
    while(c->next!=0)
    {
        c = c->next;
        if(max<c->s)
            max = c->s;
    }
    return max;
}
STREC * creat (double *s)
{
    STREC *h,*p,*q;
    int i=0;
    h = p = (STREC *)malloc(sizeof(STREC));
    p->s;
    while(i<N)
    {
        q = (STREC*)malloc (sizeof(STREC));
        q ->s = s[i];
        i++;
        p->next = q;
        p=q;
    }
    p -> next = 0;
    return h;
}
outlist(STREC *h)
{
    STREC *p;
    p = h->next;
    printf("head");
    do{
        printf("->%2.0f",p->s);
        p = p->next;
    }
    while(p!=0);
        printf("\n\n");
}
int main()
{
    double s[N]={85,76,69,85,91,72,64,87},max;
    STREC *h;
    h = creat(s);
    outlist(h);
    max =  fun(h);
    printf("max = %6.1f",max);
    return 0;
}