/*
 * 文件名称:_008_8_类和对象_对象特性_成员变量和成员函数分开存储
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>
 /*
  * 在C++中,类内的成员变量和成员函数分开存储
  *
  * 只有非静态成员变量才属于类的对象
  */

  //人类
class Person
{
public:
	int m_a; //非静态成员变量 属于类的对象上
	static int m_b; //静态成员变量 不属于类的对象上
	void func() //非静态成员函数 不属于类对象上
	{
	}

	static void func01() //静态成员函数 不属于类的对象上
	{
	}
};

void test()
{
	Person p;
	/*
	 * 空对象暂用内存空间为: 1
	 * C++编译器会给没给空对象也分配一个字节的内存空间,是为了区分空对象占内存的位置;每个空对象也应该有一个独一无二的内存地址
	 */
	std::cout << "sizeof(p)=" << sizeof(p) << std::endl; // 1
}

void test01()
{
	Person p;

	std::cout << "sizeof(p)=" << sizeof(p) << std::endl; // 4 实际上是 int m_a 的内存大小 静态成员变量和成员函数不在对象内
}

int main(int argc, char* argv[])
{
	//test();
	test01(); // 4
	system("pause");
	return 0;
}