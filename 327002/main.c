//比较三个数的大小

#include<stdio.h>
int main()
{
    double a,b,c;
    double max,min,mid;
    printf("请输入三个你需要比较大小的数字：");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b){
        mid = a,min = b}else{
    mid = b,min = a};

    if (mid<c){
        max = c}else{
        max = mid,},if (c<min),{mid = min,min = c};

    return 0;
    //
}