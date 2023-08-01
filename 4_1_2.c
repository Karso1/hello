//在一行中给出一系列的正整数，以空格分隔
//当读到零或负整数表示输入结束，该数字不需要处理
//输出正整数序列中奇数的和

/*
#include<stdio.h>
int main()
{
    int n,sum =0;
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2 != 0)
            sum += n;
        scanf("%d",&n);
    }
    printf("%d",sum);
    return 0;
}

*/


#include<stdlib.h>
#include<stdio.h>
int main()
{
    int arr[10000];
    int i=0,n,sum=0,m;
    do
    {
        scanf("%d",&arr[i]);
        i++;
    }while(getchar()!='\n');
    n=i;
    for(i=0;i<=n;i++)
    {
        if(arr[i]%2 !=  0)
        {
            sum += arr[i];
        }
    }
    m = sizeof(arr)/sizeof(arr[0]);
    printf("%d %d %d",sum,n,m);
    return 0;
}
/*
#include<stdio.h>
#include<stdlib.h>
int qiuhe(*p,int n)
{
    int i=0;
    for(i=0;i<=n;i++)
    {
        *p = arr[i]
    }
}
int main()
{
    int arr[10000],sum=0,i=0,n;
    int *p;
    do{
        scanf("%d",&arr[i]);
        i++;
    }while(getchar()!='\n');
    n = i;
    sum = qiuhe(arr,n);
    printf("%d",sum);
    return 0;

}*/