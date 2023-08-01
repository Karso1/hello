#include<stdio.h>
int main()
{
    int i;
    for(i=1; ;i++)
    {
        if((i-1)%5 == 0)
            if((i-5)%6 == 0)
                if((i-4)%7 == 0)
                    if((i-10)%11 == 0)
                        break;
    }
    printf("%d",i);
    return 0;
}