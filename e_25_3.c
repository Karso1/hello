#include<stdio.h>
#define N 11
double fun(int xx[],int *yy)
{
    int i,n=0,m=0;
    double s1=0,s2=0;
    for(i=0;i<N;i++)
        if(xx[i]%2==0){s1+=xx[i];n++;}
    else{s2+=xx[i];m++;}
    if(n>m)
    {
        *yy = n;
        return s1/n;
    }
    else
    {
        *yy= m;return s2/m;
    }
}
int main()
{
    int yy,xx[N]={1230,153,31,4,123123,534,1241,3123,412,4124,421};
    double pjz;
    pjz = fun(xx,&yy);
    printf("yy = %d,pjz = %.2lf\n  ",yy,pjz);
    return 0;
}