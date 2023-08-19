/*
 * 实现一个简易的连连看游戏模拟程序
 *
 * 给定一个2N*2N的方阵网格游戏盘面，每个格子中放置一些符号
 * 这些符号一定是成对出现的
 * 同一个符号可能不止一对
 * 程序读入玩家给出的一堆位置（x1，y1），（x2，y2）
 * 判断这两个位置上的符号是否匹配，如果匹配成功，则将两个符号消为*
 * 并输出消去后的盘面
 * 否则输出UH-oh
 * 若匹配错误达到三次，则输出Game Over并结束游戏
 * 当全部符号匹配成功，则输出congratulations！然后结束游戏
 */

//在一行中给一个正整数N<5，随后2N行，每行2N个大写英文字母，空格隔开
//表示游戏盘面，盘面之后给出一个正整数K，随后K行，每行按照格式x1y1x2y2给吃醋一个玩家输入
//注意格子的行列编号是从1到2N

#include<stdio.h>
#include<stdlib.h> //内涵exit（）
void print(int n,char a[10][10]);//print sting
int main()
{
    int n,k,count = 0,fail =0 ;
    char a[10][10];
    scanf("%d",&n);

    for(int i=1;i<=2*n;i++)
    {
        for(int j =1;j<=2*n;j++)
        {
            scanf("%c",&a[i][j]);
            if(a[i][j] == ' '|| a[i][j] == '\n')
                j--;//过滤无效字符
        }
    }
    scanf("%d",&k);
    for(int i = 1;i<=k;i++)
    {
        int x1,x2,y1,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(a[x1][y1] == a[x2][y2] && a[x1][y1] != '*')
        {
            a[x1][y1] = a[x2][y2] = '*';
            count += 2;
            if(count != 2*n*2*n)
                print(n,a);
        }
        else if(a[x1][y1] != a[x2][y2] || a[x1][y1]=='*' && a[x2][y2]=='*')
        {
            fail++;
            printf("Uh-oh\n");
        }

        if(count == 2*n*2*n)
        {
            printf("congratulations!\n");
            exit(0);//直接退出程序
        }
        if(fail == 3)
        {
            printf("Game Over\n");
            exit(0);
        }
    }
    return 0;
}
void print(int n,char a[10][10])
{
    for(int i=1;i<=2*n;i++)
    {
        for(int j =1;j<=2*n;j++)
        {
            if(j==1)
                printf("%c",a[i][j]);
            else
                printf(" %c",a[i][j]);
        }
        printf("\n");
    }
}
