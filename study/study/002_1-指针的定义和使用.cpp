#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	// ����ָ��
	int a = 10;
	//ָ�붨����﷨�� �������� * ָ���������
	int* p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;
	std::cout << "a�ĵ�ַΪ��"<< &a << endl;
	cout << "ָ��pΪ��" << p << endl;
	//ʹ��ָ��
	//	����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//	ָ��ǰ�� * ��������ã��ҵ�ָ��ָ����ڴ��е�����
	*p = 1000;
	std::cout << "a = "<< a <<endl;
	std::cout << "*P = " << *p << endl;
	system("pause");
	return 0;
}
