#include <iostream>
using namespace std;

/*
 * 函数定义： 返回值类型 函数名 （参数列表）{表达式；return 表达式；}
 * 函数定义用于书写函数的执行内容，声明则是说明该函数存在
 * 函数定义只能有一次，函数声明可以写多次
 *
 */
int add(int sum_1, int sum_2)
{
	return sum_1 + sum_2;
}

//比较函数

int max(int num_1, int num_2)
{
	return num_1 > num_2 ? num_1 : num_2;
}

int main(int argc, char* argv[])
{
	std::cout << add(12, 13) << endl;

	std::cout << max(33,44)<< endl;
	system("pause");

	return 0;

}
