/*
 * 文件名称:_008_11_类和对象_对象特性_const修饰成员函数
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 *常函数
 *
 * 成员函数后加const后我们称这个函数为常函数
 *
 * 常函数内不可以修改成员属性
 *
 * 成员属性声明时加关键字mutable后,在常函数中依然可以修改
 *
 *常对象
 * 声明对象前加const称该对象为常对象
 * 常对象只能调用常函数
 */
#include <iostream>

class Person
{
public:
	void showPerson() const //this指针的本质是常量指针 指针的指向是不可以修改的
		//const Person * const this;
		// 在成员函数后面加上const,修饰的是this指向,让指针指向的值也不可以修改
	{
		//this->m_a = 100;// this指针不可以修饰指针的指向
		this->m_b = 100;
	}

	void fun()
	{
		std::cout << "dsdff" << std::endl;
	}

	int m_a;
	// 特殊变量,即使在常函数中也可以修改这个值,加关键字mutable
	mutable int m_b;
};

void test()
{
	const Person p; //在对向前加const,变为常对象常对象不能修改成员属性
	//p.m_a = 100; 常对象不能修改普通成员属性
	p.m_b = 100; // m_b是特殊值,在常对象下也可以修改

	p.showPerson(); //常对象只能调用常函数
	//p.fun();常对象不可以调用普通成员函数.因为普通成员函数可以修改属性
}

int main(int argc, char* argv[])
{
	system("pause");
	return 0;
}
