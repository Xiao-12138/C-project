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
	 * 作用:防止误操作
	 * 将函数中的形参改为指针,可以减少内存占用,而且不会复制新的副本出来
	 * 在形参前加上一个const:一旦有修改的操作就会报错,可以防止我们误操作
	 */
	student s = { "wa", 22, 66 };
	printStudents(&s);
	system("pause");
	return 0;
}
