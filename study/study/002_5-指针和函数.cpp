#include <iostream>
using namespace std;

void swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	std::cout << *p1 << endl;
	std::cout << *p2 << endl;
}

int main(int argc, char* argv[])
{
	/*
	 * 指针和函数
	 * 当使用指针做形参的时候形参的的变化会改变实参
	 */

	//当使用指针做形参的时候形参的的变化会改变实参

	int a = 10;
	int b = 20;
	swap(&a, &b);

	std::cout << "a = " << a << endl; // a = 20;
	std::cout << "b = " << b << endl; // b = 10;
	// 原因: 此时操作的是内存地址 将&a和&b进行了交换所以 实参的值相应也会变化
	system("pause");
	return 0;
}
