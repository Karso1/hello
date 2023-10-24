#include<stdio.h>
#include<string.h>


//回调函数就是一个 通过函数指针调用的函数
//
//int is_left_move(char arr1[],char arr2()
//{
//    int len = strlen(arr1);
//    int i =0;
//    for(i=0;i<len;i++)
//    {
//        char tmp = arr1[0];
//        int j =0;
//        for(j=0;j<len-1;j++)
//        {
//            arr1[j]=arr[j+1];
//        }
//        arr1[len-1]=tmp;
//
//        if(strcmp(arr2,arr1)==0)//如果stcmp是0，就说明两个字符串相等
//            return 1;
//    }
//return 0;


//    int len1 = strlen(arr1);
//    int len2 = strlen(arr2);
//    if(len1 != len2)
//        return 0;
//
//    strncat(arr1,arr1,len1);
//    char *ret = strstr(arr1,arr2);
//    if(ret == NULL)
//        return 0;
//    else
//        return 1;
//
//}
//int main()
//{
//    char arr1[]="abcdef";
//    char arr2[]="cdefab";
//    //判断arr2中的字符串是否可以通过arr1中的字符串旋转得到
//
//    int ret = is_left_move(arr1,arr2);
//    if(ret ==1)
//    {
//        printf("ok\n");
//    }
//    else
//        printf("no\n");
//
//
//    return 0;
//}


//转置矩阵
//行列互换得到新矩阵

//int main()
//{
//    int n =0;
//    int m =0;
//    scanf("%d%d",&n,&m);
//    int arr[10][10]={0};
//    int i =0;
//    int j =0;
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&arr[i][j]);
//        }
//    }
//    for(i=0;i<m;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            printf("%d",arr[j][i]);
//        }
//    }
//    return 0;
//
//}
//

//struct Stu
//{
//    //学生的相关信息
//    char name[20];
//    int age;
//};

//struct Stu
//{
//    char name[20];
//    int age;
//}s1,s2;
////s1和s2是struct Stu类型的变量，此时为结构体的全局变量
//int main()
//{
//    struct Stu s3;//s3为局部变量
//}

////匿名结构体类型
//struct
//{
//    char name[20];
//    int age;
//}s1;
////只能如此使用一次，后续不能再创建
//
//struct
//{
//    int a;
//    char b;
//    float c;
//}a[20],*p;
////匿名结构体+指针p为指针变量
//
//
//struct Node
//{
//    int data;
//    struct Node *next;
//};//这个节点里存放此数据和下一个节点的地址，之所以不直接放下一个节点，是因为太大了
////结构体自引用
//
//typedef struct Node
//{
//    int data;
//    struct Node *next;
//}Node;
////重命名
//
//typedef struct Node
//{
//    int data;
//    struct Node *next;
//}*linklist;
//
//typedef struct Node *linklist;

//struct Piont
//{
//    int x;
//    int y;
//}p1 = {2,3};
////创建变量的时候就初始化x=2，y=3
//
//struct Stu
//{
//    char name[20];
//    int age;
//    struct score s;
//};
//
//int main()
//{
//    struct Stu s1 = {"zhangsna",3,{"lisi",4}};
//    return 0;
//}
//



//结构体内存对齐
//计算结构体大小

struct S1
{
    char c1;//1
    int i;//4
    char c2;//1
};
struct S2
{
    char c1;
    char c2;
    int i;
};
int main()
{
    printf("%d\n",sizeof(struct S1));
    //12.
    //
    printf("%d\n",sizeof(struct S2));
    //8
    return 0;
}
//结构体内存对齐是用空间换时间
























