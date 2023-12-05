#include<stdio.h>
int main()
{
    int man[] = {0,1,2,3,4,5,6,7,8,9,10},temp[11];
    int i,j,top = 10,t,n=0;
    for(t=1;t<=top;t++)
        printf("%d ",man[t]);
    putchar('\n');
    for(i=1,j=0;top>1;i++)
    {
        t = (i-j)%(top+1);
        if(i%3 != 0)
            temp[++n] = man[t];
        if((i-j) == top)
        {
            top = n;
            j=i;
            for(t=1;t<=top;t++)
                man[t] = temp[t];
            for(t=1;t<=top;t++)
                printf("%d ",man[t]);
            putchar('\n');
            n = 0;
        }
    }
    return 0;
}