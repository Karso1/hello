#include<stdio.h>

void fun(int m,int a[10])
{
    int i;
    for(i=0;i<10;i++)
        a[i]=0;
    while(m>0)
        {
        i=m%10;
        a[i]++;
        m =m/10;
        }
}

int main()
{
    int m,a[10],i;
    printf("plz input a number:\n");
    scanf("%d",&m);
    fun(m,a);
    for(i=0;i<10;i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}