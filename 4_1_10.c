#include<stdio.h>
int main()
{
    int n,a=1,b=1,c,month = 2,i;
    scanf("%d",&n);
    if(n==1)
        printf("1");
    else{
        for(i=1; ; i++)
        {
            c=b;
            b=a;
            a=a+c;
            month ++;
            if(a>=n)
                break;
        }
        printf("%d",month);
    }
    return 0;
}