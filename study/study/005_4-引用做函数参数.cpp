#include <iostream>
using namespace std;

//���ÿ������������Ĳ���

//��������

// 1.ֵ����
void mySwap01(int a, int b) // ֵ���ݣ�ֻ�ı��ββ��ı�ʵ�Σ�
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a=" << a << endl;
	std::cout << "b=" << b << endl;
}

// 2.��ַ����

void mySwap02(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "a=" << *a << endl;
	std::cout << "b=" << *b << endl;
}

// 3.����
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

	mySwap01(a, b); // ʵ�β����ᷢ������
	cout << "a=" << a << endl; //a =10
	std::cout << "b=" << b << endl; // b = 20

	mySwap02(&a, &b); //ͨ��ָ���������ʵ���ڴ��е�ֵ���ʶ��²κ�ʵ�ζ��ᷢ���ı�
	cout << "a=" << a << endl;
	std::cout << "b=" << b << endl;

	mySwap03(a, b);//����ʵ�ʲ�����Ҳ��ԭ���ݣ��ʶ�ԭ����Ҳ��仯
	cout << "a=" << a << endl;
	std::cout << "b=" << b << endl;
	system("pause");
	return 0;
}