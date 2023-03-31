//比较两个数大小。
//chat API
//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
//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
//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
//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
//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
//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
//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
//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
//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
//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
//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
//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
//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
//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
#include<stdio.h>
int main()
{
    int a,b;
    int max = 0;
    printf("请输入两个需要比较大小的数：");
    scanf("%d %d",&a,&b);
    if (a>b){
        max = a;
    }else{
        max = b;
    }//这里比较大小也可以假设法，假设max=a，if a>b，则printf，else max = b
    printf("较大的数是%d",max);
    return 0 ;
}