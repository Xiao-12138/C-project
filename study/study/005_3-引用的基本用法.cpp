#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	// �������� &���� = ԭ��
	int a = 100;
	// �������� ��bҲָ��
	int* b = &a;

	cout << a << endl;
	cout << *b << endl;

	//�ı�b��ֵ
	*b = 1000;

	cout << a << endl;
	cout << *b << endl;

	system("pause");
	return 0;
}
/**
 *ע�����
 *	���ñ���Ҫ��ʼ��
 *
 *	����һ����ʼ���󣬾Ͳ����Ը����ˡ�
 */