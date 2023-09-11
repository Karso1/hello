#include<stdio.h>
#include<stdlib.h>
#define N 10
double fun(double *x)
{
    int i,j;
    double av,y[N];
    av = 0;
    for(i=0;i<N;i++)
        av += x[i]/N;
    for(i=j=0;i<N;i++)
        if(x[i]<av)
        {
            y[j]=x[i];
            x[i]=-1;
            j++;
        }
    i=0;
        while(i<N)
        {
            if(i=0;i<N;i++)
                y[j++]=x[i] ;
            i++;
        }
        for(i=0;i<N;i++)
            x[i]=y[i];
        return av;
}
int main()
{
    int i;
    double x[N];
    for(i=0;i<N;i++)
    {
        x[i]=rand()%50;
        printf("%4.0f",x[i]);
    }
    printf("\n");
    printf("\nThe average is:%f\n",fun(x));
    printf("\nThe result :\n",fun(x));
    for(i=0;i<N;i++)
        printf("%5.0f",x[i]);
    printf("\n");
    return 0;
}