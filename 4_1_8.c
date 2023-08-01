#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,flag = 1;
    double tmp,eps,sum = 0;
    scanf("%lf",&eps);
    do {
        tmp = flag *1.0 / (3*i-2);
        i++;
        sum += tmp;
        flag = -flag;
    }while(fabs(tmp)>eps);
    printf("sum = %f\n",sum);
    return 0;
}