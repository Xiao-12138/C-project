#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	struct student
	{
		int id;
		string name;
		int age;
		int score;
	};
	struct teachers
	{
		int id;
		string name;
		int age;
		student studentsArray[3];
	};

	teachers t1 = {1, "ÂŞÏè", 22, {{0, "½ñÍí¶ù", 33, 88}, {1, "fds", 55, 88}, {2, "asa", 22, 99}}};

	std::cout << t1.id << t1.name << t1.age;
	for (int i = 0; i < std::size(t1.studentsArray); i++)
	{
		std::cout << t1.studentsArray[i].age << t1.studentsArray[i].name << t1.studentsArray[i].age << t1.studentsArray[
			i].score << endl;
	}

	system("pause");
	return 0;
}
