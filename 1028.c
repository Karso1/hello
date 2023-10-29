//通讯录
//带有增删改查功能，排序
//描述人的信息，姓名年龄性别电话地址
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
//人的信息
typedef struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}PeoInfo;

//通讯录
typedef struct Contact
{
    PeoInfo data[100];//存放一百个人的信息
    int count;//记录通讯录中有几个人的信息
}Contact;

//初始化通讯录
void InitContact(Contact *pc)
{
    assert(pc);
    pc->count = 0;
    memset(pc->data,0,sizeof(pc->data));

}

//打印通讯录中的信息
void ShowContact(const Contact *pc)
{
    assert(pc);
    int i = 0;
    for(i=0;i<pc->count;i++)
    {
        printf("%20s\t%3d\t%5s\t%12s\t%30s\n",pc->data[i].name,
                                              pc->data[i].age,
                                              pc->data[i].sex,
                                              pc->data[i].tele,
                                              pc->data[i].addr);
    }
}

//增加联系人的通讯录
void AddContact(Contact *pc)
{
    assert(pc);
    if(pc->count == 100)
    {
        printf("通讯录已满，不能增加");

        return;
    }
    printf("plz input name:");
    scanf("%s",pc->data[pc->count].name);
    printf("plz input age:");
    scanf("%d",pc->data[pc->count].age);
    printf("plz input sex:");
    scanf("%s",&(pc->data[pc->count].sex));
    printf("plz input tele:");
    scanf("%s",pc->data[pc->count].tele);
    printf("plz input addr:");
    scanf("%s",pc->data[pc->count].addr);

    pc->count++;
    printf("add success!");
}

//删除联系人

//先查找联系人
static int FindByName(Contact *pc,char name[])
{
    assert(pc);
    int i = 0;
    for(i=0;i<pc->count;i++)
    {
        if(0 == strcmp(pc->data[i].name,name));
        {
            return i;
        }
    }
    return -1;
}
void DelContact(Contact *pc)
{
    char name[MAX_NAME]={0};
    assert(pc);
    int i =0;
    if(pc->count == 0)
    {
        printf("dont have the name");
        return;
    }
    printf("plz input the name which u want to delete:");
    scanf("%s",name);

    //1,查找
     int pos = FindByName(pc,name);
     if(pos == -1)
     {
         printf("dont have this pp");
         return;
     }
     //2,删除
     for(i=pos;i<pc->count-1;i++)
     {
         pc->data[i]=pc->data[i+1];
     }
     pc->count--;
     printf("done!");

}

//查找联系人
void SearchContact(Contact *pc)
{
    assert(pc);
    char name[MAX_NAME] = {0};
    printf("plz input the name:");
    scanf("%s",name);
    //1,查找
    int pos=FindByName(pc,name);
    if(pos==-1)
    {
        printf("dont found this pp");
        return;
    }
    //2，打印
    printf("%20s\t%3d\t%5s\t%12s\t%30s\n",pc->data[pos].name,
           pc->data[pos].age,
           pc->data[pos].sex,
           pc->data[pos].tele,
           pc->data[pos].addr);

}

//修改联系人
void ModifyContact(Contact *pc)
{
    //1,先查找
    assert(pc);
    char name[MAX_NAME] = {0};
    printf("plz input the name:");
    scanf("%s",name);
    //1,查找
    int pos=FindByName(pc,name);
    if(pos==-1)
    {
        printf("dont found this pp");
        return;
    }
    printf("found!now we will modify!");
     //2.修改
    printf("plz input name:");
    scanf("%s",pc->data[pos].name);
    printf("plz input age:");
    scanf("%d",pc->data[pos].age);
    printf("plz input sex:");
    scanf("%s",&(pc->data[pos].sex));
    printf("plz input tele:");
    scanf("%s",pc->data[pos].tele);
    printf("plz input addr:");
    scanf("%s",pc->data[pos].addr);
    printf("done!");
}

//排序
int cmp_peo_by_name(const void*e1,const void*e2)
{
    return strcmp(((PeoInfo *)e1)->name,((PeoInfo *)e2)->name);

}
void SortContact(Contact *pc)
{
    //按名字排序
    assert(pc);
    qsort(pc->data,pc->count,sizeof(PeoInfo),cmp_peo_by_name);
    printf("done!");

}

//菜单
void menu()
{
    printf("********************\n");
    printf("****1.add  2.del****\n");
    printf("****3.search 4.mod**\n");
    printf("****5.show 6.sorr***\n");
    printf("*****0.exit********\n");

}

int main()
{
    int input = 0;
    Contact con;//通讯录

    //初始化通讯录
    InitContact(&con);

    do {
        menu();
        printf("plz input:");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                AddContact(&con);
                break;
            case 2:
                DelContact(&con);
                break;
            case 3:
                SearchContact(&con);
                break;
            case 4:
                ModifyContact(&con);
                break;
            case 5:
                ShowContact(&con);
                break;
            case 6:
                SortContact(&con);
                break;
            case 0:
                printf("exit!\n");
                break;
            default:
                printf("error!\n");
                break;
        }
    }while(input);


    return 0;
}