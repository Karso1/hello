#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct st_type
{
    int i;
    int a[0];//柔性数组
}type_a;

int main()
{
    int sz = sizeof(struct s);
    printf("%d\n",sz);

    return 0;
}