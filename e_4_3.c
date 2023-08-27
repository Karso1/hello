#include<stdio.h>
float fun(float h)
{
    return (int)(h*100+0.5)/100.0;
}

int main()
{
    float a;
    printf("input a:");
    scanf("%f",&a);
    printf("the original data is");
    printf("%f\n",a);
    printf("the result :%f\n",fun(a));
    return 0;
}