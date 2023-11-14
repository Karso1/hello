#include<stdio.h>
//int main()
//{
//    int a[10001];
//    int n,i,j,t;
//    scanf("%d",&n);//n为要排序的数的个数
//    //输入要排序的数
//    for(i=0;i<n;i++)
//        scanf("%d",a+i);
//
//    //排序
//    for(i=0;i<n-1;i++)
//    {
//        //n个数，排n-1次
//        //n-1个数拍完，第一个数一定以及归为
//        //每次会将最大或者最小放到最后
//
//        for(j=0;j<n-1;j++)
//        {
//            if(a[j]>a[j+1])
//            {
//                t = a[j];
//                a[j] = a[j+1];
//                a[j+1] = t;
//            }
//        }
//        for(j=0;j<n;j++)
//            printf("%-5d ",a[j]);
//        printf("\n\n");
//    }
//    return 0;
//}

//int main()
//{
//    int a[10001];
//    int n,i,j,t;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//        scanf("%d",a+i);
//
//    for(i=0;i<n-1;i++)
//    {
//        for(j=i+1;j<n;j++)
//        {
//            if(a[i]>a[j])
//            {
//                t= a[i];
//                a[i]=a[j];
//                a[j]=t;
//            }
//        }
//        for(j=0;j<n;j++)
//            printf("%-5d",a[j]);
//        printf("\n\n");
//    }
//    return 0;
//}
int main()
{
    int a[1001];
    int i,j,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }

    for(i=1;i<n;i++)
    {
        t= a[i];
        for(j=i-1;j>-1&&a[j]>t;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=t;
        for(j=0;j<n;j++)
            printf("%-5d",a[j]);
        printf("\n\n");
    }
    return 0;
}








































