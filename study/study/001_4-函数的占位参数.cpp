/*
 * 文件名称:函数的占位参数
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>
 /*
  * 形参列表里可以有占位参数,用来占位,调用函数时必须填补该参数
  *
  * 语法: 返回值类型 函数名 (数据类型){}
  * void func(int a, int){}
  * 函数占位参数也可以有默认参数
  * void func(int a, int = 20){}
  */
void func(int a, int) //使用占位参数
{
	std::cout << "我是你爸爸";
}

int main(int argc, char* argv[])
{
	func(10, 20); //函数调用时必须补全
	system("pause");
	return 0;
}