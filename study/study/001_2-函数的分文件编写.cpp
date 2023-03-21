#include <iostream>
using namespace std;
#include "swap.h"

/*
 * 函数的分文件编写
 * 步骤 ：
 *	1. .h 后缀名的头文件
 *	2.	.cpp的源文件
 *	3.	头文件中声明函数
 *	4、	源文件中编写函数的定义
 */

int main(int argc, char* argv[])
{
	int a = 20;
	int b = 30;
	swap(a, b);
	std::cout << "fuck" << endl;

	system("pause");
	return 0;
}