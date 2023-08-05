/*
 * 给定一批整数，分析每个整数的每一位数字，求出现最多次数的各位数字
 * 输入：N《1000，第二行：给N个整数
 * 输出：M：n1,n2...
 */

#include<stdio.h>
int fmax(int a[]);
int main()
{
    int n,i,a[1000],fqy[10] = {0}   ;
    int dight,max_fqy;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    while(a[i]>0)
    {
        dight = a[i]%10;
        fqy[dight]++;
        a[i] /= 10;
    }
}
    max_fqy = fmax(fqy);
printf("%d;",max_fqy);
for(i=0;i<10;i++)
{
    if(fqy[i] == max_fqy    )
        printf("%d",i);
}
return 0;
}
int fmax(int a[])
{
    int i,max;
    max = a[0];
    for(i=0;i<10;i++)
        if(a[i]>max)
            max = a[i];
        return max;
}