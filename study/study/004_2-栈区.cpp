#include <iostream>
using namespace std;

/*
 *	栈区:由编译器自动分配释放,存放函数的参数值,局部变量等;
 *		注意:
 *			不要返回局部变量的地址,栈区开辟 的数据由编译器自动释放;
 */

int* func(int b_i) // 形参也放在栈区 函数执行后系统会自动释放
{
	int b_i = 100;
	int a = 10; // 局部变量 存放在栈区,函数执行完后被编译器释放
	return &a; // 返回局部变量的地址
}

int main(int argc, char* argv[])
{
	// 接收func 函数的返回值
	int* p = func(1);

	std::cout << *p << endl; // 第一次可以输出正确的数字,因为编译器保留一次
	std::cout << *p << endl; // 第二次数据不再保留

	system("pause");
	return 0;
}