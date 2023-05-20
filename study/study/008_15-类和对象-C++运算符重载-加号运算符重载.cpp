/*
 * 文件名称:_008_15_类和对象_C__运算符重载_加号运算符重载
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>

 /*
  * 运算符重载概念:对已有的运算符重新进行定义,赋予其另一种功能,以适应不同的数据类型
  *
  *加号运算符重载
  *
  *运算符的重载也能进行函数的重载
  *
  *作用:实现两个自定义数据类型相加的运算
  *
  */

class Person
{
public:
	int m_a;
	int m_b;

	//成员函数对+号运算符进行重载
	//Person operator+ (Person&person)
	//{
	//	Person temp;
	//	temp.m_a = this->m_a + person.m_a;
	//	temp.m_b = this->m_b + person.m_b;
	//	return person;
	//}
};

// 全局函数对+号进行重载
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}

//进行函数重载
Person operator+(Person& p1, int num)
{
	Person temp;
	temp.m_b += num;
	temp.m_a += num;
	std::cout << typeid(temp).name() << std::endl;
	return temp;
}

void test()
{
	Person p1{ 1, 1 };
	Person p2{ 2, 2 };
	Person p3;
	p3 = p1 + p2; //当使用成员函数重载时:实际调用为p3 = p1.operator+(p2);当使用全局函数重载时:实际调用为:p3 = operator+(p1,p2);
	std::cout << p3.m_a << p3.m_b << std::endl;
}

void test01()
{
	Person p1{ 10, 10 };
	Person p2 = p1 + 20;
	std::cout << p2.m_b << p2.m_b << std::endl;
}

int main(int argc, char* argv[])
{
	test();
	test01();
	return 0;
	system("pause");
}