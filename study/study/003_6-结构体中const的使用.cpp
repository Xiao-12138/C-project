#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

void printStudents(const student* s)
{
	std::cout << s->name << s->age << s->score;
}

int main(int argc, char* argv[])
{
	/*
	 * ����:��ֹ�����
	 * �������е��βθ�Ϊָ��,���Լ����ڴ�ռ��,���Ҳ��Ḵ���µĸ�������
	 * ���β�ǰ����һ��const:һ�����޸ĵĲ����ͻᱨ��,���Է�ֹ���������
	 */
	student s = { "wa", 22, 66 };
	printStudents(&s);
	system("pause");
	return 0;
}
