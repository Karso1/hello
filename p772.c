/*
 * 对从键盘输入的一行字符，字符数<=127字节，进行排序，按ASCII从小到大输出
 *
 */

#include<stdio.h>
int main()
{
    int i,j,gs;
    char x[128],zf,zj ;
    printf("input the string:");
    for(i=0;i<128;i++)
    {
        scanf("%c",&zf);
        if(zf=='\n')
        {
            break;
        }
        else
        {
            x[i]=zf;
        }
    }
    x[i]='\0';
    gs=i;
    printf("\nResult:");
    for(i=0;i<gs-1;i++)
    {
        for(j=i+1;j<gs;j++)
        {
            if(x[i]>x[j])
            {
                zj=x[i];
                x[i]=x[j]   ;
                x[j]=zj;
            }
        }
    }
    puts(x);
    return 0;
}