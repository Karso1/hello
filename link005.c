1，双向链表的创建
struct list *create_node(int data);
创建步骤：与单链表类似，就是多了一个指针
1,给节点申请空间
struct double_list *p = malloc(sizeof(struct double_list));
2,初始化数据域
p->data = data;
3,初始化指针域
p->prev = NULL;
p->next = NULL;

2.双向链表的尾插
定义如下
void double_list_tail_insert(struct double_list *header,struct double_list *new);
尾插的步骤：
1，找到链表的尾节点
DL *p = header;
while(NULL != p->next)
    p  = p->next;
2,将新的节点连接到尾节点后面成为新的节点
原来的next指针指向新节点的首地址
p -> next = new;
新节点的prev指针指向原来的尾节点的首地址
new->prev = p;

3.双向链表的头插
定义：
void double_list_top_insert(struct double_list *header,struct double_list *new);

4,双向链表的遍历
正向遍历
void double_list_for_each(Dl *header)
步骤与单链表完全一致
反向遍历
void double_list_for_each_nx(DL *header)
步骤：
和单链表一样，先循环找到最后一个节点的地址，再依靠prev指针循环向前移动

打印最后一个数据
printf("%d ",p->data);
向前循环遍历
p = p->prev;
判断条件
header ->prev !=p->prev;
header保存的是头节点的地址
header->prev保存的是头结点的prev的地址
header->next保存的是头节点next的地址

头节点再创建的时候
header->prev=NULL;
header->next = NULL;
所以这个条件这样写header->prev = NULL也是对的;

5。双向链表节点的删除
假设需要删除节点1
首先，获取当前节点的地址
p=header;
遍历所有的节点，找到要删除的节点
while(NULL != p->next)
{
    p = p->next;
    if(p->data ==data)
{

}
}
找到要删除的的数据以后，需要做判断，判断两种情况，这和单链表差不多
如果找到的当前节点的下一个节点不为空
按九八当前节点的prev节点指向要删除的这个节点的prev
因为当前的prev节点保存的是要删除的上一个节点的指针
p->next->prev = p->prev;

然后将当前节点的prev指针也就是上一个节点的指针指向当前节点（要删除的）的下一个节点
p ->prev ->next = p->next;
最后释放删除指针的空间
free(p);
如果找到当前节点的下一个节点为空
直接把当前指针的prev指针的下一个next指针设置为空
p->prev->next = NULL;
将删除肚饿指针的空间释放
free(p);
牢记prev指针和next指针的指向