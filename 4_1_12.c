#include<stdio.h>
int max(int a,int b,int c);
int min(int a,int b,int c);
int main()
{
    int i,j,n,t=0;
    int a[4];
    scanf("%d",&n);
    for(i=1; ; i++)
    {
        t++;
        a[1] = n%10;
        a[2] = n/10%10;
        a[3] = n/100;
        n = max(a[1],a[2],a[3]) - min(a[1],a[2],a[3]);
        if(n != 495)
            printf("%d: %d-%d=%d\n",t,max(a[1],a[2],a[3]),min(a[1],a[2],a[3]),n);
        else
        {
            printf("%d: %d-%d=%d",t,max(a[1],a[2],a[3]),min(a[1],a[2],a[3]),n);
            break;
        }
    }
    return 0;
}
int max(int a,int b,int c)
{
    int t,i,j;
    int m[4] = {0};
    m[1] = a;
    m[2] = b;
    m[3] = c;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=4-j;j++)
            if(m[j]<m[j+1])
            {
                t = m[j];
                m[j] = m[j+1];
                m[j+1] = t;
            }
    }
    return m[3] * 100 +m[2]*10+m[1];
}