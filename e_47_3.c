#include<stdio.h>
#include<math.h>
int fun(long n)
{
    float y1,y2=0;
    y1=sqrt(n+100);
    y2=sqrt(n+268);
    if((int)y1==y1 && (int)y2==y2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    long i;
    FILE *fp = fopen("out.dat","w");
    for(i=1;i<10000;i++)
    {
        if(fun(i))
        {
            printf("%ld\n",i);
            fprintf(fp,"ld\n",i);
        }
    }
    return 0;

}