#include <iostream>
/*
 * 构造函数的分类
 *	按参数分：
 *		有参构造和无参构造（默认构造）
 *	按类型分：
 *		普通构造和拷贝构造
 *
 *	三种调用方法
 *		括号法
 *		显示法
 *		隐式转换法
 */

class Person
{
public:
	//普通构造
	//无参构造
	Person(){}
	//有参构造
	Person(int a , std::string
n)
	{
		age = a;
		name = n;
	}
	//拷贝构造
	Person(const Person &p)
	{
		//复制一个对象
		age = p.age;
	}
private:
	int age;
	std::string name;

};
int main(int argc, char* argv[])
{
	//调用构造函数
	//括号法（默认方法）
	//无参构造:注意无参构造不要就加括号Person P1（）；这个写法编译器会认为是一个函数的声明
	Person p1;
	//有参构造
	Person p2(20,"t");
	//拷贝构造
	Person p3(p1);

	//显示法
	Person p6;
	Person p4 = Person(10,"w");
	Person p5 = Person(p6);
	Person(10,"d");//匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
	//注意：不要用拷贝构造函数，构造匿名对象 编译器会认为 Person（p3）== Person p3(对象的声明);

	//隐式转换法
	Person p7 = { 10,"r" }; //等同于Person p7 = Person（10,"r"）；
	Person P8 = p7;//拷贝构造
	system("pause");
	return 0;
}
