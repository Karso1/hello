/*
 *  建立一个带有头结点的单向链表，链表中的个节点包含数据域和指针域next
 *  fun的作用是找出链表各结点数据域中的最大值
 *  其最大值由函数值返回
 */

#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
};
struct list *createlist(int data[],int n)
{
    struct list *head = 0,*p,*q;
    int i;
    head = (struct list *)malloc (sizeof(struct list));
    head ->data = data[0];
    p = q= head;
    for(i=1;i<n;i++)
    {
        p = (struct list *)malloc(sizeof(struct list));
        p->data = data[i];
        q->next = p;
        q=p;
    }
    p->next = NULL;
    return head;
}

int func(struct list *head)
{
    int pmax = head -> data;
    struct list *p = head->next;
    while(p!= NULL)
    {
        if(p->data > pmax )
            pmax = p->data;
        p = p->next;
    }
    return pmax;

}

void main()
{
    int data[] = {123,21,2,1,21,21,12,21,142,214,123},pmax;
    struct list *head;
    head = createlist(data,10);
    pmax = func(head);
    printf("Max = %d\n",pmax);
    return 0;
}