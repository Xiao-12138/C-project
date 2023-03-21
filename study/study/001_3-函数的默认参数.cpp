#include <iostream>
using namespace std;
//函数的默认参数
//如果我们设置了默认值,我们没有输入数据就使用默认值,传入了值就使用传入的值

//注意事项:
/*
 * 如果某个位置已经有了默认参数,那么从这个位置往后,从左到右都必须有默认值
 *
 *函数的声明和实现有且只能有一个能设置默认参数
 *
 * int func(int a,int b); //声明没有默认值
 * int func(int a = 10,int b = 20){ //实现有默认值
 *		........
 * }
 * 声明和实现不能同时设置默认值
 */
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

int main(int argc, char* argv[])
{
	std::cout << func(10) << endl; //没有传入使用默认值

	std::cout << func(10, 50) << endl; //传入参数使用传入值

	system("pause");

	return 0;
}