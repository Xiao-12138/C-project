#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	//����ѧ���ṹ�����
	struct student
	{
		string name;

		int age;

		int score;
	};

	student s = {"������", 33, 88};

	//ͨ��ָ��ָ��ṹ�����
	student* p = &s;
	//ͨ��ָ����ʽṹ������е�������Ҫ����"->";
	cout << "����" << p->name << "����" << p->age << "����" << p->score << endl;
	system("pause");
	return 0;
}
