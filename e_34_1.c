#include<stdio.h>
int main()
{
    double a,x0,x1;
    printf("plz input a number:\n");
    do {
        scanf("%lf",&a);
    }while(a<=0);

    x1 = a/2.0;
    do {
        x0=x1;
        x1=(x0+a/x0)/2.0;
    }while((x1-x0)>1e-6 || x1-x0<-1e-6);
    printf("%f \n",x1);
    return 0;
}