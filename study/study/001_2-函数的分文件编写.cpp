#include <iostream>
using namespace std;
#include "swap.h"

/*
 * �����ķ��ļ���д
 * ���� ��
 *	1. .h ��׺����ͷ�ļ�
 *	2.	.cpp��Դ�ļ�
 *	3.	ͷ�ļ�����������
 *	4��	Դ�ļ��б�д�����Ķ���
 */

int main(int argc, char* argv[])
{
	int a = 20;
	int b = 30;
	swap(a, b);
	std::cout << "fuck" << endl;

	system("pause");
	return 0;
}