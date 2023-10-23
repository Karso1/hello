//左旋字符串，
//ABCD-->BCDA,左旋一个字符
#include<stdio.h>
#include<string.h>
//
//void left_rotate(char arr[],int k)
//{
//    int i = 0;
//    int len = strlen(arr);
//    for(i=0;i<k;i++)
//    {
//        char tmp = arr[0];
//
//        int j = 0;
//        for(j=0;j<len-1;j++)
//        {
//            arr[j]=arr[j+1];
//        }
//        arr[len-1]=tmp;
//
//    }
//}
//int main()
//{
//    char arr[]="abcdef";
//    int k = 0;
//    scanf("%d",&k);//旋转k个字符
//
//    left_rotata(arr,k);
//
//    printf("%s\n",arr);
//
//    return 0;
//}


//杨氏矩阵
//从左到右和从上到下都是递增的
struct Point
{
    int x;
    int y;
};
int find_num(int arr[3][3],int r,int c,int k)
{
    int x =0;
    int y =c-1;
    struct Point p ={-1,-1};
    while(x<= r-1 &&y>=0)
    {
        if(k<arr[x][y])
        {
            y--;
        }
        else if(k>arr[x][y])
        {
            x++;
        }
        else
        {
            p.x=x;
            p.y=y;
            return p;
        }
    }
}
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int k =0 ;
    scanf("%d",&k);
    struct Point ret = find_num(arr,3,3,k);
    printf("%d %d\n",ret.x,ret)
}




























