#include<stdio.h>
#include<math.h>
int isPrime(int n);
int main()
{
    int n,i =2,t;
    scanf("%d",&n);
    if(n<2)
        printf("None");
    else
    {
        do {
            t = pow(2,i)-1;
            if(isPrime(t))
            {
                printf("%d\n",t);
            }
            i++;
        }while(i<=n);
    }
    return 0;
}

int isPrime(int n)
{
    int div;
    for(div = 2;div<= sqrt(n);div++)
    {
        if(n%div == 0)
            return 0;
    }
    return 1;
}