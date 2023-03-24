/*
 * 文件名称:_008_9_类和对象_对象特性_this指针
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>
 /*
  * 每个非静态成员函数只会诞生一份函数实例,也就是说多个同类型的对象只会公用一块代码
  *
  * 那么这一块代码如何区分那个对象调用自己?
  *
  *	C++通过提供特殊的对象指针,this指针解决;this指针指向被调用的成员函数所属的成员函数所属的对象
  *
  *	this指针是隐含每一个非静态成员函数内的一种指针
  *
  *	this指针不需要定义直接使用即可
  *
  *	用途:
  *		当形参和成员变量同名时,使用this指针来区分
  *		类的非静态成员函数中返回对象本身,可使用return *this
  */
class Person
{
public:
	Person(int age)
	{
		//age = age; // 这种情况下 编译器根本无法区分这里的age 是不是成员变量 age
		this->age = age; // 这里的this的作用就是 解决名称冲突 告诉编译器 我指向的是Person的成员属性 age
	}

	Person* PersonAddAge(Person& person)
	{
		this->age += person.age; //将调用的对象的年龄与传入的对象的年龄进行相加 this指向的是调用的对象
		return this; //此时的this指向的是调用的对象 返回他的指针
	}

	int age;
};

void test1()
{
	Person p(18);
	std::cout << "p的年龄是:" << p.age << std::endl;
}

void test2()
{
	Person p1(10);
	Person p2(12);
	p1.PersonAddAge(p1);
	std::cout << "p1的年龄为:" << p1.age << std::endl;
}

int main(int argc, char* argv[])
{
	test1();
	test2();
	system("pause");
	return 0;
}