#include <iostream>
using namespace std;

/*
 * 引用的基本作用
 *	给变量起别名
 *	语法: 数据类型 &别名 = 原名
 *注意:
 *	引用必须初始化,初始化后不能修改 
 */
int main(int argc, char* argv[])
{
	int a = 10;

	int& b = a;

	b = 20;
	cout << a << endl;
	std::cout << b << endl;


	system("pause");
	return 0;
}
