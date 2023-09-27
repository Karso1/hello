/*
 * 5.单链表的删除
 * 删除节点的函数原型如下：
 * int delete_list_node(struct list*PH,int data);
 * 单向链表的删除要考虑两种情况，
 * 一种时普通节点的删除，当然头节点不算
 * 还有一种是尾节点的前一个节点的删除情况，注意删除完节点还需要释放对应节点的内存空间
 *
 *
 */
删除节点的设计流程
1，先定义两个指针，一个表示当前的节点，另一个表示当前节点的上一个节点
struct list *p=header;//当前节点
struct list *prev = NULL;//当前节点的上一个节点

2.遍历整个链表，同时保存当前节点的前一个节点
while( NULL != p->next)
{
    //保存了当前的节点的前一个节点
    prev = p;
    //保存了当前偏移的节点
    p = p->next;
    return 0;
}

3.在遍历的过程中要查找删除的元素
while(NULL != p->next)
{
    //保存了当前的节点的前一个节点
    prev=p;
    //保存当前偏移的节点
    p=p->next;
    //查找到了数据，
    if(p->id== data)
{

}
    return 0;
}

4.查找到了数据后，分两种情况删除
普通节点的删除
if(p->id==data)
{
    prev->next=p->next;
    free(q);
}
考虑尾节点的下一个节点为NULL的节点删除
if(p->id == data)
{
    if(p->next == NULL)
{
        prev->next = NULL;
        free(q);
}
}

