/*
 * 一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。
 * 它在第N次落地时反弹多高？共经过多少米？保留两位小数
 * 输入格式：M,N
 * 输出格式：它在第N次落地时反弹多高？共经过多少米？保留两位小数，空格隔开，放在一行
 *
 * n=1，h1=1/2M，n=2，h2=1/2M1/2.共经过l = h1+h2
 */
/*
#include<stdio.h>
int main()
{
    int M,N,n;
    double h=0,l=0,H=0;
    scanf("%d %d",&M,&N);

    for(n=1;n<=N;n++)
    {
        h = (1/2)*M;
        H = H + h;
    }
    printf("%0.2lf %0.2lf",h,H);
    return 0;
}*/

#include <stdio.h>
#include <math.h>
int main()
{
    double M,N;
    double Lushang,Luxia;//分别用来计算上升/下降的总路程
    scanf("%lf %lf",&M,&N);
    Lushang=M*(1-pow(1.0/2.0,N-1));        //计算上升的总路程
    Luxia=2*M*(1-pow(1.0/2.0,N));        //计算下降的总路程
    printf("%.2lf %.2lf\n",M*pow(1.0/2.0,N),Lushang+Luxia);
    //pow是幂次函数
    return 0;
}