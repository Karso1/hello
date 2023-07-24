/*
 * 1.猴子报数，循环链表建立之后，按照题意删除节点
 * 2.两个有序链表合并为一个。这个和两个有序数组合并为一个有序数组原理一样
 * 3.链表排序，使用冒泡排序进行链表排序，因为冒泡排序是相邻两个元素进行比较交换，适合链表
 *
 * n个猴子围坐一圈并且按照顺时针方向从1到n编号，从第s个猴子开始进行1到m的报数，报数到第m的猴子退出报数
 * 从紧挨着他的下一个猴子重新开始从1到m的报数，如此进行下去直到所有的猴子都退出为止，求给出这n个猴子的退出的顺序表
 *
 * 输入：有几组测试数据，每一组数据有两行，第一行输入n（表示猴子的总数最多为100），第二行输入s（从第s个猴子开始报数）和数据m（第m个猴子退出报数）
 * 当输入0 0 0表示程序结束
 *
 * 输出：每组数据的输出结果为一行，中间用逗号隔开
 */

//我们需要创建一个首尾相连的循环链表，然后先走s步，在开始循环遍历链表，每走m步删除一个节点，直到链表中只剩下一个节点时结束循环
//只有一个结点的判断条件：他的下一个指针指向的就是他，说明他自循环了

#include<stdio.h>
#include<malloc.h>
struct node
{
    int num;
    struct node *next;
};
int n,s,m;
//创建循环链表
struct node* create()
{
    struct node *head,*now,*pre;
    for(int i=1;i<=n;i++)
    {
        now = (struct node*)malloc(sizeof(node));
        if(i==1)
        {
            head = now;
            pre = now;
        }
        now->num =i;
        now->next =head;
        pre->next = now;
        pre = now;
    }
    return head;
};
//按照题目要求输出
void printf(struct node *head)
{
    struct node*p,*pre;//pre是前一个节点
    p = head;
    s -= 1;//因为起点在第一个，所以少走一步
    while(s--)
    {
        //先走s步
        pre = p;
        p = p->next;
    }
    int i =1;
    while(p != NULL)
    {
        if(p == p->next)
        {
            //只剩最后一个
            printf("%d\n",p->num);
            break;
        }
        if(i%m == 0)
        {
            //找到第m个
            printf("%d,",p->num);//输出他
            pre -> next = p->next;//删除他
        }
        else pre = p;//这里一定要用else如果是删除的话pre不变
        p = p->next;
        i++;
    }
}

int main()
{
    while(scanf("%d%d%d",&n,&s,&m)!= EOF)
    {
        if(n==0 && s==0 && m==0)break;
        struct node *head;
        head = create();
        printf(head);
    }
    return 0;
}