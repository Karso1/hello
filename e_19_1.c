//洗牌
#include<stdio.h>
void fun(int a[55],int n)
{
    int i,k;
    int b[55];
    for(i=0;i<n;i++)
    {
        for(k=1;k<=27;k++)
        {
            b[2*k-1]=a[k];
            b[2*k]=a[k+27];
        }
        for(k=1;k<=54;k++)
        {
            a[k]= b [k];
        }
    }
}
int main()
{
    int m,a[55],i;
    for(i=0;i<55;i++)
    {
        a[i]=i;
    }
    printf("plz input n");
    scanf("%d",&m);
    fun(a,m);
    for(i=1;i<55;i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}