#include <iostream>
#include <string>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;
};

int main(int argc, char* argv[])
{
	hero hArray[5] = {{"����", 23, "��"}, {"����", 22, "��"}, {"�ŷ�", 20, "��"}, {"����", 21, "��"}, {"����", 19, "Ů"}};
	//ʹ��ð���������������������
	for (int i = 0; i < 5-1; ++i)
	{
		
		for (int j = 0; j < 5 - i - 1; ++j)
		{
			
			if (hArray[j].age > hArray[j + 1].age)
			{
				hero tmp = hArray[j];
				hArray[j] = hArray[j + 1];
				hArray[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << hArray[i].age << endl;
	}
	system("pause");
	return 0;
}
