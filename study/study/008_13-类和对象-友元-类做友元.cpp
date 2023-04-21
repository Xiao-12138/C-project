#include <iostream>
/*
 *
 * 在程序里有些私有属性也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
 *
 * 友元的目的就是让一个函数或者类 访问另一个类中的私有成员
 *
 * 友元的关键字为：friend
 *
 * 友元的三种实现
 *		全局函数做友元
 *		类做友元
 *		成员函数做友元
 *
 */

 // 类做友元

class MyHouse
{
	//告诉编译器MyFriend是MyHouse的友元，可以访问MyHouse的私有成员
	friend class MyFriend;

public:
	MyHouse();
	std::string m_SittingRoom;

private:
	std::string m_BedRoom;
};

class MyFriend
{
public:
	MyFriend();
	void visit();
	MyHouse* building;
};

//在类外完成类的成员函数
MyHouse::MyHouse()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

MyFriend::MyFriend()
{
	//创建MyHose对象
	building = new MyHouse;
}

void MyFriend::visit()
{
	std::cout << "MyFriend正在访问：" << building->m_SittingRoom << std::endl;
	//在类外访问私有成员变量
	std::cout << "MyFriend正在访问：" << building->m_BedRoom << std::endl;
}

void test()
{
	MyFriend my_friend;
	my_friend.visit();
}


int main(int argc, char* argv[])
{
	test();
	system("pause");
	return 0;
}
