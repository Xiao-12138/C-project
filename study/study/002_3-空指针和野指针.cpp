#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//��ָ��:ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
	/*
	 * ��; : ��ʼ��ָ�����
	 *
	 * ע��: ��ָ��ָ����ڴ��ǲ����Է��ʵ�(0~255)
	 *
	 * Ұָ��:ָ�����ָ��Ƿ����ڴ�ռ�
	 */

	//��ʼ��ָ�����
	//int* p = NULL;

	//�ڴ���Ϊ0~255��ϵͳռ���ڴ�,�������û�����

	//std::cout << *p << endl;//ERROR: p �� nullptr��

	// Ұָ��ʵ��
	// ָ�����x ָ���ڴ��ַ���Ϊ0x1100�Ŀռ�

	int * x = (int *)0x1100;

	std::cout << *x<< endl;// ��ȡ����Ȩ�޳�ͻ

	system("pause");
	return 0;
}