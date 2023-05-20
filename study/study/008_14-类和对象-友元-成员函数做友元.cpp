#include <iostream>
/*
 * 文件名称:_008_14_类和对象_友元_成员函数做友元
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 *
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

 //成员函数做友元

 //声明MyHouse类以便于在好朋友类中使用
class MyHouse;

//好朋友类
class MygoodFriends
{
public:
	void visit();
	MygoodFriends();
	MyHouse* my_house;
};

//MyHouse
class MyHouse
{
	//构造函数

	//告诉编译器MyGoodFriends类的visit函数是我的友元,允许访问我的私有成员
	friend void MygoodFriends::visit();

public:
	MyHouse();
	std::string m_SittingRoom;
private:
	std::string m_BedRoom;
};

//类外实现成员函数
//实现MyHouse的构造函数
MyHouse::MyHouse()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
//实现好朋友类的构造函数
MygoodFriends::MygoodFriends()
{
	//在好朋友类的构造函数类中实例化MyHouse
	my_house = new MyHouse;
}
//实现visit成员函数
void MygoodFriends::visit()
{
	std::cout << "好朋友访问了:" << my_house->m_SittingRoom << std::endl;
	std::cout << "好朋友访问了:" << my_house->m_BedRoom << std::endl;
}

void test()
{
	MygoodFriends mygood_friends;
	mygood_friends.visit();
}
int main(int argc, char* argv[])
{
	test();
	return 0;
	system("pause");
}