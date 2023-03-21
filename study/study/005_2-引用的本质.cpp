#include <iostream>
using namespace std;
//引用的本质在c++内部实际是一个指针常量
//指针常量是指针的常量，它的值（即指向的地址）不能改变，但可以修改指向的变量的值

void func(int& ref) //自动转换为int* const ref = &a;
{
	ref = 100;//自动转换为*ref = 100;
}

int main(int argc, char* argv[])
{
	int a = 10;

	int& ref = a; //自动转换为 int * const ref = &a; 指针常量是指针指向不可改,也说明为什么引用不能改.ref用做a的别名 实际ref也是一个指针常量和a指向同一块内存空间

	ref = 20;//进行解引用*ref=20将ref指向的内存空间的数值修改为20
	std::cout << "a" << a << endl;//a和ref指向同一块内存空间数值均发生变化
	std::cout << "ref" << ref << endl;

	func(a);//函数调用跳转到函数体执行

	system("pause");
	return 0;
}