#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
typedef struct ss
{
    char num[10];
    int s;
}STU;
STU *fun(STU a[],int m)
{
    STU b[N],*t;
    int i,j,k;
    t = (STU *)calloc(sizeof(STU),m);
    for(i=0;i<N;i++)    b[i]=a[i];
    for(k=0;k<m;k++)
    {
        for(i=j=0;i<N;i++)
            if(b[i].s>b[j].s) j=i;
            t[k]=b[j];
            b[j].s = 0;
    }
    return t;
}

outresult(STU a[],FILE *pf)
{
    int i;
    for(i=0;i<N;i++)
        fprintf(pf,"No  = %s Mark = %d\n",a[i].num,a[i].s);
    fprintf(pf,"\n\n");
}

int main()
{
    STU a[N]={{"A01",81},{"A02",89},{"A03",66},{"A04",87},
              {"A05",77},{"A06",90},{"A07",79},{"A08",61},
              {"A09",80},{"A10",71}     };
    STU *porde;
    int i,m;
    printf("The original data:\n");
    outresult (a,stdout);
    printf("\nGive the number of the students who have better socre:\n");
    scanf("%d",&m);
    while(m>10)
    {
        printf("\nGive the number of the students who have better score:\n")    ;
        scanf("%d",&m);
    }
    porde=fun(a,m);
    printf("***** THE  RESULT *****\n");
    printf("The top  :\n");
    for(i=0; i<m; i++)
        printf("   %s    %d\n",porde[i].num , porde[i].s);
    free(porde);
    getchar();
}