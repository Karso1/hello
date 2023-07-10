void fun(int *w,int p,int n)
{
    //数组前四个元素移到最后
    //1，将第一个元素保存
    //2，把所有元素依次向前迁移一位
    //3，将第一个元素存到最后

    int i,num,j;
    for(i=0;i<=p;i++)
    {
        num = w[0];
        for(j=1;j<n;j++)
        {
            w[j-1] - w[j];
        }
        w[n-1] - num;
    }
}