#include<stdio.h>
#include<string.h>

#define MAXN 20//最多的集装箱个数

int w[]={0,5,2,6,4,3};  //各集装箱重量，不用下标0的元素
int n = 5,W = 10;

int maxw;   //存放最优解的总重量
int x[MAXN];    //存放最优解向量

my_sort(int *p,int num)
{
    int temp=p[0],i=0;
    for(i=0;i<num;i++)
    {
        if(p[i]>p[i+1])//升序排列，大的放到后面去
        {
            temp = p[i];
            p[i+1] = p[i];
            p[i] = temp;
        }
    }
}
void solve()    //求解最优装载问题
{
    memset(x,0,sizeof(x));  //初始化解向量
    my_sort(w+1,5);//w[1,2,,,,n]升序排列
    maxw = 0;
    int restw = w; //剩余重量
    for(int i = 1;i<=n && w[i]<=restw; i++)
    {
        x[i]=1; //转船集装箱wi
        restw -= w[i];  //剩余重量减少
        maxw += w[i];   //累计装在总重量
    }
}

int main()
{
    solve();
    printf("the answer:\n");
    for(int i =1;i<=n;i++) {
        if (x[i] == 1)
            printf("choose this one%d\n", w[i]);
    }
    printf("total m = %d\n",maxw);
    return 0;

}
