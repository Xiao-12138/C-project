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

 // ȫ�ֺ�������Ԫ
class MyHouse
{
	//���߱����� goodFriendȫ�ֺ�����MyHouse����Ԫ�����Է������е�˽������
	friend void goodFriends(MyHouse* building);

public:
	MyHouse()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

	std::string m_SittingRoom;

private:
	std::string m_BedRoom;
};

void goodFriends(MyHouse* building)
{
	//������ʹ����ĳ�Ա����
	std::cout << "goodGuy������" << building->m_SittingRoom << std::endl;
	//���������˽�г�Ա����
	std::cout << "goodGuy������" << building->m_BedRoom << std::endl;
}


int main(int argc, char* argv[])
{
	MyHouse building;
	goodFriends(&building);
	system("pause");
	return 0;
}
