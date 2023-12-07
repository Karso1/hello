#include<stdio.h>

struct student
{
    int id;
    char name[20];
    int age;
    float score[3];
}stu[10];

int stu_num = 0;//recore the number of recored students

void Meau()
{
    printf("\n\t*******score system******\n\n");
    printf("\t\t        1.add data       \n\n");
    printf("\t\t        2.the failed     \n\n");
    printf("\t\t        3.average score  \n\n");
    printf("\t\t        0.exit           \n\n");
    printf("\n\t*************************\n\n");

}

void add()
{
    for(stu_num = 0;stu_num <10;stu_num ++  )
    {
        printf("input the studen:\n",stu_num+1);
        scanf("%d %s %d %f %f %f",&stu[stu_num].id,stu[stu_num].name,&stu[stu_num].age,&stu[stu_num].score[0],&stu[stu_num].score[1],&stu[stu_num].score[2]);

    }
    return ;
}

void fail()
{
    int i,j;
    for(i=0;i<stu_num;i++)
    {
        for(j=0;j<3;j++)
        {
            if(stu[i].score[j]<60)
            {
                printf("%s  %d \n",stu[i].name,stu[i].id);
                break;
            }
        }
    }
    return ;
}
void swap(struct student s1,struct student s2)
{
    struct student temp;
    temp = s1;
    s1 = s2;
    s2 =temp;
}

void sort()
{
    int i,j;
    float sco1,sco2;
    struct student temp;
    for(i=0;i<stu_num;i++)
    {
        for(j=i+1;j<stu_num;j++)
        {
            sco1 = stu[i].score[0]+stu[i].score[1]+stu[j].score[2];
            sco2 = stu[j].score[0]+stu[j].score[1]+stu[j].score[2];
            if(sco1<sco2)
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
}

void printStu()
{
    int i;
    for(i=0;i<stu_num;i++)
    {
        printf("%d %s %g %g %g\n",stu[i].id,stu[i].name,stu[i].age,stu[i].score[0],stu[i].score[1],stu[i].score[2]);

    }
}

int main()
{
    int a;
    Meau()  ;
    while(1)
    {
        printf("\n\nplz choose ur number:\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
                add();
                break;
            case 2:
                fail();
                break;
            case 3:
                sort();
                printf("the result:\n");
                printStu();
                break;

            case 0:
                return 0;

            default:
                printf("error!");
                break;
        }
    }
    return 0;
}























