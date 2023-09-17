#include<stdio.h>
#include<string.h>
#define N 6
typedef struct
{
    char num[5];
    double s;
} STU;

int fun(STU x[N],char p[][5]) {
    int n = 0, i;
    double ave = 0.0;
    for (i = 0; i < N; i++)
        ave += x[i].s;
    ave /= N;
    for (i = 0; i < N; i++)
        if (x[i].s > ave) {
            strcpy(p[n], x[i].num);
            n++;
        }
    return n;
}

int main()
{
    int i,k;
    STU a[N]={"z11",78,"z101",92,"z102",77,"z103",87,"z104",66,"z105",85}  ;
    char b[N][5];
    k = fun(a,b);
    for(i=0;i<k;i++)
        puts(b[i]);
    return 0;
}