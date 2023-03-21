/*
 * 文件名称:函数重载的注意事项
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>
using namespace std;
/*
 * 引用作为重载条件
 * 函数重载碰到函数默认参数
 *
 *尽量避免使用函数重载时使用默认参数
 *
 *int func(int a,int b = 10){}
 *
 *int func(int a){}
 *
 *func(20)这样会出现二义性,编译器并不知道调用哪个
 *
 */

void func(int& a)
{
	std::cout << "1" << endl;
}

void func(const int& a)
{
	std::cout << "2" << endl;
}

int main(int argc, char* argv[])
{
	int a = 10;
	func(a); //调用func(int& a)

	func(20);//调用func(const int& a) 原因:int& a = 20 这是非法 但是const int& a = 20;这是可以的因为 int& a 必须指向一个合法的内存空间地址 const int& a =20;实际进行的操作是 int temp = 20;const int* a = temp;

	system("pause");
	return 0;
}