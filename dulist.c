#include<stdio.h>
#include<stdlib.h>

typedef struct  //�ڵ�ṹ
{
    struct line *prior;
    int data;
    struct line *next;
}line;

line *initLine(line *head);//˫����������
void display(line *head);//���˫����ĺ���

int main()
{
    line *head = NULL;//����һ��ͷָ�룻
    head = initLine(head);//��������������
    display(head);//��������õ�����
    printf("�����еĵ�4���ڵ��ֱ��ǰ����%d",head->next->next->next->prior->data);
    //��ʾ˫������ŵ㣬������Ѱ��ĳָ���ڵ��ֱ��ǰ��
    return 0;
}

line *initLine(line *head)
{
    head = (line*)malloc(sizeof(line));//����һ����Ԫ�ڵ㣬�����ͷָ��Ϊhead
    head->prior=NULL;//��ʼ���ڵ�
    head->next=NULL;
    head->data=1;
    line *list = head;//����һ��ָ����Ԫ�ڵ��ָ�룬�������������������´����Ľڵ�
    for(int i=2;i<=5;i++)
    {
        line *body = (line*)malloc(sizeof(line));//�����µĽڵ㲢��ʼ��
        body->prior=NULL;
        body->next=NULL;
        body->data=i;
        list->next=body;//�½ڵ�����������һ���ڵ㽨����ϵ
        body->prior=list;
        list=list->next;//list��Զָ�������е����һ���ڵ�
    }
    return head;//�����´���������
}

void display(line *head)
{
    line *temp = head;
    while(temp)
    {
        if(temp->next==NULL)//����ýڵ��޺�̽ڵ㣬��˵���˽ڵ�����������һ���ڵ�
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