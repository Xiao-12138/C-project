#include <iostream>
using namespace std;

/*
 * ���õĻ�������
 *	�����������
 *	�﷨: �������� &���� = ԭ��
 *ע��:
 *	���ñ����ʼ��,��ʼ�������޸� 
 */
int main(int argc, char* argv[])
{
	int a = 10;

	int& b = a;

	b = 20;
	cout << a << endl;
	std::cout << b << endl;


	system("pause");
	return 0;
}
