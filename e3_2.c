/*
 * 计算水仙花数，该数字等于每个位置上的数的立方之和
 */


#include<stdio.h>
#include<math.h>
int fun(int *n);
int main()
{
    int n[100],k,i;
    k = fun(n);
    for(i=0;i<k;i++)
    {
        printf("%d ",n[i]);
    }
    printf("\n");
    return 0;
}

int fun(int *n)
{
    int a,b,c,i,k=0;
    for(i=100;i<1000;i++)
    {
        a = i/100;
        b = i/10%10;
        c = i%10;

        if(pow(a,3)+pow(b,3)+pow(c,3) == i)
        {
            n[k]=i;
            k++;
        }
    }
    return k;
}

/*
#include    <stdio.h>
#pragma warning (disable:4996)
int  cube(int  n)  { return n*n*n; }
int  fun( int *n)
{  int  a,b,c,i,k=0;
    for (i=100; i<1000; i++)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if(cube(a)+cube(b)+cube(c) == i)
        {  n[k]=i; 	  k++;}
    }
    return  k ;
}
main()
{
    int  n[100],k,i;
    k=fun(n);
    for(i=0;i<k;i++)printf("%d ", n[i]);
    printf("\n");
}
*/