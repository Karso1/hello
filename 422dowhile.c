//计算n的阶乘
/*#include<stdio.h>
int main()
{
    int a,n,m=1;
    printf("plz write a number:\n");
    scanf("%d",&a);
    for(n=1;n<=a;n++)
    {
        m=n*m;
    }
    printf("%d",m);
    return 0;
}*/

//计算1！+2！+。。。。+10！
/*#include<stdio.h>
int main()
{
    int i = 1;
    int n,sum=0,j=1;
    for(n=1;n<=10;n++)
    {
        for (i = 1;i <= n;i++)
        {
            j = i * j;
        }
        sum = sum + j;
        j = 1;
    }
    printf("%d",sum);
    return 0;
}
 一次一次把12345678910的阶乘算出来然后每算出来一个加一个
 */
/*
#include<stdio.h>
int main()
{
    int i,n,j=1,sum=0;
    for(i=1;i<=10;i++)
    {
        j = j*i;//下一个数的阶乘就是上一个数的阶乘乘以这个数本身
        sum = sum + j;
    }
    printf("%d",sum);
    return 0;
}*/

//二分法，log2  n = 32.最多32次
/*
#include<string.h>
#include<stdio.h>
#include<windows.h>
int main()
{
    char arr1[] = "welcome to beijing!!";
    char arr2[] = "####################";

    int left = 0;
    int right = strlen(arr2) - 1;//int right = sizeof(arr1)/szieof(arr1[0])-2;

    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);//暂停1000毫秒
        left++;
        right--;
    }
    printf("%s\n",arr2);
    return 0;
}*/

//模拟客户登陆情景，只能登陆三次，三次密码依旧错误，退出程序
#include<stdio.h>
#include<string.h>//strcmp的头文件
int main()
{
    int i = 0;
    char password[20] = {0};
    //假设密码是abcdef
    for(i = 0;i<3;i++)//记得中间用分号隔开啊！！！！
    {
        printf("plz type ur password\n");
        scanf("%s",password);//不需要&，因为数组本来就是一个地址
        if(strcmp(password,"abcdef") == 0)//判断两个字符串是否相等，不能用==，要用一个库函数：strcmp
        {
            printf("登陆成功\n");
            break;
        }
    }
    return 0;
}