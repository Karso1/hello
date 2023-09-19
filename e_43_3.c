#include<stdio.h>
#include<stdlib.h>
#define N 5
void fun(int a[][N],int m)
{
    int i,j;
    for(i=0;i<N;i++)
        for(j=N-1;j>=i;j--)
            a[i][j]*=m;
}
int main()
{
    int a[N][N],m,i,j;
    printf("****The array ***\n");
    for(i=0;i<N;i++) {
        for (j = 0; j < N; j++) {
            a[i][j] = rand() % 20;
            printf("%4d", a[i][j]);
            printf("\n");
        }
    }
        do m =rand()%10;
        while(m>=3);
        printf("m = %4d\n",m);
        fun(a,m);
        printf("THE RESULT\n");
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
                printf("%4d",a[i][j]);
            printf("\n");
        }
        return 0;
}