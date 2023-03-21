#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	/*
	 * 将自定义的结构体放入到数组中方便维护
	 * 语法:
	 *		struct 结构体名 数组名[数组长度] = {{},{},{},...}
	 */

	struct student
	{
		string name;

		int age;

		int score;
	};

	student arr[3] = {
		{"张三", 32, 44}, {"王二", 33, 45}, {"力王", 44, 77}
	};

	for (int i = 0; i < std::size(arr); ++i)
	{
		std::cout << arr[i].name << arr[i].age << arr[i].score;
	}
	system("pause");
	return 0;
}
