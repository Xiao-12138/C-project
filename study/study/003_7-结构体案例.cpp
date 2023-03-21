#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct student
{
	int id;
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;
	string name;
	student sArray[5];
};

void allocateSpace(teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; ++i)
	{
		tArray[i].id = i;
		tArray[i].name += "teacher_";
		tArray[i].name += nameSeed[i];
		for (int j = 0; j < 5; ++j)
		{
			tArray[i].sArray[j].id = j;
			tArray[i].sArray[j].name = "student_";
			tArray[i].sArray[j].name += nameSeed[j];
			//使用随机数为年龄和成绩赋值
			tArray[i].sArray[j].age = rand() % 5 + 16; 
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void printInfo(teacher tArray[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << "tId:" << tArray[i].id << "tName:" << tArray[i].name;
		for (int j = 0; j < 5; ++j)
		{
			std::cout << "sId:" << tArray[i].sArray[j].id << "sName:" << tArray[i].sArray[j].name << "sAge:" << tArray[
				i].sArray[j].age << "sScore:" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main(int argc, char* argv[])
{
	//随机数种子
	srand((unsigned int)time(NULL));

	teacher tArray[3];

	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	printInfo(tArray, len);
	system("pasue");
	return 0;
}
