#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct stduent
{
	int id;
	string name;
	int age;
	int score;
};

void printStudent(stduent s)
{
	std::cout << "ѧ��:" << s.id << "����:" << s.name << "����:" << s.age << "����:" << s.score
		<< endl;
}

int main(int argc, char* argv[])
{
	// ֵ����
	printStudent({ 0,"����",22,89});
	// ��ַ����
	//��ַ���ݻ�ı�ʵ�ε�ֵ
	system("pause");

	return 0;
}
