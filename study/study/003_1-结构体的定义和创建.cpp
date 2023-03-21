#include <iostream>
using namespace std;
#include <string>

int main(int argc, char* argv[])
{
	/*
	 * 结构体:用户自定义的数据类型,语序用户存储不同的数据类型
	 * 语法:struct 结构体名 {结构体成员列表}
	 *
	 * 通过结构体创建变量的方式:
	 * struct 结构体名 变量名
	 * struct 结构体名 变量名 ={成员1值,成员2值...}
	 * 定义结构体时顺便创建变量
	 *
	 * 注意:
	 *	定义结构提示的struct不可省略
	 *	创建结构体变量时struct 可以省略
	 *	使用"."访问成员内变量
	 */
	struct student
	{
		string name; //名字

		int age; // 年龄

		int score; // 分数
	} s3;

	//创建变量的三种方式
	struct student s1;
	s1.name = "王二娃";
	s1.age = 22;
	s1.score = 33;

	std::cout << s1.name << s1.age << s1.score << endl;

	struct student s2 = {"李老栓", 55, 88};
	std::cout << s2.name << s2.age << s2.score << endl;

	s3 = {"张三",44,99};
	std::cout << s3.name << s3.age << s2.score << endl;
	system("pause");
	return 0;
}
