#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	/*
	 * 32λϵͳ��ռ4���ֽ�
	 * 64λϵͳ��ռ8���ֽ�
	 */
	// ��֤
	int a = 10;
	int* p = &a;
	std::cout << "sizeof(int * ) = " << sizeof(int*) << endl;
	std::cout << "sizeof(int * ) = " << sizeof(float*) << endl;
	std::cout << "sizeof(int * ) = " << sizeof(double*) << endl;
	std::cout << "sizeof(int * ) = " << sizeof(char*) << endl;
	system("pause");
	return 0;
}
