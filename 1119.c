#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define MAXSIZE 20

void Ini_Arr(int arr[],int length);
void Show_Arr(int arr[],int length);
void Bubble_Sort(int arr[],int length);
void Swap_Two(int *a,int *b);
void Select_Sort(int arr[],int length);
void Insert_Sort(int arr[],int length);

int main()
{
    int arr[MAXSIZE];
    int length = sizeof(arr)/sizeof(arr[0]);
    Ini_Arr(arr[MAXSIZE],length);

    Bubble_Sort(arr[MAXSIZE],length);
    printf("The Bubble_Sort!\n");
    Show_Arr(arr[MAXSIZE],length);

    Select_Sort(arr[MAXSIZE],length);
    printf("The Select_Sort!\n");
    Show_Arr(arr[MAXSIZE],length);

    Insert_Sort(arr[MAXSIZE],length);
    printf("The Insert_Sort!\n");
    Show_Arr(arr[MAXSIZE],length);


    return 0;
}

void Ini_Arr(int arr[],int length)
{
    srand((unsigned int)time(NULL));//调用srand（seed）
    //为随机数生成器设定种子，通过利用系统时间，使得时间戳不一样
    //从而随机数不一样

    for(int i = 0;i<length;i++)
    {
        arr[i] = rand() % 20;//随机获得20以内的随机数
    }
}

void Show_Arr(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void Swap_Two(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Bubble_Sort(int arr[],int length)
{
    int flag = 1;
    while(length--&& flag)
    {
        flag = 0;
        for(int i=0;i<length;i++)
        {
            if(arr[i]>arr[i+1])
            {
                flag = 1;
                Swap_Two(&arr[i],&arr[i+1]);
//                int temp = arr[i];
//                arr[i] = arr[i+1];
//                arr[i+1] = temp;
            }
        }
    }
}

void Select_Sort(int arr[],int length)
{
    for(int i=1;i<length;i++)
    {
        int min = i;
        for(int j=i;j<length;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
            Swap_Two(&arr[i],&arr[min]);
        }
    }
}

void Insert_Sort(int arr[],int length)
{
    for(int i =1;i<length;i++)
    {
        for(int j = i;j>=1;j--)
        {
            if(arr[j]<arr[j-1])
            {
                Swap_Two(&arr[j],&arr[j-1]);
            }
        }
    }
}


























//[{"name":"言溪题库","homepage":"https://tk.enncy.cn/","url":"https://tk.enncy.cn/query","method":"get","type":"GM_xmlhttpRequest","contentType":"json","data":{"token":"7a937967d2a54fbe8d64aff22a998b73","title":"${title}","options":"${options}","type":"${type}"},"handler":"return (res)=>res.code === 0 ? [res.data.answer, undefined] : [res.data.question,res.data.answer]"},{"name":"网课小工具题库（GO题）","homepage":"https://cx.icodef.com/","url":"http://cx.icodef.com/wyn-nb?v=4","method":"post","type":"GM_xmlhttpRequest","data":{"question":"${title}"},"headers":{"Content-Type":"application/x-www-form-urlencoded","Authorization":""},"handler":"return  (res)=> res.code === 1 ? [undefined,res.data] : [res.msg,undefined]"}]
//
//[
//{
//"name": "言溪题库",
//"homepage": "https://tk.enncy.cn/",
//"url": "https://tk.enncy.cn/query",
//"method": "get",
//"type": "GM_xmlhttpRequest",
//"contentType": "json",
//"data": {
//"token": "89a9d60f35b24cdc8aa70d2423b68bc1",
//"title": "${title}"
//},
//"handler": "return (res)=>res.code === 0 ? [res.data.answer, undefined] : [res.data.question,res.data.answer]"
//},
//{
//"name": "网课小工具题库",
//"homepage": "http://cx.icodef.com/",
//"url": "http://cx.icodef.com/wyn-nb?v=4",
//"method": "post",
//"type": "GM_xmlhttpRequest",
//"data": {
//"question": "${title}"
//},
//"headers": {
//"Content-Type": "application/x-www-form-urlencoded",
//"Authorization": ""
//},
//"handler": "return  (res)=> res.code === 1 ? [undefined,res.data] : [res.msg,undefined]"
//}
//]