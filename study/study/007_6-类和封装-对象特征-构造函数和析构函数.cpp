#include <iostream>

/*
 * 构造函数语法：
 *	类名（）{}
 *	1、构造函数，没有返回值也不写void
 *	2、函数名与类名相同
 *	3、构造函数可以有参数，因此可以发生重载
 *	4、程序在调用对象时会自动调用构造，无需手动调用
 *
 *	析构函数语法：
 *		~类名（）{}
 *	1、没有返回值也不写void
 *	2、函数名称与类名相同，在类名前加~
 *	3、不可以有参数，不能重载
 *	4、程序在对象销毁时自动调用，无需手动调用，而且只会调用一次
 */
class Person
{
public:
	Person()
	{
		std::cout << "构造函数调用"<<std::endl;
	}
	~Person()
	{
		std::cout << "析构函数调用"<<std::endl;
	}

};
void test()
{
	Person p;
}
int main(int argc, char* argv[])
{
	test();//函数执行完毕后会销毁对象所以构造析构同时执行
	Person p1;//执行构造函数，析构函数在main方法执行完成后执行（程序关闭时）
	system("pause");
	return 0;
}
