/*
 * 为什么要学习链表
 * 链表主要有以下几大特性：
 * 1，解决数组无法存储多种数据类型的问题
 * 2，解决数组中，元素个数无法改变限制
 * 3，数组移动元素的过程中，要对元素进行大范围的移动，很耗时间且效率不好
 *
 *
 *
 */

//链表的数据结构
struct list_node
{
    int data;//数据域，用于存储数据
    struct list_node *next;//指针，可以用来访问节点数据，也可以遍历，指向下一个节点
};

//如何创建一个链表的一个节点？
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct list_node
{
    int data;
    struct list_node *next;
};

typedef struct list_node list_single;

int main()
{
    list_single *node = NULL;//首先，定义一个头指针
    node = (list_single *)malloc(sizeof(list_single));//2,分配内存空间
    if(node ==NULL)
    {
        printf("malloc fair!\n");
    }
    memset(node,0,sizeof(list_single));//3,清一下
    node->data = 100;//4，给链表节点的数据赋值
    node->next = NULL;//5，将链表的指针域指向空
    printf("%d\n",node->data);
    free(node);
    return 0;
}
//这仅仅只是创建一个链表中的一个节点
//为了好看，我们把创建节点封装成函数，以后方便使用此函数创建节点

list_single *creat_list_node(int data)
{
    list_single *node = NULL;
    node = (list_single *)malloc(sizeof(list_single));
    if(node == NULL)
    {
        printf("malloc fair!\n");
    }
    memset(node,0,sizeof(list_single));
    node->data = 100;
    node -> next = NULL;
    return node;
}

//接下来完善第一个程序

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct list_node
{
    int data;
    struct list_node *next;
};

typedef struct list_node list_single;
list_single *creat_list_node(int data)
{
    list_single *node = NULL;
    node = (list_single *)malloc(sizeof(list_single));
    if(node == NULL)
    {
        printf("malloc fair!\n");
    }
    memset(node,0,sizeof(list_single));
    node->data = data;
    node->next = NULL;
    return node;
}

int main()
{
    int data =100;
    list_single *node_ptr = creat_list_node(data);//创建一个节点
    printf("node_ptr ->data = %d\n",node_ptr->data);//打印节点里的数据
    printf("node_ptr ->next = %d\n",node_ptr->data);
    free(node_ptr);
    return 0;
}
//这样我们就创建了一个链表节点，数据存储了100，因为这个链表只有一个节点
//所以他的指针域指向了NULL



//上面只是建立一个单链表的基本雏形，接下来创建多个单链表，实现单链表的增删改查，把单链表应用起来

//1,首先定义一个单链表的数据结构
//创建节点函数原型可以定义如下：
struct list_creat_node(int data);
//如何创建单链表的节点，主要分为以下步骤：
//1.当前每个节点的数据结构配置定量的空间大小
    ep:struct list *node = malloc(sizeof(struct list));
//2.清节点数据（由于结构体变量在未初始化的时候，数据时脏的）
    ep:memset(node,0,sizeof(struct list));
//3.给节点初始化数据
    ep:node->id=data;
//4.将该节点的指针域设置为NULL
    ep:node->next = NULL;


//2.单链表的尾插
//如何将当前链表和新的节点相连接，只需要：
header->next = new;
//尾插流程如下：
//1，获取当前节点位置，也就是访问头节点
    ep:struct list *p = header;
//2.判断是否为最后一个节点，如果不是，移动到下一个节点，如果是，将数据插入到尾部
    ep:while(NULL != p->next) p=p->next;
p->next = new;


//3.单链表的头插
//头插就是把新的节点插在原来的节点和原来节点的下一个节点之间的一个节点
//1，获取当前节点的位置，也就是访问头节点
    ep:struct list *p = header;
//2.新的节点下一个节点设置为原来头节点的下一个节点（第一个节点
    ep:new->next= p->next;
//3.原来的头节点的下一个节点设置为现在新插入的头节点
    ep:p->next=new;

//4.单链表的遍历
//最后一个节点为节点为NULL
//打印时：不用打印头节点，当链表到达尾节点，NULL，就能知道有多少个节点
//1.获取当前节点的位置，也就是访问头节点
struct list*p = header;
//由于头节点我们不需要打印，这时候初始化打印的节点需要从第一个节点开始
p=p->next;
//3.判断是否为最后一个节点，如果不是，先打印第一个节点的数据，然后移动到下一个节点，重复这两个步骤
//如果是最后一个节点，直接打印数据就可以
while(NULL != p->next)
{
    printf("node:%d\n",p->data);
    p=p->next;
}
printf("node:%d\n",p->data);
//当然也可以一句代码解决，这样就达到了先偏移，后取数据
while(NULL != p->next)
{
    p=p->next;
    printf("node:%d\n",p->data);
}


//5.
