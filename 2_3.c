//对长度为n的顺序表L，编写一个时间复杂度为O（n），空间复杂度为o1的算法，该算法删除线性表中所有值为x的数据元素

//用k记录顺序表L中不等于x的元素个数，即需要保存的元素个数，扫描时将不等于x的元素移动到下标k的位置，并更新k值，扫描结束后修改l的长度
void del_x_1(Sqlist &L,ElemType x)
{
    //本算法实现删除顺序表L中所有值为x的数据元素
    int k=0,i;//记录值不等于x的元素个数
    for(i=0;i<L.length;i++)
        if(L.data[i]!=x)
{
            L.data[k]=L.data[i];
            k++;//不等于x的元素增加1
}
    L.length=k;//顺序表L的长度等于k
}

//解法2：用k记录顺序表L中等于x的元素个数，边扫描L边统计k，并将不等于x的元素前移K个位置，扫描结束后i需改L的长度
void del_x_2(Sqlist &L,ElemType x)
{
    int k=0,i=0;//k记录值等于x的元素个数
    while(i<L.length)
{
        if(L.data[i]==x)
            k++;
        else
            L.data[i-k]=L.data[i];//当前元素前移k个单位
            i++;
}
    L.length=L.length-k;//顺序表L的长度递减
}