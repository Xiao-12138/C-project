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
	 * ָ��ͺ���
	 * ��ʹ��ָ�����βε�ʱ���βεĵı仯��ı�ʵ��
	 */

	//��ʹ��ָ�����βε�ʱ���βεĵı仯��ı�ʵ��

	int a = 10;
	int b = 20;
	swap(&a, &b);

	std::cout << "a = " << a << endl; // a = 20;
	std::cout << "b = " << b << endl; // b = 10;
	// ԭ��: ��ʱ���������ڴ��ַ ��&a��&b�����˽������� ʵ�ε�ֵ��ӦҲ��仯
	system("pause");
	return 0;
}
