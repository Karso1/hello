/*
 * 连表示一种常见的基础数据结构，结构体指针在这里得到的了充分的利用
 * 链表可以动态的惊醒存储分配，也就是说，连表示一个功能极为强大的数组
 * 它可以在节点定义多种数据类型，还可以根据需要随意增添，删除，插入节点。
 * 链表都有一个头指针，一般以head来表示，存放的是一个地址。
 * 链表中的节点分为两类，头节点和一般节点，头结点时没有数据域的。
 * 链表中每个节点都分为两部分，一个数据域，一个指针域。
 *
 * 链表如同车链子一样，head指向第一个元素，第一个元素又指向第二个元素……直到最后一个元素
 * 该元素不指向其他元素，称之为表尾，他的地址部分放一个NULL表示空地址，链表到此结束
 *
 */
#include<stdio.h>
#include<stdlib.h>
//初学链表，一般从单向链表开始

//这是一个空链表
//--->NULL
//head

//这是一个又n个节点的链表
//--->[p1]--->[p2]..--->[pn]--->[NULL]
//head p1->next p2->next pn->next

//创建链表
typedef struct student
{
    int score;
    struct student *next;
}LinkList;
//一般创建链表是我们使用typedef struct，进行重命名，方便后定义结构体类型变量


//初始化一个链表，n为链表节点个数
LinkList *creat(int n)
{
    LinkList *head,*node,*end;//定义头节点，普通节点，尾部节点
    head = (LinkList*)malloc(sizeof(LinkList));//分配地址
    end = head;
    for(int i=0;i<n;i++)
    {
        node =(LinkList *)malloc(sizeof(LinkList));
        scanf("%d",&node->score);
        end->next=node;
        end=node;
    }
    end->next=NULL;//结束创建
    return head;
}

//修改链表节点值，下面是一个传入链表和要修改的节点，来修改值的函数
void change(LinkList *list,int n)
{
    //n为第n个节点
    LinkList *t=list;
    int i=0;
    while(i<n && t!=NULL)
    {
        t=t->next;
        i++;
    }
    if(t!=NULL)
    {
        puts("plz input the number you want to modify:\n");
        scanf("%d",&t->score);
    }
    else
    {
        puts("The node is not found\n");
    }
}

//删除节点
//删除链表的元素就是把前节点的指针域越过要删除的节点指向下下个节点
//即：p->next = q->next;然后释放q节点的空间
void delet(LinkList *list,int n)
{
    LinkList *t=list,*in;
    int i=0;
    while(i<n && t!=NULL)
    {
        in = t;
        t =t->next;
        i++;
    }
    if(t!=NULL)
    {
        in ->next = t->next;
        free(t);
    }
    else
    {
        puts("The node is not found");
    }
}

//插入链表节点
//我们可以看出来插入节点就是插入前节点的指针域链接上插入节点的指针域
//再把插入节点的指针与链接上插入后节点的数据域
void insert(LinkList *list,int n)
{
    LinkList *t=list,*in;
    int i =0;
    while(i<n && t!=NULL)
    {
        t=t->next;
        i++;
    }
    if(t!=NULL)
    {
        in = (LinkList*)malloc(sizeof(LinkList));
        puts("plz input the inserat number:\n");
        scanf("%d",&in->score);
        in->next=t->next;//填充in节点的指针域，也就是说把in指针域指向t的下一个节点
        t->next=in;
    }
    else
    {
        puts("the node is not found!\n");
    }
}

//输出链表
while(h->next!=NULL)
{
    h=h->next;
    printf("%d ",h->score);
}