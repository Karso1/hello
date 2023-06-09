/*
 * typedef  类型定义，类型重命名
 *
 * static   关键词，用来修饰变量和函数
 *                  1，修饰局部变量-称为静态局部变量。static修饰局部变量时，局部变量出了作用域，不销毁
 *                  修饰局部变量时，改变了变量的存储位置，所以出了作用域，不销毁。
 *                  影响了变量的生命周期，生命周期变长，和程序的生命周期一样
 *                  2.修饰全局变量-称为静态全局变量。//要使用外部的全局变量，需要extern int，声明外部变量
 *                    全局变量是具有外部连接属性的，编译＋链接=可执行程序。
 *                    使用了static修饰了全局变量时，这个全局变量的外部连接属性变成了内部连接属性，其他源文件就不能使用这个全局变量了
 *                  3，修饰函数-称为静态函数
 *                     一个函数本来具有外部连接属性，但如果被static修饰，其变成了内部连接属性，其他源文件不能在使用这个函数
 *
 * register  寄存器。
 *           电脑上的存储设备：register（集成到cpu），高速缓存（cache），内存，硬盘
 *                          前者空间小，造价高，速度快  后者空间大，造价低，访问速度慢
 *
 */