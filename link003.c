6.单链表的逆序，
设置两个指针，一个保存当前的第一个节点的位置，一个表示链表的第一个有效节点
struct list *p=pH->next;
struct list *pBack;

2，当链表没有有效节点或者只有一个有效节点的时候，不做任何操作
if(p==NULL || p->next == NULL)
    return ;

3.遍历链表
保存第一个节点的下一个节点的地址
pBack = p->next;
对第一个有效节点做特殊处理，也就是把第一个有效节点放到末尾取
if(p==pH->next)p->next=NULL;
如果不是第一个有效节点，则进行头插法操作，把当前节点当作一个新的节点
p->next=pH->next;//尾部链接
pH->next = p;//头部连接
继续走下一个节点
top_insert(pH,p);//插入最后一个节点
