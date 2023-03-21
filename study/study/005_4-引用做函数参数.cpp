#include <iostream>
using namespace std;

//引用可以用作函数的参数

//交换函数

// 1.值传递
void mySwap01(int a, int b) // 值传递，只改变形参不改变实参；
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a=" << a << endl;
	std::cout << "b=" << b << endl;
}

// 2.地址传递

void mySwap02(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "a=" << *a << endl;
	std::cout << "b=" << *b << endl;
}

// 3.引用
void mySwap03(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a=" << a << endl;
	std::cout << "b=" << b << endl;
}
int main(int argc, char* argv[])
{
	int a = 10;
	int b = 20;

	mySwap01(a, b); // 实参并不会发生交换
	cout << "a=" << a << endl; //a =10
	std::cout << "b=" << b << endl; // b = 20

	mySwap02(&a, &b); //通过指针操作的是实际内存中的值，故而新参和实参都会发生改变
	cout << "a=" << a << endl;
	std::cout << "b=" << b << endl;

	mySwap03(a, b);//引用实际操作的也是原数据，故而原数据也会变化
	cout << "a=" << a << endl;
	std::cout << "b=" << b << endl;
	system("pause");
	return 0;
}