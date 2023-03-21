#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	//创建学生结构体变量
	struct student
	{
		string name;

		int age;

		int score;
	};

	student s = {"王二娃", 33, 88};

	//通过指针指向结构体变量
	student* p = &s;
	//通过指针访问结构体变量中的数据需要利用"->";
	cout << "姓名" << p->name << "年龄" << p->age << "分数" << p->score << endl;
	system("pause");
	return 0;
}
