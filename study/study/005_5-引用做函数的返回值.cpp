#include <iostream>
using namespace std;

//引用做函数的返回值

//不要返回局部变量的返回值

int& mySwap01()
{
	int a = 10; //局部变量放在栈区中，执行完后会被释放
	return a;
}

//函数可以作为左值
int& mySwap02()
{
	static int a = 10; //静态变量存放在全局区，在程序结束后，由系统释放。故而可以返回其引用

	return a;
}

int main(int argc, char* argv[])
{
	//函数可以作为左值
	int& ref = mySwap02();
	cout << ref << endl;
	mySwap02() = 1000; //此时的函数实际是a的引用故而，其变化是直接对a的值进行操作。同样ref也是a的引用所以ref的值也发生了变化
	std::cout << ref << endl;
	system("pause");
	return 0;
}