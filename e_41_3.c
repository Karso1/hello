#include<stdio.h>
#include<math.h>
double fun(double x,int n)
{
    int i;
    double f=1.0,h=x;
    double s=1;
    s=s+h/f;
    for(i=2;i<=n;i++)
    {
        f=f*i;
        h=h*x;
        s=s+h/f;
    }
    return (s);

}
int main()
{
    printf("%f\n",fun(0.3,10));
    return 0;
}