#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	/*
	 * const修饰指针 ---常量指针
	 *	特点:
	 *		指针的指向可以修改,但指针的值不可以修改
	 *		const int * p = &a;
	 *		*p = 20; // 错误,指向的值不可以修改
	 *		p = &b; //指向可以修改
	 * const修饰常量 ---指针常量
	 *	特点:指针的指向不可以改,指针指向的值可以修改
	 *		int * const p = &a;
	 *		*p = 20; // 指针指向的值可以修改
	 *		p = &b; // 错误指针指向不能修改
	 *
	 * const既修饰指针又修饰常量
	 *	特点:
	 *		指针指向和指向的值都不可修改
	 *		const int * const p = &a;
	 *		*p = 20;// 错误
	 *		p = &b;// 错误
	 */
	system("pause");
	return 0;
}
