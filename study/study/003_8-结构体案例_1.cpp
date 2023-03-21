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
	hero hArray[5] = {{"刘备", 23, "男"}, {"关羽", 22, "男"}, {"张飞", 20, "男"}, {"赵云", 21, "男"}, {"貂蝉", 19, "女"}};
	//使用冒泡排序进行年龄排序后输出
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
