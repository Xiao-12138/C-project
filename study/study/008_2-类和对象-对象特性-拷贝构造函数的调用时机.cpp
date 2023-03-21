#include <iostream>

/*
 * 拷贝构造函数的调用时机
 *	使用一个已经创建完成的对象来初始化一个新对象
 *	值传递的方式给函数参数传值
 *	以值方式返回局部对象
 */
class Person
{
public:
	Person (){}
	Person(int age)
	{
		m_age = age;
	}
	Person (const Person & p)
	{
		std::cout << "拷贝构造函数调用" << std::endl;
		m_age = p.m_age;
	}
	int getAge()
	{
		return m_age;
	}
	~Person()
	{
		std::cout << "析构函数调用"<<std::endl;
	}
private:
	int m_age;
};
void test01(Person p)//值传递方式给函数传值
{
	
}
Person test02()
{
	Person p;
	return p;//返回的对象是通过拷贝构造函数复制的对象
}
int main(int argc, char* argv[])
{
	//1、使用一个已经创建完毕的对象来初始化一个新对像 
	Person p(10);
	std::cout << &p<<std::endl;
	Person p1(p);
	std::cout << "p1的年龄为：" << p1.getAge() << std::endl;

	//2、值传递的方式给函数参数传值
	test01(p);//值传递的方式给函数传值，会调用拷贝构造函数复制一个对象，函数内操作该对象不会影响源对象

	//3、值方式返回局部对象
	Person p3 = test02(); 
	std::cout << &p3<<std::endl;//两个对象的地址值并不一样，所以他们并不是同一个对象
	system("pause");
	return 0;
}
