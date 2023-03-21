#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	// 数据类型 &别名 = 原名
	int a = 100;
	// 创建别名 将b也指向
	int* b = &a;

	cout << a << endl;
	cout << *b << endl;

	//改变b的值
	*b = 1000;

	cout << a << endl;
	cout << *b << endl;

	system("pause");
	return 0;
}
/**
 *注意事项：
 *	引用必须要初始化
 *
 *	引用一旦初始化后，就不可以更改了。
 */