#include<stdio.h>
void fun(int *s,int n)
{
    int i,one =0,zero =0;
    for(i=0;i<n;i++)
        switch(s[i])
    {
        case 0:zero++;break;
        case 1:one ++;
    }
    printf("one:%d zero:%d",one,zero);

}

int main()
{
    int a[20]={1,1,1,1,1,1,1,0,0,1,0,0,1,1,0,1,0,0,1,1,1,0},n=20;
    fun(a,n);
    return 0;
}