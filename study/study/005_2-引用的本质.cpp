#include <iostream>
using namespace std;
//���õı�����c++�ڲ�ʵ����һ��ָ�볣��
//ָ�볣����ָ��ĳ���������ֵ����ָ��ĵ�ַ�����ܸı䣬�������޸�ָ��ı�����ֵ

void func(int& ref) //�Զ�ת��Ϊint* const ref = &a;
{
	ref = 100;//�Զ�ת��Ϊ*ref = 100;
}

int main(int argc, char* argv[])
{
	int a = 10;

	int& ref = a; //�Զ�ת��Ϊ int * const ref = &a; ָ�볣����ָ��ָ�򲻿ɸ�,Ҳ˵��Ϊʲô���ò��ܸ�.ref����a�ı��� ʵ��refҲ��һ��ָ�볣����aָ��ͬһ���ڴ�ռ�

	ref = 20;//���н�����*ref=20��refָ����ڴ�ռ����ֵ�޸�Ϊ20
	std::cout << "a" << a << endl;//a��refָ��ͬһ���ڴ�ռ���ֵ�������仯
	std::cout << "ref" << ref << endl;

	func(a);//����������ת��������ִ��

	system("pause");
	return 0;
}