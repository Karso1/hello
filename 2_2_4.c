#include<stdio.h>
#include<math.h>
double jisuan(double x)
{
    double y;
    if(x>=0)
    {
        y = sqrt(x);
    }
    else
    {
        y = pow((x+1),2)+2*x+1/x;
    }
    return y;
}
int main()
{
    double n,m;
    scanf("%lf",&n);
    m = jisuan(n);
    printf("%lf",m);
    return 0;

}