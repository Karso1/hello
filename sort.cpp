/*
 * sort（）函数，依次传入三个参数，要排序区间的起点，要排序区间的终点+1，比较函数。
 * 比较函数可以不填，则默认为从小到大排序
 *
 * 输入任意（用户，成绩）序列，可以或的成绩从高到低或从低到高的排列，相同成绩都按先录入排列在前的规则处理，
 *
 * 输入多行，先输入要排序的人的个数，在输入排序方法0（降序）或者1（升序）在分别输入他们的名字和成绩，以一个空格分开
 * 按照指定格式输出名字和成绩，名字和成绩之间以一个空格隔开
 *
 * sort的排序是不稳定的，排序之后相对次序有可能发生改变，解决这个问题的方法有两个
 * 1是用 stable_sort函数，它的用法和sort一样，但是他是稳定的， 所以我们遇到有稳定的需求的排序时，可以用它
 * 另一个想法是给每一个输入增加一个递增的下标，然后二级排序，当值相同时，下标小的排在前面
 */

#include<bits/stdc++.h>

using namespace std;

struct Student{
    string name;
    int grade;
}stu[1005] ;
//从大到小排序
bool compareDesc(Student a,Studen b)
{
    return a.grade>b.grade;
}
//从小到大排序
bool compareAsc(Student a,Studen b)
{
    return a.grade<b.grade;
}
int main()
{
    int n,order;
    while(cin>>n)
    {
        cin>>order;
        for(int i=0;i<n;i++)
        {
            cin>>stu[i].name>>stu[i].grade;
        }
        if(order == 0)
            stable_sort(stu,stu+n,compareDesc);
        else
        stable_sort(stu,stu+n, compareAsc);
        for(int i=0;i<n;i++)
        {
            cout<<stu[i].name<<" "<<stu[i].grade<<end1;
        }
    }
    return 0;
}
