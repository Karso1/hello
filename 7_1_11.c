/*
 * 统计一个整形序列中出现次数最多的整数及其出现次数
 * 第一行：给出序列中整数个数N，0，1000.以及N个整数，数字间用空格分隔
 * 输出：在一行中输出出现次数最多的整数以及其出现次数，数字间以空格分割
 * 保证这样的数字是 唯一的
 *
 */

#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],b[1000],count =0;
    int temp,max;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(a[i]==b[j])
                count++;
        }
        if(i==0)
        {
            temp = count;
            max=a[i];
        }
        else if(temp<count)
        {
            temp = count;
            max = a[i];
        }
        count = 0;
    }
    printf("%d %d",max,temp);
    return 0;
}