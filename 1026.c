//结构体传参
#include<stdio.h>
#include<string.h>
struct S
{
    int data[1000];
    int num;
};

void print1(struct S ss)
{
    int i =0;
    for(i=0;i<3;i++)
    {
        printf("%d ",ss.data[i]);
    }
    printf("%d\n",ss.num);
}

void print2(const struct S *ps)//此时原来的地址不会被修改
{
    int i = 0;
    for(i=0;i<3;i++)
    {
        printf("%d ",ps->data[i]);
    }
    printf("%d\n",ps->num);
}
int main()
{
    struct S s={{1,2,3},100};
    print1(s);//传值调用
    print2(&s);//传址调用，4个字节，占用空间小

    return 0;
}

//位段
//