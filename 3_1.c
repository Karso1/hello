#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,de;
    scanf("%f %f %f",&a,&b,&c);
    de = b*b - 4*a*c;
    if(a == 0 && b == 0)
    {
        if(c!=0)
            printf("Not An Equation!\n");
        else
            printf("Zero Equation");
    }
    else if(a == 0 && b != 0)
    {
        if(c!=0)
            printf("%.2f",-c/b);
        else
            printf("%.2f",0);
    }
    else if(de>0)
        printf("%.2f\n%.2f",(-b+sqrt(de)) / (2*a),(-b-sqrt(de))/(2*a));
    else if(de == 0)
    {
        printf(".2f",-b/(2*a));
    }
    else
    {
        if(-b/(2*a)!= 0)
        {
            printf("%.2f+%.2fi\n",-b/(2*a),sqrt(-de)/(2*a));
            printf("%.2f%.2fi\n",-b/(2*a),-sqrt(-de)/(2*a));
        }
        else
        {
            printf("0.00+%.2fi\n",sqrt(-de)/(2*a));
            printf("0.00%.2fi\n",-sqrt(-de)/(2*a));
        }
    }
    return 0;
}