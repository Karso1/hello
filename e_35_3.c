#include<stdio.h>
#include<string.h>

//将参数n中的整数转换成字符串，存入s所知内存中
void int_to_str(int n,char *s)
{
    sprintf(s,"%d",n);
}
char *fun(int x[],int n)
{
    static char str[200]={'\0'};
    int i,j;
    char *strP = str;

    //获取数组中的偶数
    for(i=0;i<n;i++)
    {
        if(x[i] %2 ==0)
        {
            int temp = x[i];
            char s[10]={'\0'};
            char *strP2 = s;

            //获取整数的每一位并存在s[10]中
            while(temp)
            {
                int_to_str(temp%10,strP2++);
                temp /= 10;
            }

            //反向取出每一位并赋值给str[200]
            for(j = (strP2-s-1);j>=0;j--)
            {
                *strP = s[j]    ;
                ++strP;
            }

            //添加小数点
            *strP='.';
            ++strP;
        }
    }
    return str;
}

int main()
{
    int x[]={1,4,19,82,61,2};
    printf("str=%s\n",fun(x,6));
    return 0;
}