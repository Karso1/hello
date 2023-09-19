#include<stdio.h>
#include<math.h>
double fun(double x[],int n)
{
    int i;
    double avg = 0.0,sum = 0.0;
    for(i=0;i<n;i++)
        avg+=x[i];
    avg/=n;
    for(i=0;i<n;i++)
        sum += (x[i]-avg)*(x[i]-avg);
    return sqrt(sum/n);
}
int main()
{
    double score[12]={50,60,70,80,90,100,55,65,75,85,98,99};
    double aa;
    aa = fun(score,12);
    printf("%f\n",aa);
    return 0;
}