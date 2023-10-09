#include<stdio.h>
typedef void(* pf_t)(int);//把void(*)(int)类型重命名 为pf_t
void menu()
{
    printf("1,+.2-,3*,4/,0exit");
}
int Add(int x,int y)
{
    return x+y;
}
int Sub(int x,int y)
{
    return x-y;
}
int Mul(int x,int y)
{
    return x*y;
}
int Div(int x,int y)
{
    return x/y;
}
int main()
{
    void (*signal(int,void(*)(int)))(int );
    pf_t signal(int,pf_t);


    //函数指针的用途
    //写一个计算器，加减乘除

    int input = 0;
    int x =0;
    int y =0;
    int ret = 0;
    do {
        menu();
        printf("plz choose:\n");
        scanf("%d",&input);
        printf("plz input two number:\n");
        scanf("%d %d",&x,&y);
        switch(input)
        {
            case 1:
                ret = Add(x,y);
                printf("%d\n",ret);
                break;
            case 2:
                ret = Sub(x,y);
                printf("%d\n",ret);
                break;
            case 3:
                ret =Mul(x,y);
                printf("%d\n",ret);
                break;
            case 4:
                ret = Div(x,y);
                printf("%d\n",ret);
                break;
            case 0:
                printf("exit\n");
                break;
            default:
                printf("404");
                break;
        }
    }while(input);
    return 0;
}