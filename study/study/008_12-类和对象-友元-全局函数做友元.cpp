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

 // 全局函数做友元
class MyHouse
{
	//告诉编译器 goodFriend全局函数是MyHouse的友元，可以访问类中的私有内容
	friend void goodFriends(MyHouse* building);

public:
	MyHouse()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

	std::string m_SittingRoom;

private:
	std::string m_BedRoom;
};

void goodFriends(MyHouse* building)
{
	//类外访问公开的成员变量
	std::cout << "goodGuy进入了" << building->m_SittingRoom << std::endl;
	//在类外访问私有成员变量
	std::cout << "goodGuy进入了" << building->m_BedRoom << std::endl;
}


int main(int argc, char* argv[])
{
	MyHouse building;
	goodFriends(&building);
	system("pause");
	return 0;
}
