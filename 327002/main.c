//�Ƚ��������Ĵ�С

#include<stdio.h>
int main()
{
    double a,b,c;
    double max,min,mid;
    printf("��������������Ҫ�Ƚϴ�С�����֣�");
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