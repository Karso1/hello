#include<stdio.h>
#include<stdlib.h>

#include<string.h>

int main()
{
    //用记事本编辑一个文本文件，编写程序读取该文件中的数据，并在屏幕上显示
    FILE *fp;
    char ch;
    fp = fopen("2.txt","rb");
    if(fp == NULL)
    {
        printf("error!\n");
        exit(0);
    }
    ch = fgetc(fp);
    while(ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }
    putchar('\n');
    fclose(fp);
    return 0;
}
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("2.txt","rb");
    if(fp == NULL)
    {
        printf("error!\n");
        exit(0);
    }
    ch = fgetc(fp);
    while(ch != EOF)
    {
        putchar(ch);
        ch  = fgetc(fp);
    }
    putchar('\n');
    return 0;
}

int main(){
    //将一个文本文件的内容复制到另外一个文本文件中，文本文件的名字从键盘输入
    FILE *fp,*fp2;
    char ch,name[20];
    scanf("%s",name);
    strcat(name,".txt");
    fp = fopen("2.txt","r");
    fp2 = fopen(name,"w+");
    if(fp == NULL || fp2==NULL)
    {
        printf("open error!\n");
        exit(0);
    }
    ch = fgetc(fp);
    while(ch != EOF)
    {
        if(fputc(ch,fp2)==EOF)
        {
            printf("copy error!\n");
            exit(0);
        }
        ch = fgetc(fp);
    }
    fclose(fp);
    fclose(fp2);
    printf("done");
    return 0;
}
int main()
{
    FILE *fp;
    char name[20];
    int age,i;
    float m,e,c;
    fp = fopen("4.txt","a+");
    for(i=0;i<5;i++)
    {
        scanf("%s %d %f %f %f",name,&age,&m,&e,&c);
        fprintf(fp,"%s %d %g %g %g\n",name,age,m,e,c);
    }
    fclose(fp);
    return 0;

}

struct Student{
    char name[20];
    int age;
    float score[3];
    float ave;
}stu[5];
void sort()
{
    int i,j;
    struct Student temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(stu[i].ave<stu[j].ave)
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
}

int main()
{
    FILE *fp = fopen("4.txt","r");
    int i,j=0;
    do {
        i = fscanf(fp,"%s %d %f %f %f",stu[j].name,&stu[j].age,&stu[j].score[0],&stu[j].score[1],&stu[j].score[2]);
        stu[j].ave = (stu[j].score[0]+stu[j].score[1] + stu[j].score[2]) / 3;
        j++;
    }while(i == 5)
    sort();
    for(i =0;i<5;i++)
    {
        printf("%s %f\n",stu[i].name,stu[i].ave);
    }
    fclose(fp);
    return 0;
}

struct commodity
{
    char name[20];
    float price;
    int  count;
    float money;
}com;
int main()
{
    int n,i;
    FILE *fp = fopen("6.txt","ab+");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %f %d %f",com.name,&com.price,&com.count,&com.money);
        fprintf(fp,"%s %g %d %f\n",com.name,com.price,com.count,com.money);

    }
    fclose(fp);
    return 0;
}

struct commodity
{
    char name[20];
    float price;
    int count;
    float money;
}com;

void sort(int n)
{
    int i,j;
    struct commodity temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(com[i].money<com[j].money || (com[i].money == com[j].money&&com[i].price<com[j].price))
            {
                temp = com[i];
                com[i] = com[j];
                com[j] = temp;
            }
        }
    }
}
int main()
{
    FILE *fp = fopen("6.txt","rb");
    int i,j=0;
    do {
        i = fscanf(fp,"%s %f %d %f",com[j].name,&com[j].price,&com[j].count,&com[j].money);
        j++;
    }while(i==4);
    sort(--j);
    for(i=0;i<j;i++) {
        printf("%s %f %d %f\n", com[i].name, com[i].price, com[i].count, com[i].money);

    }
    fclose(fp);
    return 0;
}

int a[13] = {0,31,12,313,1,231,23,12,312,3,123,1231,23};

struct data
{
    int year;
    int month;
    int day;
}date1;
int leapYear(int year)
{
    if(year%100!=0)return year %4 ==0;
    else return year %400 ==0;
}
int day(struct date da)
{
    int i,days = 0;
    for(i=1;i<da.month;i++)
        days += a[i];
    days += da.day;
    if(da.month>2 && leapYear(da.year))
        days++;
    return days;
}
int main()
{
    scanf("%d%d%d",&date1.year,&date1.month,&date1.day);
    printf("%d",day(date1));
    return 0;
}


































