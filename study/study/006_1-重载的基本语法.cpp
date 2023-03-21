/*
 * 文件名称:重载的基本语法
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>
 /*
  * 函数的重载
  * 作用:函数的名称可以相同提高复用性
  *
  * 函数重载满足的条件
  * 1.同一个作用域下
  * 2.函数名相同
  * 3.函数 参数类型 或者 个数不同 或者顺序不同
  *
  * 注意:函数的返回值不可以作为函数重载的条件
  *
  *int func(){}
  *void func(){} 这种情况不是函数重载
  *
  */

void func()
{
	std::cout << "我是你爸爸!";
}

void func(int a)
{
	std::cout << "我是你爷爷!";
}
void func(double a)
{
	std::cout << "你是我孙子!";
}
void func(int a, double b)
{
	std::cout << "你是我二儿子!";
}
void func(double b, int a)
{
	std::cout << "你是我大儿子!";
}
int main(int argc, char* argv[])
{
	func();
	func(10);
	func(3.12);
	func(10, 3.14);
	func(3.14, 10);

	system("pause");
	return 0;
}