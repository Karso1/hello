#include<stdio.h>
void func(int xx[],int num)
{
    int n1,n2,pos,i,j;
    pos=xx[9];
    if(num>pos)
        xx[10]=num;
    else
    {
        for(i=0;i<10;i++)
        {
            if(xx[i]>num)
            {
                n1=xx[i];
                xx[i]=num;
                for(j=i+1;j<11;j++) {
                    n2 = xx[j];
                    xx[j] = n1;
                    n1=n2;
                }
                break;
            }
        }
    }
}

int main()
{
    int xx[11]={2,4,5,67,88,89,98,99,121,131};
    int i,num;
    printf("original array is:\n");
    for(i=0;i<10;i++)
        printf("%5d",xx[i]);
    printf("\n");
    printf("insert a new number:\n");
    scanf("%d",&num);
    func(xx,num);
    for(i=0;i<11;i++)
        printf("%5d",xx[i]);
    printf("\n");
    return 0;
}