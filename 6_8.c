#include<stdio.h>
int main()
{
    int a,result;
    int i,flag = 1;
    char op;
    scanf("%d",&a);
    result = a;
    for(i=1; ;i++)
    {
        op = getchar();
        if(op == '=')
        {
            printf("%d\n",result);
            break;
        }
        scanf("%d",&a);
        switch(op)
        {
            case '+':result += a;
            break;
            case '-':result -= a;
            break;
            case'*':result *= a;
            break;
            case'/':
                if(a==0)
                {
                    printf("ERROR\n");
                    flag = 0;
                    break;
                }
                else
                    result /= a;
                break;
            default:
                printf("error");
                flag = 0;
                break;
        }
        if(flag == 0)
            break;
    }
    return 0;

}