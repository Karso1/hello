#include<stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(b == 90)
    {
        if(c=='m')
            printf("%.2f",a*6.95*0.95);
        if(c=='e')
            printf("%.2f",a*6.95*0.97);
    }
    if(b==93)
    {
        if(c=='m')
            printf("%.2f",a*7.44*0.95);
        if(c=='e')
            printf("%.2f",a*7.44*0.97);
    }
    if(b==97)
    {
        if(c=='m')
            printf("%.2f",a*7.93*0.95);
        if(c=='e')
            printf("%.2f",a*7.93*0.97);
    }
    return 0;
}