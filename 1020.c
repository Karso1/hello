//如果是奇数变为1，是偶数变为0
//求问输入一个整数n
//输出一个整数，修改后的整数

#include<stdio.h>
#include<math.h>
//
//int main()
//{
//    int input  = 0;
//    int sum = 0;
//    int i = 0;
//    scanf("%d",&input);
//    //123
//    while(input)
//    {
//        int bit = input%10;
//        if(bit%2==1)//奇数
//        {
//            sum += 1*pow(10,i);
//            i++;
//        }
//        else
//        {
//            sum += 0*pow(10,i);
//            i++;
//        }
//        input /=  10;
//    }
//    printf("%d\n",sum);
//
//    return 0;
//}
//
//int main()
//{
//    //针对每一行输入，输出用"*"组成的对应长度的直角三角形，每个“*”后都有一个空格
//    //多组输入，一个整数n（2—20），表示直角三角形直角边的长度，
//    int n =0;
//    while(scanf("%d",&n)==1)
//    {
//        int i =0;
//        int j =0;
//        for(i=0;i<n;i++)
//        {
//            for(j=0;j<n;j++)
//            {
//                if(i+j<n-1)
//                {
//                    printf(" ");
//                }
//                else
//                {
//                    printf("*");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//    double price = 0.0;
//    int m =0;
//    int d=0;
//    int flag = 0;
//    scanf("%lf %d %d %d",&price,&m,&d,&flag);
//    if(m==11 && d==1)
//    {
//        price = price *0.7-flag*50;
//    }
//    else if(m==12 &&d==12)
//    {
//        price = price*0.8-flag*50;
//    }
//    if(price<0.0)
//    {
//        printf("%.2lf\n",0);
//    }
//    else
//        printf("%.2lf\n",price);
//
//    return 0;
//
//
//
//
//
//
//
//
//
//
//
//
//}



/*
 * 一个数字的原码是这个数直接转换成二进制
 * 反码是原码的二进制符号为不变，其他按位取反
 * 补码是反码的二进制加1
 * 0表示正数，符号位上。一表示负数
 *
 *
 *
 */

int main()
{
    //char -128---127
    //unsigned char 0___255

    unsigned char a = 200;
    unsigned char b = 100;
    unsigned char c = 0;

    c = a+b;
    //整型提升
    printf("%d %d\n",a+b,c);
    return 0;
}



















































































