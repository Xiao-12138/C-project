#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	/*
	 * ���Զ���Ľṹ����뵽�����з���ά��
	 * �﷨:
	 *		struct �ṹ���� ������[���鳤��] = {{},{},{},...}
	 */

	struct student
	{
		string name;

		int age;

		int score;
	};

	student arr[3] = {
		{"����", 32, 44}, {"����", 33, 45}, {"����", 44, 77}
	};

	for (int i = 0; i < std::size(arr); ++i)
	{
		std::cout << arr[i].name << arr[i].age << arr[i].score;
	}
	system("pause");
	return 0;
}
