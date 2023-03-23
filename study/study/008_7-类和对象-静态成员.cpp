/*
 * 文件名称:_008_7_类和对象_静态成员
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>
 /*
  * 静态成员
  * 语法:
  *	在成员变量或成员函数前加上static
  *	分类:
  *		静态成员变量
  *			所有对象共享一份数据
  *			在编译阶段分配内存
  *			类内声明,类外初始化
  *		静态成员函数
  *			所有对象共享一个函数
  *			静态成员函数只能访问静态成员变量
  *	静态成员变量有两种访问方式
  *		通过对象访问
  *		通过类名访问
  *
  *	静态成员变量也有访问权限
  *
  *	静态成员函数也有两种访问方式
  *		对象访问
  *		类名访问
  * 静态成员函数也受权限控制
  *
  */
class Person
{
public:
	//静态成员变量

	static int m_a; //类内声明
	int m_b; //非静态成员变量
	static void func()
	{
		m_a = 300;
		//m_b = 200; 静态成员函数不可以访问非静态成员变量,因为无法区分到底是哪个对象的成员变量
	}
};

int Person::m_a = 100; // 类外初始化
int main(int argc, char* argv[])
{
	Person p;
	Person p2;
	Person p3;
	p2.m_a = 200; //所有成员共享一份数据,当其中一个成员改变了数据所有成员数据都会发生改变
	p2.func(); //对象访问
	Person::func(); //类名访问
	std::cout << p.m_a << std::endl; //200
	std::cout << p2.m_a << std::endl; //200
	std::cout << p3.m_a << std::endl; //200
	//通过类名访问
	std::cout << Person::m_a << std::endl;

	system("pause");
	return 0;
}