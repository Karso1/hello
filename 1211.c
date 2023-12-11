#include<stdio.h>
void quicksort(float q[],int l,int r)
{
    if(l>=r) return;
    float x = q[(l+r)/2];
    int i = l-1,j=r+1;
    while(i<j)
    {
        do i++;
        while(q[i]<x);
        do j--;
        while(q[j]>x);
        if(i<j)
        {
            float temp = q[i];
            q[i] = q[j],q[j] = temp;
        }
    }
    quicksort(q,l,j);
    quicksort(q,j+1,r);
}

int main()
{
    int m,i;
    float q[100];
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%f",&q[i]);
    quicksort(q,0,m-1);
    for(i=0;i<m;i++)
        printf("%g ",q[i]);
    return 0;
}

#include<math.h>

int main()
{
    int i,num[11],sum =0,minIndex = 0;
    float avg,min = 999999,fa;
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        sum += num[i];
    }
    avg = sum/10.0;
    for(i=0;i<10;i++)
    {
        fa = fabs(num[i]-avg);
        if(fa<min)
        {
            minIndex = i;
            min = fa;
        }
    }
    printf("avg:%g,lates:%d",avg,num[minIndex]);
    return 0;
}