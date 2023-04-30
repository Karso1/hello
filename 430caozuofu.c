/*
 * 操作符
 *
 *
 * 算术操作符：-/*+%
 * / 整型的除法，1/2 = 0
 * 浮点数的除法。1.0 / 2= 0.5，至少满足左右两边有一个是浮点数
 * %计算的是整除后的余数，去摸操作符两端必须是整数
 *
 *
 * 移位操作符>> <<
 * 16进制，0~9和a~f（10-15）表示
 * 二进制，0~1
 * 8进制，0~7
 * 整数的二进制表示有三种，原码反码补码
 * 正的整数的原码反码补码相同
 * 负整数的原码反码补码是需要计算的
 * 7的原码是00000000000000000000000000000111，原码反码补码都是这个
 * -7的原码10000000000000000000000000000111
 *    反码11111111111111111111111111111000，原码的符号位不变，其他位按位取反就是反码
 *    补码11111111111111111111111111111001，补码，反码加1就是补码
 *
 * 整数再内存中存储的是补码
 *
 * <<左移操作符，移动的是二进制位.  a =7,b=a<<1.。。最左边的丢弃，右边补0。也就是说b变成了000000000000000000000000000000000000001110
 *      左移操作符1相当于×2，比如说上面的b是14
 * >>右移操作符：算数移位和逻辑移位
 *      如果是算术移位：右边丢弃，左边补原符号位，
 *           逻辑移位：右边丢弃，左边补0
 *       因为是正数，最左边本来都是0所以无法判断是算术移位还是逻辑移位
 *
 * 移位操作符的位数不能是负数和浮点数，只能是正整数
 *
 *
 *
 *
 *
 * 位操作符 & |
 * 赋值操作符
 * 单目操作符
 * 关系操作符
 * 逻辑操作符
 * 条件操作符
 * 逗号操作符
 * 下标引用，函数调用和结构成员
 *
 */