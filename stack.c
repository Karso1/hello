//栈的链式存储结构实现
#include<stdio.h>
#include<stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define STACK_INIT_SIZE 100 //定义栈的初始大小
#define STACK_INCR_SIZE 10  //定义栈的增长大小

typedef int ELemType;
typedef int Status;

//设置栈的结点
typedef  struct StackNode
{
    ELemType data;//存放栈中数据
    struct StackNode* next;//单链表的指针域
}StackNode,*LinkStackPtr;

//设置栈的结构体
typedef struct
{
    LinkStackPtr top;//top指针，始终与头指针保持一致
    int count;//栈元素计数器
}LinkStack;

//4个基本操作
Status InitStack(LinkStack *s);//初始化操作，建立一个空栈
Status ClearStack(LinkStack *s);//将栈清空
Status StackEmpty(LinkStack s);//若栈存在，返回true，否则返回false
int  StackLength(LinkStack s);//返回栈s的元素个数

Status GetTop(LinkStack s,ELemType *e);//若是栈存在且非空，用e返回S的栈顶元素
Status Push(LinkStack *s,ELemType e);//若是栈存在，则插入新的元素e到栈S中并称为栈顶元素
Status Pop(LinkStack *s,ELemType *e);//若是栈存在且非空，删除栈顶元素，并用e返回其值
Status DestoryStack(LinkStack *s);//若是栈存在，则销毁他

int main()
{
    LinkStack sk;
    ELemType e;
    int i;
    //初始化空栈，用于存放（）【】{}''""这几个数据的左半边进行匹配
    InitStack(&sk);

    printf("2.push 1-5\n");
    for(i=1;i<=5;i++)
        Push(&sk,i);
    printf("3.Pop number for three times\n");
    for(i=1;i<=3;i++)
    {
        Pop(&sk,&e);
        printf("Pop %d:%d\n",i,e);
    }
    GetTop(sk,&e);
    printf("4.Get Top:%d\n",e);
    printf("5.Push 6-10\n");
    for(i=6;i<=10;i++)
        Push(&sk,i);
    printf("6.Get stack length:%d\n",StackLength(sk));
    printf("7.Pop number for six times\n");
    for(i=1;i<=6;i++)
    {
        Pop(&sk,&e);
        printf("Pop %d:%d\n",i,e);
    }
    if(!StackEmpty(sk))
    {
        printf("8.Stack is not Empty\n");
        ClearStack(&sk) ;
        printf("9.Stack is Clear\n");
    }
    printf("10.Stack Empty :%d\n", StackEmpty(sk));
    printf("11.destory Stack");
    DestoryStack(&sk);
    system("pause");
    return 0;
}

//初始化操作，建立一个空栈
Status InitStack(LinkStack *s)
{
    if(!s)
        return ERROR;
    s->count=0;
    s->top=NULL;
    return OK;
}

//将栈清空，循环释放掉栈中的结点
Status ClearStack(LinkStack *s)
{
    LinkStack p,q;//结点指针
    if(s==NULL)
        return ERROR;
    p=s->top;
    while(p)
    {
        q=p;
        p= p-> next;
        free(q);
    }
    s->count=0;
    s->top==NULL;
    return OK;
}

//若栈存在，返回tree，否则false
Status StackEmpty(LinkStack s)
{
    if(s.count == 0)
        return TRUE;
    return FALSE;
}

//返回栈s的元素个数
int StackLength(LinkStack s)
{
    return s.count;
}

//若是栈存在且非空，用e返回S的栈顶元素，注意：只获取栈顶数据，不出栈
Status GetTop(LinkStack s,ELemType *e)
{
    if(!e || !s.top)
        return ERROR;
    *e=s.top->data;
    return OK;
}

//入栈操作：若是栈存在，则插入新的元素e到栈S中并成为栈顶元素
Status Push(LinkStack *s,ELemType e)
{
    if(!s)
        return ERROR;
    LinkStackPtr ns = (LinkStack)malloc(sizeof(StackNode));//生成一个节点取存放数据
    ns->data=e;
    ns->next = s->top;
    s->top=ns;
    s->count++;
    return OK;
}

//若是栈存在且非空，删除栈顶元素（只需要将栈顶指针下移），并用e返回其值
Status Pop(LinkStack *s,ELemType *e)
{
    LinkStackPtr p;
    if(!s || !e || StackEmpty(*s))
        return ERROR;
    p = s->top;
    s->top=p->next;
    *e=p->data;
    free(p);
    s->count--;
    return OK;
}

//若是栈存在，则销毁（直接将栈底指针释放即可，置为空）
Status DestoryStack(LinkStack *s)
{
    if(!StackEmpty(*s))//若是栈存在
        ClearStack(s);
    return OK;
}