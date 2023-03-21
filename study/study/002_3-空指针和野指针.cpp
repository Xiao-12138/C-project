#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//空指针:指针变量指向内存中编号为0的空间
	/*
	 * 用途 : 初始化指针变量
	 *
	 * 注意: 空指针指向的内存是不可以访问的(0~255)
	 *
	 * 野指针:指针变量指向非法的内存空间
	 */

	//初始化指针变量
	//int* p = NULL;

	//内存编号为0~255是系统占用内存,不允许用户访问

	//std::cout << *p << endl;//ERROR: p 是 nullptr。

	// 野指针实例
	// 指针变量x 指向内存地址编号为0x1100的空间

	int * x = (int *)0x1100;

	std::cout << *x<< endl;// 读取访问权限冲突

	system("pause");
	return 0;
}