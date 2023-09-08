#include<math.h>
#include<stdio.h>
double fun(int n)
{
    int i;
    double s=0.0;
    for(i=1;i<n;i++)
        if(i%3==0 && i%7==0)
            s=s+i;
        return sqrt(s);
}
int main()
{
    printf("s = %f\n",fun(1000));
    return 0;
}