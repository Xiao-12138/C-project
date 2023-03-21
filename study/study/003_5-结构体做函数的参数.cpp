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
	std::cout << "学号:" << s.id << "姓名:" << s.name << "年龄:" << s.age << "分数:" << s.score
		<< endl;
}

int main(int argc, char* argv[])
{
	// 值传递
	printStudent({ 0,"罗翔",22,89});
	// 地址传递
	//地址传递会改变实参的值
	system("pause");

	return 0;
}
