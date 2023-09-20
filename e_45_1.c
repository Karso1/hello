#include<stdio.h>
void fun(int *px,int *py)
{
    int a=0,b=0,k;
    scanf("%d",&k);
    while(k)
    {
        if(k>0)a++;
        if(k<0)b++;
        scanf("%d",&k);
    }
    *px=a;
    *py=b;
}
int main()
{
    int x,y;
    fun(&x,&y);
    printf("x=%d,y=%d\n",x,y);
    return 0;
}