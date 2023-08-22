#include<stdio.h>
#include<stdlib.h>

typedef struct  //节点结构
{
    struct line *prior;
    int data;
    struct line *next;
}line;

line *initLine(line *head);//双链表创建函数
void display(line *head);//输出双链表的函数

int main()
{
    line *head = NULL;//创建一个头指针；
    head = initLine(head);//调用链表创建函数
    display(head);//输出创建好的链表
    printf("链表中的第4个节点的直接前驱是%d",head->next->next->next->prior->data);
    //显示双链表的优点，大量的寻找某指定节点的直接前驱
    return 0;
}

line *initLine(line *head)
{
    head = (line*)malloc(sizeof(line));//创建一个首元节点，链表的头指针为head
    head->prior=NULL;//初始化节点
    head->next=NULL;
    head->data=1;
    line *list = head;//声明一个指向首元节点的指针，方便后期向链表中添加新创建的节点
    for(int i=2;i<=5;i++)
    {
        line *body = (line*)malloc(sizeof(line));//创建新的节点并初始化
        body->prior=NULL;
        body->next=NULL;
        body->data=i;
        list->next=body;//新节点与链表的最后一个节点建立关系
        body->prior=list;
        list=list->next;//list永远指向链表中的最后一个节点
    }
    return head;//返回新创建的链表
}

void display(line *head)
{
    line *temp = head;
    while(temp)
    {
        if(temp->next==NULL)//如果该节点无后继节点，则说明此节点是链表的最后一个节点
        {
            printf("%d\n",temp->data);
        }
        else
        {
            printf("%d<->",temp->data);
        }
        temp = temp->next;
    }
}