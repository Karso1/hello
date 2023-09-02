#include<stdio.h>
float fun(int m,int n)
{
    int i;
    float s=1,f=1,h=1;
    float x;
    for(i=m;i>=1;i--)
        s = s*i;//fenzi
        for(i=n;i>=1;i--)
            f=f*i;//fenmu1
            for(i=m-n;i>=1;i--)
                h=h*i;//fenmu2
                x=s/(f*h)
                        return x;
}

int main()
{
    printf("P=%f\n",fun(12,8));
    return 0;
}