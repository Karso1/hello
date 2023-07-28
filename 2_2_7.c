#include<string.h>
#include<stdio.h>
int main()
{
    int *p,x,y,i;
    char s[3];
    for(i=0;i<3;i++)
    {
        scanf("%s",&s[i]);
    }
    switch (s[1])
    {
        case '+':
                y = s[0] + s[2];
                break;
        case '-':
            y = s[0]-s[2];
            break;
        case '*':
            y = s[0]*s[2];
            break;
        case '/':
            y = s[0]/s[2];
            break;
    }
    printf("%d",y);
    return 0;

}