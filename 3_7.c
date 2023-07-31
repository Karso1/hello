#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,score;
    a = b =c =d =e =0;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&score);
        if(score>=90)
            a++;
        else if(score>=80)
            b++;
        else if(score>=70)
            c++;
        else if(score>=60)
            d++;
        else
            e++;
    }
    printf("%d %d %d %d %d",a,b,c,d,e);
    return 0;
}