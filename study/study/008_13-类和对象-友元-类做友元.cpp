#include <iostream>
/*
 *
 * �ڳ�������Щ˽������Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
 *
 * ��Ԫ��Ŀ�ľ�����һ������������ ������һ�����е�˽�г�Ա
 *
 * ��Ԫ�Ĺؼ���Ϊ��friend
 *
 * ��Ԫ������ʵ��
 *		ȫ�ֺ�������Ԫ
 *		������Ԫ
 *		��Ա��������Ԫ
 *
 */

 // ������Ԫ

class MyHouse
{
	//���߱�����MyFriend��MyHouse����Ԫ�����Է���MyHouse��˽�г�Ա
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

//�����������ĳ�Ա����
MyHouse::MyHouse()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

MyFriend::MyFriend()
{
	//����MyHose����
	building = new MyHouse;
}

void MyFriend::visit()
{
	std::cout << "MyFriend���ڷ��ʣ�" << building->m_SittingRoom << std::endl;
	//���������˽�г�Ա����
	std::cout << "MyFriend���ڷ��ʣ�" << building->m_BedRoom << std::endl;
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
