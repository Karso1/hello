#include<stdio.h>
#include<string.h>
int main()
{
    int a[5][5];//a的类型是int(*)[5]
    int (*p)[4];//p的类型是int（*）[4]
    p = a;//p指向数组最开始
    printf("%p %d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
    //p[4][2] -->*(*(p+4)+2)，因为p的类型使得它加1，每次只跳过4个整型。

    int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
    int *ptr1=(int*)(&aa+1);//指向数组最后
    int *ptr2=(int *)(*(aa+1));
    //aa首元素的 地址，jia1跳过第一行到第二行开始
    //第二行地址解引用，相当于aa【1】，就是首元素的地址
    //aa+1第二行的地址，解引用得到第二行第一个元素5
    printf("%d %d\n",*(ptr1-1),*(ptr2-1));
    //10.最后一个地址减-1解引用刚好是最后一个元素10
    //5


    char *a[]={"work","at","alibaba"};
    char **pa = a;//指向数组a的首元素地址，也就是指向w的地址
    pa++;
    //pa++，指向第二行首元素的地址，也就是a的地址
    printf("%s\n",*pa);
    //此时解引用pa，也就是得到a的地址


    char *c[]={"ENTER","NEW","POINT","FIRST"};
    char **cp[]={c+3,c+2,c+1,c};
    char *** cpp=cp;

    printf("%s\n",**++cpp);
    //++cpp使得cpp指向c+2的地址，第一次解引用拿到c+2的指向的地址就是P，再解压依次拿到P的地址
    //打印出POITNT

    printf("%s\n",*--* ++cpp+3);
    //++cpp使得cpp指向c+1的地址，再解引用找到c+1指向的地址，就是NEW中N的地址
    //再--，找到ENTER中E的地址
    //再加3，找到E
    //此时打印ER


    printf("%s\n",*cpp[-2]+3);
    //**（cpp-2）+3
    //cpp-2不改变其本身的指向位置
    //此时指向c+3，在解引用找到F的地址，F+3指向FIRST的S
    //打印ST

    printf("%s\n",cpp[-1][-1]+1);
    //*（*（cpp-1）-1）+1
    //cpp-1指向c+2，解引用拿到c+2的地址，再减1，指向c+1
    //再解引用指向NEW的N，再加1，指向E
    //输出EW





    return 0;
}