#include<stdio.h>
int main()
{
    int a[3],temp;
    for(int i =0;i<3;i++)
        scanf("%d",&a[i]);
    for(int i =0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("%d->%d->%d",a[0],a[1],a[2]);
    return 0;
}