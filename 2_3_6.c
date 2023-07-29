#include<stdio.h>
int main()
{
    int n;
    float fenz,fenm,sum=0;
    fenz = fenm = 1;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        if(i%2 == 0)
            sum += fenz/fenm;
        else
            sum -= fenz/fenm;
        fenz++;
        fenm += 2;
    }
    printf("%.3f",sum);
    return 0;
}