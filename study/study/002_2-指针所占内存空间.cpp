#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	/*
	 * 32位系统中占4个字节
	 * 64位系统中占8个字节
	 */
	// 验证
	int a = 10;
	int* p = &a;
	std::cout << "sizeof(int * ) = " << sizeof(int*) << endl;
	std::cout << "sizeof(int * ) = " << sizeof(float*) << endl;
	std::cout << "sizeof(int * ) = " << sizeof(double*) << endl;
	std::cout << "sizeof(int * ) = " << sizeof(char*) << endl;
	system("pause");
	return 0;
}
