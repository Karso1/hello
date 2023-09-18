#include<stdio.h>
int fun(int n) {
    int k = 0;
    while (n != 0) {
        n = n / 10;
        k++;
    }
    return k;
}
int main()
{
    int n,place;
    do {
        printf("plz input a number:\n");
        scanf("%d",&n);
    }while(n<0||n>9999);
    place =fun(n);
    printf("%d",place);
    return 0;
}