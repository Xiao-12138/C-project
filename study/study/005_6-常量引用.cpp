#include <iostream>
using namespace std;

void showValue(const int& a)//加上const防止误操作
{
	//a = 1000; //这里报错,加上const后变为常量引用常量不可修改防止误操作
	std::cout << a << endl;
}

int main(int argc, char* argv[])
{
	//常量引用场景:用来修饰形参,防止误操作

	//int& ref = 10; 引用本身需要一个合法的内存空间,因此报错

	const int& ref = 10; //这里实际上执行的是 int tmp = 10; const int& ref = tmp;这是编译器自动优化的

	system("pause");
	return 0;
}