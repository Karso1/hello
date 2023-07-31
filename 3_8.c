#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s;
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/2;
    if(a+b>c&&a+c>b&&b+c>a)
        printf("area = %.2f,perimeter = %.2f",sqrt(s*(s-1)*(s-b)*(s-c)),2*s);
    else
        printf("These sides do not correspond to a valid triangle\n");
    return 0;
}