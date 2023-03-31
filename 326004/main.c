//计算身高的程序，将国外的英尺计算法和国内的米进行转换。
//5英尺7→→→   （5+7/12）*0.3048
//区分整数型int。scanf：%d，printf：%d
// 和浮点数型（小数）double。scanf输入：%lf 输出printf：%f。

#include<stdio.h>
int main()
{
    double foot,inch;

    printf("输入身高的英尺和英寸，""比如输入\"5 7\"表示五英尺7英寸：");
    scanf("%lf %lf",&foot,&inch);
    printf("身高是%f米。\n",((foot+inch/12)*0.3048));
    //得出的结果将小数部分也就是inch/12直接去掉了，因为inch定义为 int是整数型，只能算整数。
    //解决方案：：将inch定义为浮点数，或者把12换成12.0（换成浮点数）
    //解决方案①：：：但是可以把 12 换成 12.0（浮点数），完成运算，带小数点的叫浮点数
    //同时%d也换成了%f，因为%d这个format只能表达整数，%f可以表达浮点数。
    //float，单精度浮点数。float是浮动浮点的意思
    //double，双精度浮点数。
    //解决方案②：：：把inch定义为浮点数。也就是说不能写int inch，写成double inch。将inch定义为浮点数，int是定义为整数。
    //同时如果是double型的数，也就是说是浮点数，需要将scanf里的%d（int型）改为浮点型的%lf
    //同时因为是浮点数，也就是说输出值为浮点数，所以说输出值也需要变为%f。
    return 0 ;
}