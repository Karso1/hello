//求四页玫数

#include<stdio.h>
int fun(int n,int result[])
{
    int i,j,k=0,s;
    for(i=1000;i<n;i++)
    {
        s=0;j=i;
        while(j>0)
        {
            s+=(j%10)*(j%10)*(j%10)*(j%10);
            j = j/10;
        }
        if(s==i)
            result[k++]=i;
    }
    return k;
}
int main()
{
    int result[10],n,i;
    n  = fun(9999,result);
    for(i=0;i<n;i++)
        printf("%d\n",result[i]);
    return 0;
}