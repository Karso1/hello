//第一行输入一个正整数n
//第二行输入n个整数，用空格分开
//在一行中输出最大值即最大值的最小下表，中间用一个空格分开

#include<stdio.h>
int main()
{
    int i,n,max,j=0,a[10];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        scanf("%d",&a[i]);
        max = a[0];
        for(i=1;i<n;i++) {
            if (max < a[i]) {
                max = a[i];
                j = i;
            }
        }
        printf("%d %d",max,j);
        return 0;
}