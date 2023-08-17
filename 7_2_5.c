/*
 * 输入一个正整数T，为待测矩阵，方阵的个数，接下来给出T个矩阵的信息
 *      每个矩阵信息的第一行给出一个不超过10的正整数n，随后n行，每行给出n个整数，空格隔开
 *
 * 输出：每个矩阵的判断结果占一行，如果输入的矩阵是上三角则YES，否则NO
 *
 */

#include<stdio.h>
int number_found(int x);
int main()
{
    int a[10][10],n,i,x,y,num,count = 0,numf;
    scanf("%d",&num);
    for(i=0;i<num;i++)//num is the number of the array
    {
        scanf("%d",&n);//scan the first array's ROW&COL
//        numf = number_found(n);
        //enter this for to get the first array element
        for(x=0;x<n;x++)
        {
            for(y=0;y<n;y++)
            {
                scanf("%d",&a[x][y]);
            }
        }

        //judge the array
        //通过观察发现,当n为2，左下三角坐标为a[1][0],   1
        //           当n为3，左下三角坐标为a[1][0],a[2][0],a[2][1]  3
        //n为4,a[1][0],a[2][0],a[2][1],a[3][0],a[3][1],a[3][2]  6
        //需要判断的数字个数是 1+2+…（n-1）
        //x=1,x < n,x++   y=0;y<n-1;y++
        for(x=1;x<n;x++)
        {
            for(y=0;y<n-1;y++)
            {
                if(a[x][y] != 0)
                    count++;
            }
        }

        if(count == 0)
            printf("YES\n");
        else
            printf("NO\n");
       /*
        if(count == numf)
            printf("YES\n");
        else
            printf("NO\n");

            */
    }
    return 0;
}

/*
int number_found(int x)
{
    int y=0,i;
    for(i=1;i<=x-1;i=i++)
    {
        y += i;
    }
    return y;
}*/


//#include <stdio.h>
//int main()
//{
//	int t, n, count = 0, a[10][10];
//	scanf("%d", &t);
//	for (int k = 0; k < t; k++)
//	{
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				scanf("%d", &a[i][j]);
//		for (int i = 1; i < n; i++)
//			for (int j = i - 1; j >= 0; j--)
//				if (a[i][j] != 0)
//					count = 1;
//		if (count == 0)
//			printf("YES\n");
//		else
//			printf("NO\n");
//		count = 0;
//	}
//
//	return 0;
//}