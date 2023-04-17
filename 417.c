/*
 * 操作符
 *
 * 算术操作符
 * +-*%/.其中%两端只能是整数
 *
 * 移位操作符
 * <<  >>
 *
 * 位操作符
 * & ^ |
 *
 * 赋值操作符
 * =赋值
 * += //  a += 3， 就是 a= a+3
 * -= *= /= &= ^= >>= <<=
 *
 * 单目操作符
 * ！逻辑反操作，把真非0变成假0，假变成真
 * -负值，+正值，&取地址
 * size of操作数的类型长度（以字节为单位）。sizeof（a），计算a的字符长
 * size of（arr） 计算的是整个数组的长度
 *~对一个数的二进制按位取反
 * --前置后置，自减。
 * ++前置后置，自加
 *  *简介访问操作符，解引用操作符
 *  （类型）强制类型转换，int a = 3.14  int a = （int）3.14.将3.14会自动识别为double，（int）将其强制转换成int
 *
 *
 * 关系操作符
 * > >= < <=
 * !=不相等
 * ==相等
 *
 *
 * 逻辑运算符
 * &&与，并且
 * ||或，或者
 *
 * 条件操作符
 * 三目运算符
 * exp1？exp2：exp3。 表达为1如果为真，就是表达式2，如果为假，表达式为3
 *
 *
 * 逗号表达式
 * exp1，exp2，exp3……。从左向右依次计算，整个表达式的结果是最后一个表达式的结果
 *
 * 下标引用，函数调用和结构成员操作符： []下标引用操作符    ()函数调用操作符  ·   ->
 *
 *
 * 常用关键字
 * auto break   case    char    continue    default do  double
 * else enum    extern  float   for goto    if  int long    register
 * return   short   signed  sizeof  static  struct  switch  typeof
 * union    unsigned    viod    volatile    while
 *  变量名不能是关键字
 *  变量的命名：有意义，必须是字母数字下划线组成，不能有特殊字符，同时不能以数字开头。不能是变量名
 *
 */