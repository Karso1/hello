#include<stdio.h>

struct stu
{
    int num;
    char *name;
    char sex;
    float score;
}boy[5]={
        {101,"Zhou ping",'M',45},
        {102,"Zhang peng",'M',62.5},
        {103,"Liou fang",'F',92.5},
        {104,"Cheng ling",'F',87},
        {105,"Wang ming",'M',58},
};

int main()
{
    struct stu *ps;
    printf("No\tName\t\t\tSex\tScore\t\n");
    for(ps = boy;ps<boy+5;ps++) {
        printf("%d\t%s\t\t%c\t%f\t\n", ps->num, ps->name, ps->sex, ps->score);
        printf("%d\t%s\t\t%c\t%f\t\n",(*ps).num,(*ps).name,(*ps).sex,(*ps).score);
    }
    return 0;
}